#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Node
{
public:
	string name;
	vector <Node*> childs;
	map <string, string> properties;

	void setName(string name){
		this->name = name;
	}
	
	string getName(){return this->name;}

	void addChild(Node* child){
		this->childs.push_back(child);
	}

	void deleteChild(){
		string search;
		cout << "Nodo a eliminar: ";
		cin >> search;
		for (unsigned i = 0; i < childs.size(); i++) {
			if (search == childs.at(i)->getName()) {
				childs.erase(childs.begin()+i);
			}
		}
	}

	void showChilds(){
		for (unsigned i = 0; i < this->childs.size(); ++i) {
			cout << this->childs.at(i)->getName() << endl;
		}
	}

	void addProperty(string property, string value){
		this->properties.insert(pair <string, string> (property, value));
	}

	void showProperty(){
		for (auto& property: this->properties) 
			cout << property.first << " : " << property.second << endl;
	}
};

int main(int argc, char const *argv[])
{
	Node root;
	root.setName("Padre");
	root.addProperty("Posicion", "3,4");
	cout << root.getName() << endl;
	root.showProperty();

	Node child;
	child.setName("Child");
	root.addChild(&child);
	root.showChilds();

	return 0;
}
