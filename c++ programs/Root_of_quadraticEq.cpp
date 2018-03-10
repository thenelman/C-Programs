#include<iostream>
#include<cmath>

using namespace std;


int main()
{
	int a,b,c;
	double discriminant,root1,root2;
	
	char ch;
	do{
		cout<<"Enter a quadratic equation of the form ax2+bx+c.\n(Enter only the coefficients a, b, c)\n";
		cin>>a>>b>>c;
		
		discriminant=((b*b)-(4*a*c));
		
		if(discriminant<0)
			{
				double dis=fabs(discriminant);
				double realpart=-(static_cast<double>(b))/(2*a);
				double imaginarypart=sqrt(dis)/(2*a);
				cout.setf(ios::fixed);
				cout.setf(ios::showpoint);
				cout.precision(2);
				cout<<"\nThe quadratic equation has complex roots.\n";
				cout<<"\nThe roots of the equation are :"<<realpart<<" + "<<imaginarypart<<"i and "<<realpart<<" - "<<imaginarypart<<"i.\n";
			}
		else if(discriminant>0)
			{
				root1=((-b)+(sqrt(discriminant)))/(2*a);
				root2=((-b)-(sqrt(discriminant)))/(2*a);
				cout<<"\nThe quadratic equation has two real roots.\n";
				cout<<"\nThe roots of the equation are :"<<root1<<" and "<<root2<<".\n";
			}
		else
			{
				root1=(-b)/(2*a);
				root2=root1;
				cout<<"\nThe quadratic equation has only one roots.\n";
				cout<<"\nThe root of the equation is :"<<root1<<".\n";
			}
					
		cout<<"Wanna try again? press y to continue.\n";
		cin>>ch;
	}while(ch=='y'|| ch=='Y');
	
	return 0;
}
