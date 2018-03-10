#include "Stack.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int evaluate(char c,int x,int y);
int postfix(string str);
bool isOperator(char ch);


int main()
{
	cout<<"Program for Postfix Evaluation.\n";
	
	string expression;
	cout<<"Enter the postfix expression with digits and operators separated by space.\n";
	getline(cin,expression);
	int value=postfix(expression);
	
	cout<<"The value of the expression is equal to "<<value<<endl;
	return 0;
}

int evaluate(char c,int x,int y)
{
	switch(c)
	{
		case '+':
			return x+y;break;
		case '-':
			return x-y;break;
		case '*':
			return x*y;break;
		case '/':
			return x/y;break;
		default:
			cout<<"Invalid operator.\n Exiting program";
			exit(1);
	}
}

bool isOperator(char ch)
{
	return (ch=='+'|| ch=='-'||ch=='*'||ch=='/');
}

int postfix(string str)
{
	Stack<int> S;
	string temp;
	int x,y,value1;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]!=' ')
		{
			if(isOperator(str[i]))
			{
				x=S.get_top();
				S.pop();
				y=S.get_top();
				S.pop();
				value1=evaluate(str[i],x,y);
				S.push(value1);
				//temp.clear();
			}
			else
				{
					temp=temp+str[i];
				}
		}
		else
		{
			if(temp!="")
			{
				int num=atoi(temp.c_str());
				S.push(num);
				temp=string();
			}
		}
		
		
	}
	
	value1=S.get_top();
	return value1;	
}
