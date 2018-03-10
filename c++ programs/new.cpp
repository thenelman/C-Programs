#include<iostream>
#include<fstream>
#include<cstdlib>
#include<iomanip>

using namespace std;
void to_screen(ifstream &filestream);
int main()
{
	ifstream fin;
	fin.open("input.txt");
	to_screen(fin);
	fin.close();
	return 0;
}

void to_screen(ifstream &filestream)
{
	int next;
	while(filestream>>next)
	{
		cout<<next<<endl;
	}
}
