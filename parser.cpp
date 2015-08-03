#include <iostream>
#include <vector>
#include <string>

class Node
{
public:
	Node();
	~Node();

	string name;
	vector <Node*> childs;
	vector <string> property;

	void setName(string name){this->name = name;}
	string getName(){return this->name;}

	void addChild(Node* child){this.childs.push_top(child);}

	void addProperty(string property){this->property.push_top(property);}
};

int main(int argc, char const *argv[])
{
	
	return 0;
}