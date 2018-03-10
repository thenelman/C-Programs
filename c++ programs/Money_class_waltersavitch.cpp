#include<iostream>
#include<cstdlib>
#include<cctype>
#include<cmath>

using namespace std;


class Money
{
public: 
	friend Money operator +(const Money& amount1,const Money& amount2);
	friend bool operator ==(const Money& amount1,const Money& amount2);
	friend bool operator >(const Money& amount1,const Money& amount2);
	friend bool operator <(const Money& amount1,const Money& amount2);
	friend Money operator -(const Money& amount1,const Money& amount2);
	friend Money operator -(const Money& amount);
	friend ostream& operator <<(ostream &outs,const Money& amount);
	friend istream& operator >>(istream &ins,Money& amount);
	
	//constructor
	Money(long dollars,int cents);
	Money(long dollars);
	Money(double dollars);
	Money();
	
	double get_value();	
private:
	long all_cents;
};

int digit_to_int(char c);

int main()
{
	Money your_amount, my_amount(10,9), our_amount;
	cout<<"Enter an amount of money: ";
	cin>>your_amount;
	cout<<"Your amount is "<<your_amount<<endl;
	cout<<"My amount is: "<<my_amount<<endl;
	
	
	if(your_amount==my_amount)
		cout<<"We have the same amount.\n";
	else
	{	cout<<"One of us is richer by ";
		if(your_amount>my_amount)
			cout<<your_amount-my_amount<<endl;
		else
			cout<<my_amount-your_amount;
	}
	our_amount= your_amount+my_amount;
	cout<<your_amount<<" + "<<my_amount<<" equals "<<our_amount<<endl;
	
	our_amount=our_amount+ 25.06;
	cout<<"Our amount after adding $25.06 equals to "<<our_amount<<endl;
	return 0;
}

Money operator +(const Money& amount1,const Money& amount2)
{
	Money temp;
	temp.all_cents=amount1.all_cents+amount2.all_cents;
	return temp;
}

Money operator -(const Money& amount1,const Money& amount2)
{
	Money temp;
	temp.all_cents=(amount1.all_cents-amount2.all_cents);
	return temp;
}

Money operator -(const Money& amount)
{
	Money temp;
	temp.all_cents=-(amount.all_cents);
}

bool operator ==(const Money& amount1,const Money& amount2)
{
	return (amount1.all_cents==amount2.all_cents);
}

bool operator >(const Money& amount1,const Money& amount2)
{
	return (amount1.all_cents>amount2.all_cents);
}

bool operator <(const Money& amount1,const Money& amount2)
{
	return (amount1.all_cents<amount2.all_cents);
}

Money::Money(long dollars, int cents)
{
	if(dollars*cents < 0)
	{
		cout<<"Illegal entry for dollars and cents";
		exit(1);
	}
	all_cents = dollars*100 + cents;
}

Money::Money(long dollars):all_cents(dollars*100)
{
	
}

Money::Money(double amount)
{
	all_cents=floor(amount*100);
}
Money::Money():all_cents(0)
{
	
}

double Money::get_value()
{
	return(all_cents*0.01);
}

istream& operator >>(istream &ins,Money& amount)
{
	char one_char,decimal_point,digit1,digit2;
	long dollars;
	int cents;
	bool negative;
	
	ins>>one_char;
	if(one_char == '-')
	{
		negative=true;
		ins>>one_char; //read one_char=$
	}
	else
		negative=false;
		//if input is legal then one_char=$
	
	ins>>dollars>>decimal_point>>digit1>>digit2;
	
	if( one_char != '$'|| decimal_point!='.'|| !isdigit(digit1) || !isdigit(digit2) || (dollars<0) )
	{
		cout<<"Error illegal form for money input\n";
		exit(1);
	}
	
	cents=digit_to_int(digit1)*10 + digit_to_int(digit2);
	
	amount.all_cents=dollars*100 + cents;
	if(negative)
		amount.all_cents=-amount.all_cents;
}

ostream& operator <<(ostream& outs,const Money& amount)
{
	long positive_cents,dollars,cents;
	positive_cents=labs(amount.all_cents);
	dollars = positive_cents/100;
	cents = positive_cents%100;
	
	if(amount.all_cents<0)
		outs<<"-$"<<dollars<<".";
	else
		outs<<"$"<<dollars<<".";
		
	if(cents<10)
		outs<<'0';
	outs<<cents;
	
	return outs;
}

int digit_to_int(char c)
{
	return (static_cast<int>(c)-static_cast<int>('0'));
}
