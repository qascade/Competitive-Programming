#include <bits/stdc++.h>

using namespace std;

class Node
{
	public:
		int data=0;
		Node *next=nullptr;

		Node(int data) //constructor with argument
		{
			this->data=data;
		}
		Node() //NO args constructor
		{
			this->data=0;
		}
		
};
void printList(Node *head)
{
	Node *temp=head->next;
	while(temp!=nullptr)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void insert(Node *head, int value,int position=-1)
{			
	Node* temp=head;
	if(position==-1)
	{	
		while(temp->next!=nullptr)
		{
			temp=temp->next;
		}
		Node *newNode = new Node(value);
		temp->next=newNode;
	}
	else
	{
		position=position-1;
		while(position--)
		{
			temp=temp->next;
		}
		Node *newNode=new Node(value);
		Node *t=temp->next;
		temp->next=newNode;
		temp->next->next=t;
	}	
}
void deleteNode(Node *head,int position)
{
	Node *temp=head;
	position=position-1;
	while(position--)
	{
		temp=temp->next;
	}
	Node* TobeDeleted=temp->next;
	temp->next=temp->next->next;
	delete TobeDeleted;//deallocating the memory allocated as we have to deallocate manually
}	

int main()
{
	Node* head=new Node();
	insert(head,200);
	insert(head,30);
	insert(head,40);
	insert(head,506);
	insert(head,60);
	insert(head,5,2);
	printList(head);
	
	
	return 0;
}