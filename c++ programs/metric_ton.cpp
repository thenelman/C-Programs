#include<iostream>

using namespace std;

const double metric_ton=35273.92;
int main()
{
	double weight_of_package,weight_in_MT,no_of_boxes;
	char ch;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	do
	{
		cout<<"Enter the weight of the package of cereal in ounces: ";
		cin>>weight_of_package;
		weight_in_MT=weight_of_package/metric_ton;
		no_of_boxes=(1/weight_in_MT);
		cout<<"\nThe weight of the package in terms of metric ton is "<<weight_in_MT<<" metric ton.\n";
		cout<<"The number of Boxes required to yield 1 metric ton is "<<no_of_boxes<<endl;
		cout<<"Do you want to check again. Press 'Y' for yes and 'n' for no.\n";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	
	cout<<"Good Day";
	
	
	return 0;
}
