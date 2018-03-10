#include<iostream>

using namespace std;


int main()
{

	char user1,user2,ch;
	do{
		cout<<"\nRock-Paper-Scissors\n"
			<<"User1 and user2 please select \"R\" for rock, \"S\" for Scissors, \"P\" for paper.\n";
		cout<<"User 1, please input your choice: \n";
		cin>>user1;
		cout<<"User 2, Please input your choice: \n";
		cin>>user2;
	
		switch(user1)
		{
			case 'R':
					switch(user2)
					{
						case 'R': cout<<"It is a tie between the two players.\n";
									break;
						case 'S': cout<<"User 1 is the winner.\n "
									  <<"Since Rock breaks scissors\n";
									  break;
						case 'P': cout<<"User 2 is the winner.\n"
									  <<"Since paper covers rock.\n";
									  break;
						default: cout<<"User 2 didn't enter a correct choice.\n";
										
					}
					break;
			case 'S':
					switch(user2)
					{
						case 'S': cout<<"It is a tie between the two players.\n";
									break;
						case 'R': cout<<"User 2 is the winner.\n "
									  <<"Since Rock breaks scissors\n";
									  break;
						case 'P': cout<<"User 1 is the winner.\n"
									  <<"Since scissors cut paper.\n";
									  break;
						default: cout<<"User 2 didn't enter a correct choice.\n";
										
					}
					break;
			case 'P':
					switch(user2)
					{
						case 'P': cout<<"It is a tie between the two players.\n";
									break;
						case 'S': cout<<"User 2 is the winner.\n "
									  <<"Since scissors cut paper\n";
									  break;
						case 'R': cout<<"User 1 is the winner.\n"
									  <<"Since paper covers rock.\n";
									  break;
						default: cout<<"User 2 didn't enter a correct choice.\n";
										
					}
					break;
			default:cout<< "User 1 didn't enter a correct choice.\n";
		
		}
		
		cout<<"Play again? Press Y to continue else press n.\n";
		cin>>ch;
	}while(ch=='Y'|| ch=='y');
	
	return 0;
}
