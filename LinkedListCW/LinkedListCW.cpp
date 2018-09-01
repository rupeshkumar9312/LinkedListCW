

// LinkedListDemo.cpp : Defines the entry point for the console application.
//

#include "pch.h"
#include <iostream>
using namespace std;
struct node {

	int data;
	node *link;
};

class list {
private:

public:
	node * head, *tail;
	list() {
		head = NULL;
		tail = NULL;
	}

	void push(int value)
	{
		//node *temp = head;		
		node *n = new node;
		n->data = value;
		n->link = NULL;
		if (head == NULL) {
			head = n;
			tail = n;				//queue implemetation...
			head->link = NULL;
			//temp = NULL;
		}
		else {
			node *_node = new node;
			_node->data = value;			//stack implementation...
			_node->link = head;
			head = _node;
			/*node *temp = new node;
			*temp = *head;
			n = head;
			n->link = temp;*/
			/*tail->link = n;
			tail = n;
			tail->link = NULL;*/
		}
		//n->data = value;
		////n->data = 20;
		//cout << n->data;
		//cout << n->link;
	}

	void display()
	{

		node *temp = new node;
		temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "\t" << endl;
			//cout << temp->link << endl;

			temp = temp->link;

		}
		cout << "----------------------" << endl;
	}
	void pop() {
		try {
			if (head == NULL) {
				cout << "Empty Stack... No item to POP" << endl;
				return;
			}
			if (head != NULL)
			{
				//node *temp = head;
				cout << "Item Popped : " << head->data << endl;
				head = head->link;
				//free(head);
				cout << "New Head : " << head->data << endl;
			}
		}
		catch (exception) {
			//cout << ex << endl;
		}

	}

};

int main() {
	list l;
	//l.push(20);
	cout << "Enter number to push" << endl;
	int n = 0;
	cin >> n;
	l.push(n);
	//l.display();
	//l.push(30);
//l.push(40);
	//l.display();
	//l.pop();
	//l.pop();
	l.display();

	//.display();
	//l.pop();
	//l.display();

	getchar();
	return 0;
}

