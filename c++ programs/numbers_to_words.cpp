#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

string number_to_string(int number);

int main()
{
	char ch;
	int num;
	string numW;
	do{
		cout<<"Enter a number from 0 to 99.\n";
		cin>>num;
		numW=number_to_string(num);
		cout<<"The number in words is "<<numW<<endl;
		
		cout<<"Wish to try again? Press Y or y to continue.\n";
		cin>>ch;
	}while(ch=='Y' || ch=='y');
	return 0;
}

string number_to_string(int number)
{
	string tens,ones,final;
	int ten,one;
	ten=number/10;
	one=number%10;
	
	switch(ten)
	{
		case 0:
				switch(one)
				{
					case 0: final="Zero \n";break;
					case 1: final="One\n";break;
					case 2: final="Two\n";break;
					case 3: final="Three\n";break;
					case 4: final="Four\n";break;
					case 5: final="Five\n";break;
					case 6: final="Six\n";break;
					case 7: final="Seven\n";break;
					case 8: final="Eight \n";break;
					case 9: final="Nine\n";break;	
				}
				return final;
				
		case 1:
				switch(one)
				{
					case 0: final="Ten \n";break;
					case 1: final="Eleven\n";break;
					case 2: final="Twelve\n";break;
					case 3: final="Thirteen\n";break;
					case 4: final="Fourteen\n";break;
					case 5: final="Fifteeen\n";break;
					case 6: final="Sixteen\n";break;
					case 7: final="Seventeen\n";break;
					case 8: final="Eighteen \n";break;
					case 9: final="Nineteen\n";break;
				}
				return final;
				
		case 2:
					tens="Twenty ";
					break;
		case 3: 
					tens="Thirty ";
					break;
		case 4:
					tens="Fourty ";
					break;
		case 5: 
					tens="Fifty ";
					break;
		case 6:		
					tens="Sixty ";
					break;
		case 7:		
					tens="Seventy ";
					break;
		case 8: 
					tens="Eighty ";
					break;
		case 9: 
					tens="Ninety ";
					break;				
	}
	
	switch(one)
				{
					case 0: ones="";break;
					case 1: ones="One\n";break;
					case 2: ones="Two\n";break;
					case 3: ones="Three\n";break;
					case 4: ones="Four\n";break;
					case 5: ones="Five\n";break;
					case 6: ones="Six\n";break;
					case 7: ones="Seven\n";break;
					case 8: ones="Eight \n";break;
					case 9: ones="Nine\n";break;	
				}
	
	final=tens+ones;
	
	return final;
}
