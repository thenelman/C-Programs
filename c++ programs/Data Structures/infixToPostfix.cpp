#include<iostream>
#include<cctype>
#include "Stack.h"
using namespace std;

bool isOperator(char ch);
bool lowprecedence(char x,char y);
//Precondition: x and y are operators;
//returns true if operator x has lower precedence than operator y
bool equalprecedence(char x,char y);
//returns true if operator x has equal precedence with operator y
int main()
{
	cout<<"Program for converting an infix expression to a postfix expression.\n";
	cout<<endl;
	char ch,op_on_stack;
	Stack<char> S;
	
	cout<<"Please enter the infix expression to be converted to postfix expression.\n";
	cin.get(ch);
	while(ch!='\n')
	{
		if(isalnum(ch))
			cout<<ch;
		else if(ch=='(')
			S.push(ch);
		else if(isOperator(ch))
		{
			
			if(S.isEmpty())
				S.push(ch);
			else
			{
				op_on_stack=S.get_top();
				if(op_on_stack=='(')
					S.push(ch);
				else if(lowprecedence(ch,op_on_stack)||equalprecedence(ch,op_on_stack))
				{
				
				
				while(!lowprecedence(op_on_stack,ch))
				{
					cout<<op_on_stack;
					S.pop();
					if(S.isEmpty())
						break;
					op_on_stack=S.get_top();
					if(op_on_stack=='(')
						break;
				}
				S.push(ch);
				}
				else
					S.push(ch);	
			}
		}
		else if(ch==')')
		{
			op_on_stack=S.get_top();
			while(op_on_stack!='(')
			{
				cout<<op_on_stack;
				S.pop();
				op_on_stack=S.get_top();
			}
			S.pop();
		}
		
		cin.get(ch);
	}
	//cout<<"\nstack is "<<S.isEmpty();
	while(!S.isEmpty())
	{
		cout<<S.get_top();
		S.pop();
	}
	
	return 0;
}

bool isOperator(char ch)
{
	return (ch=='+'|| ch=='-'||ch=='*'||ch=='/');
}

bool lowprecedence(char x,char y)
{
	return ((x=='+'&& y=='*')||(x=='-'&& y=='*')||(x=='+'&& y=='/')||(x=='-'&& y=='/'));
}

bool equalprecedence(char x,char y)
{
	return ((x==y)||(x=='+'&& y=='-')||(x=='*'&& y=='/'));
}
