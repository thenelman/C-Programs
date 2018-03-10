#include<iostream>
#include<iomanip>

const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;

void compute_st_ave(const int grade[][NUMBER_QUIZZES], double student_avg[]);
void compute_quiz_ave(const int grade[][NUMBER_QUIZZES], double quiz_avg[]);

void display(const int grade[][NUMBER_QUIZZES],const double student_avg[],const double quiz_avg[]);

int main()
{
	using namespace std;
	int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
	double st_ave[NUMBER_STUDENTS],quiz_ave[NUMBER_QUIZZES];
	
	for(int i=0;i<NUMBER_STUDENTS;i++)
	{	
		cout<<"Enter the marks for student"<<i<<endl;
		for(int j=0;j<NUMBER_QUIZZES;j++)
		{
			cin>>grade[i][j];
		}
		cout<<endl;
	}
	
	compute_st_ave(grade,st_ave);
	compute_quiz_ave(grade,quiz_ave);
	display(grade,st_ave,quiz_ave);
	return 0;
}


void compute_st_ave(const int grade[][NUMBER_QUIZZES],double student_avg[])
{
	 
	for(int i=0;i<NUMBER_STUDENTS;i++)
		{
			double sum=0;
			for(int j=0;j<NUMBER_QUIZZES;j++)
			{
				sum=sum+grade[i][j];				
			}
			student_avg[i]=sum/NUMBER_QUIZZES;
		}
}

void compute_quiz_ave(const int grade[][NUMBER_QUIZZES],double quiz_avg[])
{
	double sum;
	for(int i=0;i<NUMBER_QUIZZES;i++)
	{
		sum=0;
		for(int j=0;j<NUMBER_STUDENTS;j++)
		{
			sum+=grade[j][i];
		}
		quiz_avg[i]=sum/NUMBER_STUDENTS;
	}
}

void display(const int grade[][NUMBER_QUIZZES],const double student_avg[],const double quiz_avg[])
{
	using namespace std;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(1);
	cout<<setw(10)<<"Students"<<setw(5)<<"ave"<<setw(15)<<"Quizzes.\n";
	for(int i=0;i<NUMBER_STUDENTS;i++)
	{
		cout<<setw(10)<<i<<setw(5)<<student_avg[i]<<" ";
		for(int j=0;j<NUMBER_QUIZZES;j++)
			cout<<setw(5)<<grade[i][j];
		cout<<endl;
	}
	
	cout<<" Quiz Averages are: ";
	for(int i=0;i<NUMBER_QUIZZES;i++)
		cout<<setw(5)<<quiz_avg[i]<<" ";
	cout<<endl;
}
