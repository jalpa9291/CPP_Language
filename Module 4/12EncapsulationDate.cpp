/*	Write a C++ program to implement a class called Date that has private member variables for day, month, and year. 
	Include member functions to set and get these variables, as well as to validate if the date is valid.
*/
#include<iostream>

using namespace std;

class Date
{
	private:
		int day;
		int month;
		int year;
	
	public:	
		void setday()
		{
			cout<<"Enter Day : ";
			cin>>day;
		}
		
		int getday()
		{
			return day;
		}
		
		void setmonth()
		{
			cout<<"Enter Month : ";
			cin>>month;
		}
		
		int getmonth()
		{
			return month;
		}
	
		void setyear()
		{
			cout<<"Enter Year : ";
			cin>>year;
		}
		
		int getyear()
		{
			return year;
		}		
};

int main()
{
	Date d;
	
	d.setday();
	d.setmonth();	
	d.setyear();
	cout<<"\nDay = "<<d.getday();
	cout<<"\nMonth = "<<d.getmonth();
	cout<<"\nYear = "<<d.getyear();
	return 0;
}
//........Coded by JALPA VADGAMA