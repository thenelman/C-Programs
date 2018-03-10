#include<iostream>

using namespace std;


int main()
{

	int n=10;
	int positive_sum=0,negative_sum=0,total_sum,num;
	cout<<"\nEnter 10 numbers\n";
	while(n-->0)
	{
		cin>>num;
		if(num>0)
			positive_sum+=num;
		else
			negative_sum+=num;
	}
	
	total_sum=positive_sum+negative_sum;
	
	cout<<"\nSum of the positive numbers : "<<positive_sum;
	cout<<"\nSum of the negative numbers : "<<negative_sum;
	cout<<"\nTotal sum of the numbers: "<<total_sum;
	
		
	return 0;
}
