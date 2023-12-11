//	Write a program to Mathematic operation like Addition, Subtraction,Multiplication, Division Of two number using different parameters and Function Overloading
#include<iostream>

using namespace std;

class Add
{
	public:
		void cal(int a, int b)
		{
			cout<<a+b<<endl;
		}
		void cal(float a, float b)
		{
			cout<<a+b<<endl;
		}				
};

class Sub
{
	public:
		void cal(int a, int b, int c)
		{
			cout<<a-b-c<<endl;
		}
		void cal(float a, float b)
		{
			cout<<a-b<<endl;
		}		
};

class Mul
{
	public:
		void cal(int a, int b)
		{
			cout<<a*b<<endl;
		}
		void cal(float a, float b)
		{
			cout<<a*b<<endl;
		}
};

class Div
{
	public:
		void cal(int a, int b)
		{
			cout<<a/b<<endl;
		}
		void cal(float a, float b)
		{
			cout<<a/b<<endl;
		}		
};

main()
{
	Add a;
	Sub s;
	Mul m;
	Div d;
	
	a.cal(10,20);
	a.cal(10.20f, 20.30f);
	
	s.cal(50,30);
	s.cal(10.20f, 5.2f);
	
	m.cal(10,20);
	m.cal(20.12f, 30.5f);
	
	d.cal(20,10);
	d.cal(25.5f,5.2f);
}
//........Coded by JALPA VADGAMA