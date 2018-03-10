#include<iostream>

using namespace std;

const double mperft=0.3048;
const double cmpermtr=100;
const double inchesperft=12;

void get_input(double &ft,double &inches);
void convert_to_metrs_and_centi(double ft,double inches,int &metrs,int &centim);
void output(int mtr,int centim);

int main()
{
	double ft,inches;
	int metres,centimtr;
	char ch;
	do{
		get_input(ft,inches);
		convert_to_metrs_and_centi(ft,inches,metres,centimtr);
		output(metres,centimtr);
		
		cout<<"Convert again? press Y to confirm.\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	
	return 0;
}

void get_input(double &ft,double &inches)
{
	cout<<"Enter the length in feet and inches.\n";
	cin>>ft>>inches;
}

void convert_to_metrs_and_centi(double ft,double inches,int &metrs,int &centim)
{
	double totalft=ft+(inches/inchesperft);
	double metres=totalft*mperft;
	metrs=static_cast<int>(metres);
	double c=100*(metres-metrs);
	centim=static_cast<int>(c);
	
}

void output(int mtr,int centim)
{
	cout<<"The converted length is "<<mtr<<" m and "<<centim<<" cm.\n";
}
