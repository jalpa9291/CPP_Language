//	Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>

using namespace std;

class Addition
{
	public:
		int add;
    	Addition(int a,int b)
    	{
    		add = a + b;
    		cout<<"\nAddition is = "<<add;
		}
};

class Subtraction
{
	public:
		int sub;
    	Subtraction(int a,int b)
    	{
    		sub = a - b;
    		cout<<"\nSubstraction is = "<<sub;
		}
};

class Multiplication
{
	public:
    	int mul;
		Multiplication(int a,int b)
		{
			mul = a * b;
			cout<<"\nMultiplication is = "<<mul;
		}
};

class Division
{
	public:
		int div;
    	Division(int a,int b)
    	{
    		div = a / b;
    		cout<<"\nDivision is = "<<div;
		}
};

int main()
{
    int x, y;
    cout<<"******* CALCULATOR *******";
    cout<<"\nEnter First Number : ";
    cin>>x;
	cout<<"\nEnter Second Number : ";
    cin>>y;

    Addition add(x,y);
    Subtraction sub(x,y);
    Multiplication mult(x,y);
    Division div(x,y);
	return 0;    
}
//........Coded by JALPA VADGAMA
