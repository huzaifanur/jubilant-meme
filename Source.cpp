#include<iostream>
using namespace std;
struct node {
	int data;
	node *next;
};
void insert(node *& head, int input)
{
	node *h = new node;
	h->data = input;
	h->next = NULL;

	if (head == NULL)
	{
		head = h;
	}
	else
	{
		node * temp = head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp ->next= h;


	}
}
void display(node *head)
{
	while (head != NULL)
	{
		cout << head->data << "  ";
		head = head->next;
	}
}
void midinsert(node *&head,int  place, int  input)
{ 
	node *h = new node;
	h->data = input;
	h->next= NULL;
	node *temp = head;
	for (int i = 1; i < place;i++)
	{
		temp = temp->next;
	}
	node *save = temp->next;
	temp->next = h;
	h->next = save;

}
int main()
{
	node * head = NULL;
	int input,cond,place;
	cout << " How many nodes you want in the list :\n\n ";
	cin >> cond;
	while (cond!=0)
	{
		
		cin >> input;
		insert(head, input);
		system("cls");
		cout << " Your list is : ";
				display(head);
				cond--;
	}
	
	cout << " At what place you want to add a node\n\n ";
	cin >> place;
	cout << " Ente a value for the new node ";
	cin >> input;
	midinsert(head, place, input);
	display(head);
	system("pause");
	return 0;
}