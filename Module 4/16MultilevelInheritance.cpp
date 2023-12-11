/*	Create a class person having members name and age. Derive a class student having member percentage. Derive another class teacher having membersalary. 
	Write necessary member function to initialize, read and write data.
	Write also Main function (Multiple Inheritance)
*/
#include<iostream>

using namespace std;

class person
{
    public:
    	string name;
    	int age;

    	person()
    	{
    		cout<<"Enter Your Name : ";
    		cin>>name;
    		cout<<"Enter Your Age : ";
    		cin>>age;
    	}
};

class student : public person
{
    public:
    	float totalmarks,achievedmarks,percentage;

    	student()
    	{
        	cout<<"Enter Total Marks : ";
        	cin>>totalmarks;
        	cout<<"Enter Achieved marks : ";
        	cin>>achievedmarks;

        	percentage = (achievedmarks / totalmarks) * 100; 
        	cout<<"\nTotal Percentage Are : "<<percentage;
    	}	
};

class teacher : public student
{
    public:
    	int salary;
    	teacher()
    	{
    		cout<<"\nEnter You Salary : ";
    		cin>>salary;
    		cout<<"\nYour Salary Is : "<<salary;
    	}	
};

int main()
{
    teacher t;
	return 0;
}
//........Coded by JALPA VADGAMA