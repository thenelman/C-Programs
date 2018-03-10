#include<iostream>

using namespace std;


int main()
{
	double amount_req,interest_rate,T_year,T_month,Face_value,monthly_repay;
	char ch;
	do{
		cout<<"\nEnter the amount the consumer needs to recieve : $";
		cin>>amount_req;
		cout<<"\nEnter the rate of interest: ";
		cin>>interest_rate;
		cout<<"\nEnter the duration of the loan in months: ";
		cin>>T_month;
		T_year=T_month/12;
		Face_value=((amount_req)/(1-(interest_rate*T_year)));
		monthly_repay=Face_value/T_month;
		cout.setf(ios::fixed);
		cout.setf(ios::showpoint);
		cout.precision(2);
		cout<<"\nThe Face value required inorder for the consumer to recieve the amount needed : $"<<Face_value;
		cout<<"\nThe Monthly repayment value : $"<<monthly_repay;
		cout<<"\nDo you wish to calculate another? Press Y to continue or else press n";
		cin>>ch;
	}while(ch=='Y'|| ch=='y');
	
	cout<<"Thank you\n";
		
	return 0;
}
