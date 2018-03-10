#include<iostream>
const int SIZE =20;

using namespace std;

void fill_array(int a[],int &number_used,int size);

int search(int a[],int number_used,int target);

int main()
{
	int arr[SIZE],list_size,target;
	
	fill_array(arr,list_size,SIZE);
	char ans;
	int result;
	do
	{
		cout<<"Enter the number to be searched \n";
		cin>>target;
		
		result=search(arr,list_size,target);
		if (result==-1)
			cout<<target<<" is not present in the list. \n";
		else
			cout<<target<<" is stored in array position "<<result<<endl
				<<"The first position is 0 :) \n";
		cout<<"Search again \n"<<"y/n followed by return \n";
		cin>>ans;
	}while((ans=='Y')||(ans=='y'));
	
	cout<<"End of Program. \n";
	return 0;
}

void fill_array(int a[],int& number_used,int size)
{	
	int next,index=0;
	cout<<"Enter the list of positive numbers.\n(end by a negative number)\n";
		cin>>next;
		while((index<size)&&(next>=0))
		{
			a[index]=next;
			index++;
			cin>>next;
		}
	number_used=index;
}

int search(int a[],int number_used,int target)
{
	for(int i=0;i<number_used;i++)
	{
		if (a[i]==target)
			return i;
	}
	
	return -1;
}
