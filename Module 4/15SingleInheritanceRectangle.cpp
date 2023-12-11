//	Write a C++ Program to find Area of Rectangle using inheritance
#include<iostream>

using namespace std;

class Rectangle
{
	public:
		int height, width;
		void rectangle()
		{
			cout<<"Enter the height of Rectangle : ";
			cin>>height;
			cout<<"Enter the width of Rectangle : ";
			cin>>width;
		}		
};

class Area : public Rectangle
{
	public:
		int a;
		void area()
		{
			a = height * width;
			cout<<"\nArea of Rectangle = "<<a;
		}
};

int main()
{
	Area a;
	a.rectangle();
	a.area();
	return 0;
}
//........Coded by JALPA VADGAMA