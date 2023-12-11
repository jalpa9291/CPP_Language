/*	Write a C++ program to implement a class called Student that has private member variables for name, class, roll number, and marks. 
	Include member functions to calculate the grade based on the marks and display the student's information. 
	Accept address from each student implement using of aggregation
*/
#include<iostream>

using namespace std;

class student 
{
	private:
		string name;
		string std;
		int rollno;
		int mark[5];
		
	public:
		int sum=0, avg;
		
		void input()	// Member Function
		{
			cout<<"Enter your Name : ";
			cin>>name;
			cout<<"Enter your class : ";
			cin>>std;
			cout<<"Enter your Roll Number : ";
			cin>>rollno;
			
			for(int i=0; i<5; i++)
			{
				cout<<"Enter your Marks : ";
				cin>>mark[i];
			}
		}
		
		void display()
		{
			cout<<"----------------------------";
			cout<<"\nYour Name is :"<<name;
			cout<<"\nYour Class is : "<<std;
			cout<<"\nYour Roll Number is :"<<rollno;
			
			for(int i=0; i<5; i++)
			{
				cout<<"\nMarks= "<<mark[i];
				sum=sum+mark[i];
			}
			cout<<"\n\nTotal Mark = "<<sum;
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
	student s;
	s.input();
	s.display();
	return 0;
}
//........Coded by JALPA VADGAMA