#include<iostream>
using namespace std;

void get_input(int &hr,int &min);
void convert(int &hr,int &min,char &zone);
void output(int &hr,int &min,char &zone);


int main(){
	int hour,minute;
	char ch,zone; //zone is either 'P' or 'A'
	do{
		get_input(hour,minute);
		convert(hour,minute,zone);
		output(hour,minute,zone);
		cout<<"Wish to convert again? press Y to confirm.\n";
		cin>>ch;
	}while(ch=='y' || ch=='Y');
	
	return 0;
}

void get_input(int &hr,int &min)
{
	cout<<"Enter the time in 24 hour format.\n";
	cin>>hr>>min;
}

void convert(int &hr,int &min, char &zone)
{
	if(hr>=12)
	{
		if(hr>12)
			hr=hr-12;
		zone='P';
	}
	
	else
	{
		if(hr==0)
			hr=12;
		zone='A';
	}	
}

void output(int &hr,int &min,char &zone)
{
	cout<<"The 12 hour format of the given time is "<<hr<<":"<<min<<zone<<"M.\n";
}
