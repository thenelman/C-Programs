#include<iostream>
#include<string>
#include<cctype>

using namespace std;

void swap(char &v1,char &v2);
string reverse(const string &s);
string remove_punct(const string &s,const string &punct);
string make_lower(const string &s);
bool is_pal(const string& s);


int main()
{
	char ch;
	string str;
	do{
		cout<<"Enter a candidate for palindrome test.\n"
			<<"followed by pressimng return.\n";
		getline(cin,str);
		
		if(is_pal(str))
			cout<<"\""<<str<<"\" is a palindrome.";
		else
			cout<<"\""<<str<<"\" is not a palindrome.";
		
		cout<<endl;
		cout<<"try again? press Y or y to confirm.\n";
		cin>>ch;
		cin.ignore(1000,'\n');
	}while(ch=='Y'||ch=='y');
	
		return 0;
}

void swap(char &v1,char &v2)
{
	char temp;
	temp=v1;
	v1=v2;
	v2=temp;
}

string reverse(const string &s)
{
	int start=0;
	int end=s.length();
	string temp(s);
	
	while(start<end)
	{
		end--;
		swap(temp[start],temp[end]);
		start++;
	}
	
	return temp;
}

string make_lower(const string &s)
{
	string temp(s);
	for(int i=0;i<s.length();i++)
		temp[i]=tolower(s[i]);
		
	return temp;
}

string remove_punct(const string &s,const string &punct)
{
	string no_punct;
	int s_length=s.length();
	int punct_length=punct.length();
	
	for(int i=0;i<s_length;i++)
	{
		string a_char=s.substr(i,1);
		int location=punct.find(a_char,0);
		
		if(location<0 || location >=punct_length)
			no_punct=no_punct+a_char;
	}
	
	return no_punct;
}

bool is_pal(const string& s)
{
	string punct(",:;.?!'\" ");
	string str(s);
	str= make_lower(str);
	
	string lower_str= remove_punct(str,punct);
	
	return (lower_str== reverse(lower_str));
}
