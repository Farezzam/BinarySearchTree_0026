#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = nullptr; //
	}

	void insert(string element) //
	{
		Node* newNode = new Node(element, nullptr, nullptr); //
		newNode->info = element; //
		newNode->leftchild = nullptr; //
		newNode->rightchild = nullptr; //

		Node* parent = nullptr;
		Node* currentNode = nullptr;
		search(element, parent, currentNode); //

		if (parent == nullptr) //
		{
			ROOT = newNode; //
			return;
		}

		if (elemnt < parent->info) //
		{
			parent->leftchild = newNode; //
		}
		else if (element > parent->info) //
		{
			parent->rightchild = newNode; // 
		}
	}
};