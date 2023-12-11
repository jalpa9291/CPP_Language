/*	Write a C++ program to create a class called Car that has private member variables for company, model, and year. 
	Implement member functions to get and set these variables.
*/
#include<iostream>

using namespace std;

class car
{
	private:
		string company, model;
		int year;
		
		public:
			void setcomapny(string company)
			{
				this->company = company;
			}
			string getcompany()
			{
			return this->company;
			}
		
			void setmodel(string model)
			{
				this->model = model;
			}
			string getmodel()
			{
				return this->model;
			}
		
			void setyear(int year)
			{
				this->year = year;
			}
			int getyear()
			{
				return this ->year;
			}			
};

int main()
{
	car c;
	c.setcomapny("TATA");
	cout<<c.getcompany();
	
	c.setmodel("\nNexon EV\n");
	cout<<c.getmodel();
	
	c.setyear(2023);
	cout<<c.getyear();
	return 0;
}
//........Coded by JALPA VADGAMA