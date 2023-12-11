/*	Write a C++ program to create a class called Rectangle that has private member variables for length and width. 
	Implement member functions to calculate the rectangle's area and perimeter.
*/
#include<iostream>

using namespace std;

class Rectangle
{
	private:
		int length, width;
		public:
			int Area, Perimeter;
			void area()
			{
				cout<<"Enter the height of Rectangle : ";
				cin>>length;
				cout<<"Enter the width of Rectangle : ";
				cin>>width;
				Area= length * width;
				cout<<"\nArea of Rectangle = "<<Area;
			}
			void perimeter()
			{
				Perimeter = 2 * (length + width);
				cout<<"\n\nPerimeter of Rectangle = "<<Perimeter;
			}					
};

int main()
{
	Rectangle r;
	r.area();
	r.perimeter();
	return 0;
}
//........Coded by JALPA VADGAMA