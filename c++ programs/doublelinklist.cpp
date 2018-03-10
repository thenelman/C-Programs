#include<iostream>
#include<cstdlib>

using namespace std;

struct dllnode
{
	dllnode *prev;
	int info;
	dllnode *next;
}*head;

void displaylist(dllnode *head);
void insertnode(dllnode **head,int data,int pos);
void reverselist(dllnode **head);
void deletedlnode(dllnode **head,int data)
{
	dllnode *temp;
	dllnode *prev=NULL;
	temp=*head;
	if(temp==NULL)
	{
		cout<<"no elements exist.\n";
		return;
	}
	do
	{
		if(temp->info==data)
			{
				if(*head==temp)
				{
					*head=(*head)->next;
				}
				prev=temp->prev;
				if(prev)
					prev->next=temp->next;
				if(temp->next)
					temp->next->prev=prev;
				temp->next=NULL;
				temp->prev=NULL;
				free(temp);
				return;
			}
		else
			temp=temp->next;
	}while(temp!=NULL);
	
	if(temp==NULL)
		cout<<"element doesn't exist in the list.\n";
}

int main()
{
	dllnode *head;
	head=NULL;
	char ch;
	int num;
	cout<<"Do you want to create a double link list?\n";
	cin>>ch;
	while((ch=='y')||(ch=='Y'))
	{
		dllnode *newnode=new dllnode();
		cout<<"Enter the value of the node.\n";
		cin>>num;
		newnode->info=num;
		newnode->next=head;
		newnode->prev=NULL;
		
		if(head)
			head->prev=newnode;
		head=newnode;
		cout<<"another one?\n";
		cin>>ch;
	}
	
	cout<<"Do you want to delete a node? \n";
	cin>>ch;
	while((ch=='y')||(ch=='Y'))
	{
		cout<<"Enter the value of the node to be deleted.\n";
		cin>>num;
		deletedlnode(&head,num);
		displaylist(head);
		cout<<"another one?\n";
		cin>>ch;
	}
	
	displaylist(head);
	int pp;	
	cout<<"Do you want to insert a number? \n";
	cin>>ch;
	while((ch=='y')||(ch=='Y'))
	{
		cout<<"enter the number to be inserted.\n";
		cin>>num;
		cout<<"At which position?\n";
		cin>>pp;
		insertnode(&head,num,pp);
		cout<<endl;
		displaylist(head);
		cout<<"Another one?\n";
		cin>>ch;
	}
	
	cout<<"Reversing the list.\n";
	reverselist(&head);
	displaylist(head);
	return 0;
}

void displaylist(dllnode *head)
{
	dllnode *p;
	p=head;
	cout<<"The list is : ";
	while(p!=NULL)
	{
		cout<<p->info<<"--";
		p=p->next;
	}
	cout<<endl;
}

void insertnode(dllnode **head,int data,int pos)
{
	int k=1;
	dllnode *temp;
	dllnode *newnode=new dllnode();
	newnode->info=data;
	
	temp=*(head);
	
	if(pos==1)
	{
		newnode->next=*(head);
		newnode->prev=NULL;
		
		if(*head)
			(*head)->prev=newnode;
		*head=newnode;
		return;
	}
	
	while((temp->next!=NULL)&&(k<pos-1))
	{
		temp=temp->next;
		k++;
	}
	
	if(k!=pos)
	{
		cout<<"position doesnt exist in the list.\n";
	}
	
		newnode->next=temp->next;
		newnode->prev=temp;
		
		if(temp->next)
		{
			temp->next->prev=newnode;
		}
		temp->next=newnode;
	
}


void reverselist(dllnode **head)
{
	dllnode *current;
	dllnode *ptr=NULL;
	current=*(head);
	while(current!=NULL)
	{
		ptr=current->prev;
		current->prev=current->next;
		current->next=ptr;
		current=current->prev;
	}
	
	if(ptr!=NULL)
	*head=ptr->prev;
}
