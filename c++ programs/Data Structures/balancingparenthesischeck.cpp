#include<cstring>
#include<iostream>
#include "Stack.h"

bool isOpenBraces(char c);
bool isCloseBraces(char c);
bool areSymbolMatched(char x,char y);

int main()
{
	cout<<"Program for checking balance of parenthesis symbols in an expression.\n";
	cout<<endl;
	char ch;
	Stack<char> S;
	cout<<"Enter the expression!\n";
	cin.get(ch);
	while(ch!='\n')
	{
		if(isOpenBraces(ch))
			S.push(ch);
		if(isCloseBraces(ch))
		{
			if(S.isEmpty())
				{
					cout<<"Parenthesis is not balanced in the expression.\n"
						<<"Exiting the program.";
					exit(1);
				}
			char p=S.get_top();
			S.pop();
			if(!(areSymbolMatched(p,ch)))
				{
					cout<<"Parenthesis is not balanced in the expression.\n"
						<<"Exiting the program.";
					exit(1);
				}
		}
		cin.get(ch);
	}
	
	if(!S.isEmpty())
	{
		cout<<"Parenthesis is not balanced in the expression.\n"
			<<"Exiting the program.";
		exit(1);
	}
	else
		cout<<"Parenthesis is balanced.";
	
	return 0;
}

bool isOpenBraces(char c)
{
	return (c=='('||c=='{'||c=='[');
}

bool isCloseBraces(char c)
{
	return (c==')'||c=='}'||c==']');
}

bool areSymbolMatched(char x,char y)
{
	return ((x=='('&& y==')')||(x=='{'&& y=='}')||(x=='['&& y==']'));
}
