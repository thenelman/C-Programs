#include<iostream>
#include<cstdlib>
#include<cstddef>
#include<cstring>
using namespace std;

class StringVar
{
public:
	StringVar(int size);
	StringVar();
	StringVar(const char a[]);
	StringVar(const StringVar& string_object);
	//copy constructor
	
	~StringVar();
	
	int length() const;
	void input_line(istream& ins);
	friend ostream& operator<<(ostream& outs,const StringVar& the_string);
	
private:
	char *value;
	int max_length;
};

StringVar::StringVar(int size)
{
	max_length=size;
	value=new char[max_length+1];
	value[0]='\0';
}

StringVar::StringVar():max_length(100)
{
	value=new char[max_length+1];
	value[0]='\0';
}

StringVar::StringVar(const char a[]):max_length(strlen(a))
{
	value=new char[max_length+1];
	strcpy(value,a);
}

StringVar::StringVar(const StringVar& string_object):max_length(string_object.length())
{
	value=new char[max_length+1];
	strcpy(value,string_object.value);
}

StringVar::~StringVar()
{
	delete [] value;
}

int StringVar::length() const
{
	return strlen(value);
}

void StringVar::input_line(istream& ins)
{
	ins.getline(value,max_length+1);
}

ostream& operator <<(ostream& outs,const StringVar& the_string)
{
	outs<<the_string.value;
	return outs;
}

void conversation(int max_name_size);

int main()
{
	using namespace std;
	conversation(30);
	cout<<"End of demonstration.\n";
	
	return 0;
}

void conversation(int max_name_size)
{
	using namespace std;
	
	StringVar your_name(max_name_size),our_name("Borg");
	
	cout<<"What is your name?\n";
	your_name.input_line(cin);
	cout<<"We are "<<our_name<<endl;
	cout<<"We will meet again "<<your_name<<endl;
	  	
}
