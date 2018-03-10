#include<iostream>

using namespace std;


int main()
{

	double mph,seconds;
	int minutes;
	
	cout<<"Enter the mph to be converted into pace: ";
	cin>>mph;
	double n;
	n=(1/mph)*60;
	minutes=static_cast<int>(n);
	seconds=(n-minutes)*60;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	cout<<mph<<" mph should be "<<minutes<<" minutes and "<<seconds<<" seconds per mile";
		
	return 0;
}
