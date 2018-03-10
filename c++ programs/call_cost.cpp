#include<iostream>

using namespace std;


int main()
{

	char ch;
	char d1,d2;
	int length_of_call,hr,min;
	double charged;
	
	do{
		cout<<"Enter the day of the week as Mo,Tu,We,Th,Fr,Sa,Su.\n";
		cin>>d1>>d2;
		cout<<"Enter the start time in 24 hour format hr:min.\n";
		cin>>hr>>min;
		cout<<"Enter the length of the call.\n";
		cin>>length_of_call;
		switch(d1)
		{
			case 's':
			case 'S':
						switch(d2)
						{
							case 'a':
							case 'A':
							case 'u':
							case 'U':	charged = 0.15*length_of_call;
										break;		
						}
						break;
			case 'M':
			case 'm':
			case 'T':
			case 't':
			case 'W':
			case 'w':
			case 'F':
			case 'f':
						switch(d2)
						{
							case 'o':
							case 'O':
							case 'u':
							case 'U':
							case 'e':
							case 'E':
							case 'h':
							case 'H':
							case 'R':
							case 'r':
										
										if(hr<8 || hr>=18)
											charged= 0.25*length_of_call;
										else 
											charged= 0.40*length_of_call;
											
											break;
						}
		}
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout<<"\nThe cost of the call is : $"<<charged<<endl;
		
		cout<<"Wanna try again? press y to continue.\n";
		cin>>ch;
	}while(ch=='y'|| ch=='Y');
	
	return 0;
}
