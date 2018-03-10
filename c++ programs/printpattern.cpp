#include<iostream>
const int MAX=100;
int a[MAX][MAX];

using namespace std;

void printnumberpattern(int n);

int main()
{
	int number;
	int key=1;
	
	cout<<"Enter an integer less than 100\n";
	cin>>number;
	for(int i=0;i<number;i++)
	{
		for(int j=0;j<=i;j++)
		{
			a[i][j]=key;
			key++;
		}
	}
	
	printnumberpattern(number);
	return 0;
}

void printnumberpattern(int n)
{
	for(int i=0;i<n;i++)
		{	
			int k=(i)%2;
			if(k==0)
			{
				for(int j=0;j<=i;j++)
				{
					if(i!=j)
					cout<<a[i][j]<<"*";
					else
					cout<<a[i][j]<<endl;
				}
				
			}
			else
			{
				for(int j=i;j>=0;j--)
				{
					if(j!=0)
					cout<<a[i][j]<<"*";
					else
					cout<<a[i][j]<<endl;
				}	
			}
		}
}
