#include<iostream>
#include<cstdlib>

using namespace std;

struct node
{
	int info;
	node* next;
	
}*head;


void insert(node **head,int data,int pos)
{
	node *t,*p;
	node *temp=new node();
	temp->info=data;

	t=*head;
	if(pos==1)
	{
		temp->next=t;
		*head=temp;
	}
	else
	{
		int k=1;
		while((t!=NULL)&&(k<pos))
		{
			k++;
			p=t;
			t=t->next;
		}
		p->next=temp;
		temp->next=t;
	}
};

void display(node *head);
void deletenode(node **head,int pos);
void rotate(node **head,int key);
void swapnodes(node **head,int x,int y);
void reversellist(node **head);
bool isPalindrome(node *head);

int main()
{
	node *head;
	head=NULL;
	char ch;
	int num;
	cout<<"Do you want to create a list?\n";
	cin>>ch;
	while((ch=='Y') || (ch=='y'))
	{
		cout<<"Enter the number to be added in the list.\n";
		cin>>num;
		node *t=new node();
		t->info=num;
		t->next=head;
		head=t;
		cout<<"another one ?\n";
		cin>>ch;
	}
	
	display(head);
	
	if(isPalindrome(head))
	{
		cout<<"List is a palindrome.\n";
	}
	else
	cout<<"not a palindrome.\n";
	
	cout<<"reversing the list.\n";
	reversellist(&head);
	
	display(head);
	
	int pp;
	cout<<"Do you want to insert a number?\n";
	cin>>ch;
	if((ch=='Y')||(ch=='y'))
	{
		cout<<"Enter the number to be added.\n";
		cin>>num;
		cout<<"At which position?\n";
		cin>>pp;
		insert(&head,num,pp);
	}
	
	display(head);
	
	cout<<"do you want to delete a node?\n";
	cin>>ch;
	while((ch=='Y')||(ch=='y'))
	{
		cout<<"enter the position of the node. \n";
		cin>>pp;
		deletenode(&head,pp);
		cout<<"another one?\n";
		cin>>ch;
	}
	display(head);
	
	cout<<"rotating the list by 3.\n";
	rotate(&head,3);
	
	display(head);
	
	int a,b;
	cout<<"Enter two numbers to be swapped.\n";
	cin>>a>>b;
	swapnodes(&head,a,b);
	
	display(head);

	return 0;
}


void deletenode(node **head,int pos)
{
	node *previous,*current;
	int k=1;
	
	if(*head==NULL)
	{
		cout<<"there are no elements to be deleted. \n";
		return;
	}
	
	current= *head;
	if(pos==1)
	{
		*head=current->next;
		free(current);
		return;
	}
	
	while((current!=NULL)&&(k<pos))
	{
		k++;
		previous=current;
		current=current->next;
	}
	
	if(current==NULL)
	{
		cout<<"position doesn't exist.\n";
	}
	else
	{
		previous->next=current->next;
		free(current);
	}
}

void display(node *head)
{
	cout<<"The list is : ";
	node *p;
	p=head;
	while(p!=NULL)
	{
		cout<<p->info<<" ";
		p=p->next;
	}
	cout<<endl;
}

void rotate(node **head,int key)
{
	if(key==0)
		return;
	
	node *current;
	current=*head;
	int count=1;
	while(count<key && current!=NULL)
		{
			current=current->next;
			count++;
		}
	
	if(current==NULL)
		{
			cout<<"Key is greater than size of the list.\n";
			return;
		}
	node *kthnode;
	kthnode=current;
	while(current->next!=NULL)
		current=current->next;
	
	current->next=(*head);
	
	*head=kthnode->next;
	
	kthnode->next=NULL;
	
}

void swapnodes(node **head,int x,int y)
{
	if(x==y)
		return;
	node *currX,*currY,*prevX=NULL,*prevY=NULL;
	currX=*head;
	
	while(currX!=NULL && currX->info!=x)
	{
		prevX=currX;
		currX=currX->next;
	}
	
	currY=*head;
	while(currY!=NULL && currY->info!=y)
	{
		prevY=currY;
		currY=currY->next;
	}
	
	if(currX==NULL || currY ==NULL)
		return;
	
	if(prevX!=NULL)
		prevX->next=currY;
	else
		*head=currY;
	
	if(prevY!=NULL)
		prevY->next=currX;
	else
		*head=currY;
	
	node *temp;
	temp=currY->next;
	currY->next=currX->next;
	currX->next=temp;
}


void reversellist(node **head)
{
	node *current=*head;
	node *prev=NULL;
	node *next=NULL;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	
	*head=prev;
	
}

bool isPalindrome(node *head)
{
    node *fastptr=head;
    node *slowptr=head;
    node *mid=NULL;
    node *prevslptr;
    bool palin=true;
    while(fastptr && fastptr->next)
    {
        fastptr=fastptr->next->next;
        prevslptr=slowptr;
        slowptr=slowptr->next;
    }
    
    if(fastptr!=NULL)//odd
    {
    	
    	mid=slowptr;
        slowptr=slowptr->next;
    }
    
    prevslptr->next=NULL;
    reversellist(&slowptr);
    node* temp=head;
    node* secndhlf=slowptr;
    while(temp && secndhlf)
    {
    	if(temp->info != secndhlf->info)
    		palin=false;
    	temp=temp->next;
    	secndhlf=secndhlf->next;
    }
    
    reversellist(&slowptr);
    if(mid)
    {
    	prevslptr->next=mid;
    	mid->next=slowptr;
    }
	else
	{
		prevslptr->next=slowptr;
	}
	
	return palin;
}
