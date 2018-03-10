#include<iostream>
#include<cmath>

using namespace std;

double miles_per_gallon(double miles,double gallons);

int main()
{
	const double litres_per_gallon=0.264179;
	double no_litres,miles,no_gallons,mpg;
	
	
	char ch;
	do{
		cout<<"Enter the litres of gasoline consumed by the user's car.\n";
		cin>>no_litres;
		cout<<"Enter the number of miles travelled by the car.\n";
		cin>>miles;
		
		no_gallons=no_litres/litres_per_gallon;
		mpg=miles_per_gallon(miles,no_gallons);
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout<<"So the mileage the car delivered is "<<mpg<<" miles per gallon.\n";
		cout<<"Wanna try again.\n";
		cin>>ch;
	}while(ch=='y'|| ch=='Y');
	
	return 0;
}

double miles_per_gallon(double miles,double gallons)
{
	return (miles/gallons);
}
