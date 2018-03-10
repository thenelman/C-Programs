//Stack Main class

#include "Stack.h"

using namespace std;

int main()
{
	Stack<int> S1;
	cout<<"Pushing numbers from 1 to 5 in the stack.\n";
	cout<<endl;
	for(int i=0;i<5;i++)
		S1.push(i+1);
		
	cout<<"Now poping each of the numbers in the stack and printing them out.\n";
	while(!(S1.isEmpty()))
	{
		cout<<S1.get_top()<<" ";
		S1.pop();
	}
	
	return 0;
}
