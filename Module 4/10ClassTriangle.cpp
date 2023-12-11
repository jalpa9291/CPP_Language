/*	Write a C++ program to create a class called Triangle that has private member variables for the lengths of its three sides. 
	Implement member functions to determine if the triangle is equilateral, isosceles, or scalene.
*/
#include<iostream>

using namespace std;

class Triangle
{
	private:
		int side1, side2, side3;
		
	public:
		void determinetype()
		{
			cout<<"\nEnter side1 : ";
			cin>>side1;
			cout<<"Enter side2 : ";
			cin>>side2;
			cout<<"Enter side3 : ";
			cin>>side3;
			
			if(side1 == side2 && side2 == side3)
  			{
  				cout << "\nThis is an Equilateral Triangle";
  			}
  			else if(side1 == side2 || side2 == side3 || side1 == side3)
    		{
  				cout << "\nThis is an Isosceles Triangle";
			}
  			else
  			{
  				cout << "\nThis is a Scalene Triangle";
			}	
		}	
};

int main()
{
	cout<<"**** TRIANGLE ****";
	Triangle t;
	t.determinetype();
	return 0;
}
//........Coded by JALPA VADGAMA