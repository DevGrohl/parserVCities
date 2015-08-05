#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Node
{
public:
	string name;
	vector <Node*> childs;
	vector <string> property;

	void setName(string name){this->name = name;}
	string getName(){return this->name;}

	void addChild(Node* child){this->childs.push_back(child);}
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
	void addProperty(string property){this->property.push_back(property);}
};

int main(int argc, char const *argv[])
{
	Node root;
	root.setName("Padre");
	cout << root.getName() << endl;

	return 0;
}
