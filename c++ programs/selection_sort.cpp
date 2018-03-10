#include<iostream>
const int MAX=20;
using namespace std;

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
};

/*int index_of_smallest(const int a[],int start_index,int number_used)
{
	int min;
	min=a[start_index];
	int min_index;
	min_index=start_index;
	for(int i=start_index+1;i<number_used;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
			min_index=i;
		}
	}
	return min_index;	
};
*/

void sort(int a[],int number_used)
{
	int min_i;
	for(int i=0;i<number_used-1;i++)
	{
		min_i=i;
		for(int j=i+1;j<number_used;j++)
		{
			if(a[j]<a[min_i])
				{
					min_i=j;
				}
		}
		
		swap(a[i],a[min_i]);
	}	
};

void swap(int &v1,int& v2)
{
	int temp;
	temp=v1;
	v1=v2;
	v2=temp;
};

void display(const int a[],int number_used)
{	
	cout<<"The array list is: \n";
	for(int i=0;i<number_used;i++)
		cout<<a[i]<<"\t";
	cout<<endl;
};

int main()
{
	int a[MAX],num;
	cout<<"Enter the array list terminated by a negative number \n";
	fill_array(a,num,10);
	cout<<"Array before Sorting: \n";
	display(a,num);
	cout<<"Now we are sorting the array. \n";
	sort(a,num);
	cout<<"Array after sorting : \n";
	display(a,num);
	
	cout<<"End of program\n";
	
	return 0;
}
