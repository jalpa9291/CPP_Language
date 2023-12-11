//	Write a C++ Program display Student Mark sheet using Multiple inheritance

#include<iostream>

using namespace std;

class student
{
	public:
		int rollno;
		string name;
		string std;
		
		void inputdata()	// Member Function
		{
			cout<<"Enter your Roll Number : ";
			cin>>rollno;
			cout<<"Enter your Name : ";
			cin>>name;
			cout<<"Enter your class : ";
			cin>>std;
			
			cout<<"----------------------------";
			cout<<"\nYour Roll Number is : "<<rollno;
			cout<<"\nYour Name is : "<<name;
			cout<<"\nYour Class is : "<<std;
			cout<<"\n----------------------------";
		}			
};

class mark : public student
{
	public:
		int mark[5],sum=0;
		
		void marks()
		{
			for(int i=0; i<5; i++)
			{
				cout<<"\nEnter your Marks : ";
				cin>>mark[i];
			}
				
			for(int i=0; i<5; i++)
			{
				cout<<"\nMarks = "<<mark[i];
				sum=sum+mark[i];
			}
			cout<<"\nTotal Mark = "<<sum;
		}
};

class grade : public mark
{
	public:
		int avg;
		
		void average()
		{
			avg=sum/5;
			cout<<"\n\nGrade = ";
			
			if(avg>=81 && avg<=100)
			{
				cout<<"A";
			}
			else if(avg>=61 && avg<=80)
			{
				cout<<"B";
			}
			else if(avg>=41 && avg<=60)
			{
				cout<<"C";
			}
			else if(avg>=33 && avg<=40)
			{
				cout<<"E";
			}
			else
			{
				cout<<"Fail";
			}
		}
};

int main()
{
	grade g;
	g.inputdata();
	g.marks();
	g.average();
	return 0;
}
//........Coded by JALPA VADGAMA