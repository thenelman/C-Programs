//int *arr_sort(int *arr1,int *arr2,int len1,int len2)

#include<iostream>
using namespace std;

const int MAX=50;

int *arr_sort(int *arr1,int *arr2,int len1,int len2);

int *fill_array(int *a,const int size,int &number_used);

void sort(int *a,const int length);

void swap(int &v1,int &v2);

int main()
{
	int *a,*b,l1,l2;
	a=new int[MAX];
	b=new int[MAX];
	int *result,l3;
	result=new int[MAX];
	cout<<"Enter the first array: \n";
	a=fill_array(a,MAX,l1);
	cout<<endl;
	
	cout<<"Enter the second array: \n";
	b=fill_array(b,MAX,l2);
	
	cout<<endl;
	
	result=arr_sort(a,b,l1,l2);
	
	
	l3=l1+l2;
	
	cout<<"The sorted array is: \n";
	
	for(int i=0;i<l3;i++)
	{
		cout<<*(result+i)<<" ";
	}
	return 0;
}


int *fill_array(int *a,int size,int &number_used)
{
	int next,index;
	index=0;
	cin>>next;
	while( index<size && next>=0 )
	{
		*(a+index)=next;
		index++;
		cin>>next;
	}
	number_used=index;
	
	return a;
}

int *arr_sort(int *arr1,int *arr2,int len1,int len2)
{
	int len3;
	len3=len1+len2;
	int *arr;
	arr=new int[MAX];
	for(int i=0;i<len3;i++)
	{
		if(i<len1)
			*(arr+i)=*(arr1+i);
		else
			*(arr+i)=*(arr2+(i-len1));
	}
	for(int i=0;i<len3;i++)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;
	sort(arr,len3);
	return arr;
}

void sort(int *a,const int length)
{
	
	/*for(int i=0;i<length;i++) //bubble sort.
	{
		for(int j=0;j<(length-1);j++)
		{	
			
			
			if(*(a+j)>*(a+(j+1)))
			{
				swap(*(a+j),*(a+(j+1)));
			}
		}
		
	}*/
	for(int i=1;i<length;i++) //insertion sort.
	{
		int j=i-1;
		int key=*(a+i);
		while(j>=0 && *(a+j)>key)
		{
			*(a+(j+1))=*(a+j);
			j=j-1;
		}
		*(a+(j+1))=key;
	}
}

void swap(int &v1,int &v2)
{
	int temp;
	temp=v1;
	v1=v2;
	v2=temp;
}

