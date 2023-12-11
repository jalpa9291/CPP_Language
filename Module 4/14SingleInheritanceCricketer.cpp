/*	Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
	Data member of batsman. Total runs, Average runs and best performance. 
	Member functions input data, calculate average runs, Displaydata. (Single Inheritance)
*/
#include<iostream>

using namespace std;

class cricketer
{
	public:
		string name;
		int age, inning, notout, run;
		
		void getdata()
		{
			cout<<"Enter name : ";
			cin>>name;
			cout<<"Enter Age :";
			cin>>age;
			cout<<"Enter Total Inning : ";
			cin>>inning;
			cout<<"Enter Notout : ";
			cin>>notout;
			cout<<"Enter Total Run : ";
			cin>>run;		
		}
};

class batsman : public cricketer
{
	public:
		int avg;
		
		void average()
		{
			avg = run / (inning-notout);
			cout<<"\nAverage Run = "<<avg;	
		}
};

int main()
{
	batsman b;
	b.getdata();
	b.average();
	return 0;
}
//........Coded by JALPA VADGAMA