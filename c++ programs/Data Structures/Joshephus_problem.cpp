#include<iostream>
#include<cstdlib>

using namespace std;

struct cNode
{
	int data;
	cNode* next;
};

typedef cNode* Nptr;

void insert(Nptr &head,int val)
{
	if(head==NULL)
	{
		head=new cNode;
		head->data=val;
		head->next=head;
		return;	
	}
	
		Nptr p=head;
		while(p->next!=head)
		{
			p=p->next;
		}
		p->next=new cNode;
		p->next->data=val;
		p->next->next=head;
	
};

void remove(Nptr &head,Nptr p)//p points to the node to be deleted
{
	if(head==NULL){
		cout<<"cannot remove anything!";
		exit(1);
	}
	if(head->next==head)
	{
		head=NULL;
		return;
	}
	Nptr ptr;
	ptr=head;
	while(ptr->next!=p)
		ptr=ptr->next;
	
	if(p==head)
		head=head->next;
	ptr->next=p->next;
	delete p;
};

int size(Nptr head)
{
	int count=0;
	if(head==NULL)
		return count;
	Nptr p=head;
	count++;
	while(p->next!=head)
	{
		p=p->next;
		count++;
	}
	
	return count;
};

void Display(Nptr head)
{
	Nptr p=head;
	while(p->next!=head)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<p->data<<endl;
};

int main()
{
	Nptr head=NULL;
	int N,M;
	cout<<"Enter M: ";
	cin>>M;
	cout<<"Enter number of players: ";
	cin>>N;
	for(int i=0;i<N;i++)
	{
		insert(head,i+1);
	}
	cout<<"Player eliminated in the game in order: ";
	while(size(head)!=1)
	{
		Nptr p=head;
		int count=0;
		while(count!=M)
		{
			p=p->next;
			count++;
		}
		head=p->next;
		cout<<p->data<<" ";
		remove(head,p);
	}
	cout<<endl;
	cout<<"The winner is : ";
	Display(head);
	
	return 0;
}


