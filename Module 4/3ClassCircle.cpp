/*	Write a C++ program to implement a class called Circle that has private member variables for radius. 
	Include member functions to calculate the circle's area and circumference.
*/
#include<iostream>

using namespace std;

class Circle
{
	private:
		int radious;
		
		public:
			int Area, circum;
			void area()
			{
				cout<<"Enter the Radius of Circle : ";
				cin>>radious;
				Area = radious * radious;
				cout<<"\nArea of Circle = "<<Area;	
			}
			void circumference()
			{
				circum = 2 * 3.14 * radious;
    			cout<<"\n\nCircumference of Circle = "<<circum;	
			}
};

int main()
{
	Circle c;
	c.area();
	c.circumference();
	
	return 0;
}
//........Coded by JALPA VADGAMA