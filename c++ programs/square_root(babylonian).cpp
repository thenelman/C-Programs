#include<iostream>

using namespace std;


int main()
{

	int n;
	double r,guess,prev,range;
	cout<<"Enter the number: ";
	cin>>n;
	guess=n/2;
	do{
		prev=guess;
		r=n/guess;
		guess=(guess+r)/2;
		range=0.01*prev;
	}while((guess<(prev-range)) || (guess>(prev+range)));
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"\nThe square root of n: "<<guess;
		
	return 0;
}
