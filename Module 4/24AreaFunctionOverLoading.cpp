/*	Write a program to calculate the area of circle, rectangle and triangle using Function Overloading
	Rectangle: Area * breadth
	Triangle: ½ *Area* breadth
	Circle: Pi * Area *Area
*/
#include<iostream>

using namespace std;

class Area
{
	public:
	float area(float r)
	{
		return(3.14*r*r);
	}
	int area(int h,int w)
	{
    	return(h*w);
	}
	float area(float hi,float b)
	{
   		return((hi*b)/2);
	}	
};

int main()
{
	Area a;
	int r, h, w, hi, b;
	cout<<"Enter the radius of a circle : ";
	cin>>r;
	cout<<"\nArea of Circle = "<<a.area(r);
	
	cout<<"\n\nEnter the height of Rectangle : ";
	cin>>h;
	cout<<"Enter the weight of Rectangle : ";
	cin>>w;
	cout<<"\nArea of Rectangle = "<<a.area(h,w);

	cout<<"\n\nEnter the height of Triangle : ";
	cin>>hi;
	cout<<"Enter the base of Triangle : ";
	cin>>b;
	cout<<"\nArea of Triangle = "<<a.area(hi,b);
	return 0;
}
//........Coded by JALPA VADGAMA
