#include<iostream>
#include<cmath>
using namespace std;

const double mperft=0.3048;
const double cmpermtr=100;
const double inchesperft=12;

void get_input(double &mtr,double &centi);
void convert_to_ft_and_inches(double mtr,double centi,int &ft,double &inches);
void output(int ft,double inches);

int main()
{
	int ft;
	double metres,centimtr,inches;
	char ch;
	do{
		get_input(metres,centimtr);
		convert_to_ft_and_inches(metres,centimtr,ft,inches);
		output(ft,inches);
		
		cout<<"Convert again? press Y to confirm.\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	
	return 0;
}

void get_input(double &mtr,double &centi)
{
	cout<<"Enter the length in metres and centimeters.\n";
	cin>>mtr>>centi;
}

void convert_to_ft_and_inches(double mtr,double centi,int &ft,double &inches)
{
	double totalmetres=mtr+(centi/cmpermtr);
	double feet=totalmetres/mperft;
	ft=static_cast<int>(feet);
	inches=(inchesperft*(feet-ft));
	//inches=static_cast<int>(i);
	
}

void output(int ft,double inches)
{	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<"The converted length is "<<ft<<" ft and "<<inches<<" inches.\n";
}
