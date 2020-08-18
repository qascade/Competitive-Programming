#include <bits/stdc++.h>
#define ll long long int
using namespace std;

class Node //Object Node
{
public:
	ll data=0;
	Node *next=nullptr;
	Node(ll value=0)
	{
		data=value;
		next=nullptr;
	}

};

class List //Node Inherit list Object create krn vaaste
{
public:
	Node* head=nullptr;
	ll size=0; // No.of Nodes in a List
	List()//No args constructor
	{
		this->head=new Node(); //head data=0 (bug) //  struct Node* head= (struct Node*) malloc(sizeof(struct Node)); 
	}
	void insert(ll data,ll pos=-1)
	{
		if(pos>0)
		{
			pos=pos-1;
			Node* temp=head;
			Node* newNode= new Node(data);
			while(pos--)
			{
				temp=temp->next;
			}
			Node* after=temp->next;
			temp->next=newNode;
			temp=temp->next;
			temp->next=after;
		}
		else
		{
			Node* temp=head;
			Node *newNode=new Node(data);
			while(temp->next!=nullptr)	
			{	
				temp=temp->next;
			}
			temp->next=newNode;
		}
		size++;
	}
	void printList()
	{
		if(head->next==nullptr)
			cout<<"LIST KHAALI HAI"<<endl;
		
			Node* temp=head->next;
			while(temp!=nullptr)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<endl;

	}
	void DeleteNode(ll pos)
	{
		if(head->next==nullptr)
			cout<<"LIST CH KUJH BHARO"<<endl;
		Node * temp=head;
		pos=pos-1;
		while(pos--)
		{
			temp=temp->next;
		}
		Node* tobeDeleted=temp->next;
		temp->next=temp->next->next;
		delete tobeDeleted;
		size--;
	}
	int Size()
	{
		return size;
	}
};

int main()
{
	List devang;
	devang.insert(10);
	devang.insert(20);
	devang.insert(30);
	devang.insert(55); 
	devang.insert(78);
	devang.insert(23334,2);
	devang.printList();//0 10 30 55 78 pos=2 pos=1 
	devang.DeleteNode(2);
	devang.printList();
	devang.insert(2045452,4);
	devang.printList();
	devang.DeleteNode(4);
	devang.printList();
	devang.insert(8008,1);
	devang.printList();
	cout<<devang.Size()<<endl;//Size of List
	devang.DeleteNode(1);//Deleting the firstNode
	devang.printList();
	cout<<devang.Size();

	return 0;
}
