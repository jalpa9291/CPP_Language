/*	Assume that the test results of a batch of students are stored in three different classes. 
	Class Students are storing the roll number. 
	Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. 
	The class result can inherit the details of the marks obtained in the test and roll number of students. (multiple Inheritance)
*/
#include<iostream>

using namespace std;

class student
{
	public:
		int rollno;
		string name;
		void data()
		{
			cout<<"Enter Rollno : ";
			cin>>rollno;
			cout<<"Enter Name : ";
			cin>>name;
		}
};

class test
{
	public:
		int m1,m2;
		void mark()
		{
			cout<<"\nEnter Mark-1 : ";
			cin>>m1;
			cout<<"Enter Mark-2 : ";
			cin>>m2;	
		}
};

class result : public student, public test
{
	public:
		int Total;
		void total()
		{
			Total = m1 + m2;
			cout<<"\nTotal marks : "<<Total;
		}		
};

int main()
{
	result r;
	r.data();
	r.mark();
	r.total();	
	return 0;
}
//........Coded by JALPA VADGAMA