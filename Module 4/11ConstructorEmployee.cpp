/*	Write a C++ program to implement a class called Employee that has private member variables for name, employee ID, and salary. 
	Include member functions to calculate and set salary based on employee performance. Using of constructor 
*/
#include<iostream>

using namespace std;

class employee
{
	private:
		int id, salary, annual;
		string name;
		
		public:
			employee()
			{
				cout<<"Enter Employee ID : ";
				cin>>id;
				cout<<"Enter Employee Name : ";
				cin>>name;
				cout<<"Enter Employee Salary : ";
				cin>>salary;
				
				annual = salary * 12;
				cout<<"\nID : "<<id;
				cout<<"\nName : "<<name;
				cout<<"\nAnnual Salary : "<<annual;	
			}
};

int main()
{
	employee e;
	return 0;
}
//........Coded by JALPA VADGAMA