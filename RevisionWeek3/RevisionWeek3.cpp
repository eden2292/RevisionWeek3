#include <iostream>

using namespace std;

	struct Node
	{
		int num;
		Node* next;
	};
	struct Node* head = NULL;

	void insertNode(int n)
	{
		struct Node* new_node = new Node;
		new_node->num=n;
		new_node->next = head;
		head = new_node;
	}

	void takeData()
	{
		int userNum;

		cout << "enter data to be added to the list" << endl;

		cin >> userNum;

		insertNode(userNum);
	}

	void display()
	{
		cout << "you have entered: " << endl;
		struct Node *temp = head;
		while (temp != NULL)
		{
			cout << temp->num << " ";
			temp = temp->next;
		}

		cout << endl;
	}

	void runItBack()
	{
		string yesNo;
		cout << "any further information to add? Y/N" << endl;
		cin >> yesNo;

		if (yesNo == "Y" || yesNo == "y")
		{
			takeData();
		}
		else if (yesNo == "N" || yesNo == "n")
		{
			//do nothing
		}
	}

	int main()
	{
		int dataNum;

		cout << "how many pieces of data do you wish to enter? " << endl;
		cin >> dataNum;

		for(int i = 0; i < dataNum; i++)
		{
			int userNum;

			takeData();
		}

		display();

		runItBack();

		display();

	}