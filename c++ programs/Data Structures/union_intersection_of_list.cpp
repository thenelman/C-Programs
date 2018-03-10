#include<list>
#include<iostream>
#include<cstdlib>

using namespace std;

list<int> intersection(list<int> L1,list<int> L2)
{
	list<int> intersectionList;
	for(list<int>::iterator itr1=L1.begin();itr1!=L1.end();++itr1)
	{
		list<int>::iterator itr2=L2.begin();
		while(itr2!=L2.end())
		{
			if(*itr1==*itr2)
			{
				int num=*itr1;
				intersectionList.push_back(num);
				break;
			}
			++itr2;
		}
	}
	return intersectionList;
};

list<int> Union(list<int> L1,list<int> L2)
{
	list<int> UnionList(L1);
	list<int> L3(L2);
	
	for(list<int>::iterator itr1=L1.begin();itr1!=L1.end();++itr1)
	{
		list<int>::iterator itr2=L3.begin();
		while(itr2!=L3.end())
		{
			if(*itr1==*itr2)
			{
				L3.erase(itr2);
				break;
			}
			++itr2;
		}
	}
	
	for(list<int>::iterator itr=L3.begin();itr!=L3.end();++itr)
	{
		UnionList.push_back(*itr);
	}
	
	return UnionList;
};

void displayList(list<int> L)
{
	for(list<int>::iterator itr=L.begin();itr!=L.end();++itr)
	{
		cout<<*itr<<" ";
	}
	cout<<endl;
};


void input(list<int> &L)
{
	int num;
	char ch;
	cout<<"Enter values of the list: \n";
	do{
		cout<<"Enter the value: ";
		cin>>num;
		L.push_back(num);
		cout<<"Enter again?\n";
		cin>>ch;
	}while(ch=='Y'||ch=='y');
	cout<<endl;
}

int main()
{
	list<int> L1,L2,L3,L4;
	cout<<"Please enter List 1 value in ascending order.\n";
	input(L1);
	cout<<"Please enter List 2 value in asecending order.\n";
	input(L2);
	cout<<"List 1: \n";
	displayList(L1);
	cout<<"List 2: \n";
	displayList(L2);
	L3=intersection(L1,L2);
	L4=Union(L1,L2);
	cout<<"Intersection of the list 1 and list 2: \n";
	displayList(L3);
	cout<<"Union of the list 1 and list 2: \n";
	displayList(L4);
	
	return 0;
}

