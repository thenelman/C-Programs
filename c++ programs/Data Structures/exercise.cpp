#include<list>
#include<iostream>
#include<cstdlib>

using namespace std;

void PrintLots(list<int> L,list<int> P)
{
	list<int>::iterator itr;
	for(itr=P.begin();itr!=P.end();itr++)
	{
		int temp=*itr;
		if(temp>L.size())
		{
			cout<<"index out of bound for list L.\n";
			exit(1);
		}
		
		int count=1;
		list<int>::iterator itr1=L.begin();
		while(count<temp)
		{
			itr1++;
			count++;
		}
		cout<<*itr1<<" ";
	}
};

int main()
{
	list<int> L,P;
	int num;
	cout<<"Enter the list of number for list L in ascending order.\n";
	char ch;
	do
	{
		cin>>num;
		L.push_back(num);
		cout<<"Enter again?\n";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	
	cout<<"Enter the list of number for list P in ascending order.\n";
	do
	{
		cin>>num;
		P.push_back(num);
		cout<<"Enter again?\n";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	
	cout<<"The elements in L that are in position specified by P are printed below: \n";
	PrintLots(L,P);
	
	return 0;
	
}
