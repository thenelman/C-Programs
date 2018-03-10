#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	vector<string> test;
	int T;
	cin>>T;
	string str;
	while(T-->0)
	{
		
		cin>>str;
		test.push_back(str);
	}
	
	for(int i=0;i<test.size();i++)
		{
			string str2;
			str2=test[i];
			for(int j=0;j<str2.length()-1;j++)
			{
				if(str2.at(j)!=str2.at(j+1))
				{
					switch(str2.at(j))
					{
						case 'x': if(str2.at(j+1)=='y')
									str2.replace(j,2,"z");
								  else if(str.at(j+1)=='z')
								  	str2.replace(j,2,"y");
									j=-1;
									break;
									
						case 'y': if(str2.at(j+1)=='x')
									str2.replace(j,2,"z");
								   else if(str.at(j+1)=='z');
								   	str2.replace(j,2,"x");
								   	j=-1;
								   	break;
						case 'z': if(str2.at(j+1)=='y')
									str2.replace(j,2,"x");
								  else if(str2.at(j+1)=='x')
								  	str2.replace(j,2,"y");
								  	j=-1;
								  	break;
								  	
					};
				}
				
			}
			
			cout<<str2.length()<<endl;
			
			
			
		}
	return 0;
}
