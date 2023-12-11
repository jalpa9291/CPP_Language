/*	Write a C++ program to create a class called Person that has private member variables for name, age and country. 
	Implement member functions to set and get the values of these variables.
*/
#include<iostream>

using namespace std;

class person
{
	private:
		string name, country;
		int age;
		
		public:
			void setname(string name)
			{
				this->name = name;
			}
			string getname()
			{
			return this->name;
			}
			
			void setage(int age)
			{
				this->age = age;
			}
			int getage()
			{
				return this ->age;
			}
			
			void setcountry(string country)
			{
				this->country = country;
			}
			string getcountry()
			{
				return this->country;
			}
};

int main()
{
	person p;
	p.setname("Jalpa\n");
	cout<<p.getname();
	
	p.setage(28);
	cout<<p.getage();
	
	p.setcountry("\nINDIA");
	cout<<p.getcountry();
	return 0;
}
//........Coded by JALPA VADGAMA