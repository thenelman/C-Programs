#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

void printevenodd(char str[][10],int length)
{   
	int even[10],odd[10];
	for(int i=0;i<length+1;i++)
	{
		//find evn indices and odd indices
		int j=0,l=0;
		for(int k=0;k<strlen(str[i]);k++)
		{
			if((k==0) || (k%2==0))
			{
				even[j]=k;
				j++;
			}
			else
			{
				odd[l]=k;
				l++;
			}
		}
		//print evn indexed value separated by space
		for(int k=0;k<j;k++)
		{
			int a;
			a=even[k];
			cout<<str[i][a];
		}
		cout<<" ";
		for(int k=0;k<l;k++)
		{
			int b;
			b=odd[k];
			cout<<str[i][b];
		}
		cout<<endl;
	}
};

int main()
{	int n;
	cin>>n;
	char abc[n+1][10];
    for(int i=0;i<n+1;i++)
    {
		char next[10];
    	cin.getline(next,10);
    	strcpy(abc[i],next);  	
    }
    printevenodd(abc,n);
      
    return 0;
}
