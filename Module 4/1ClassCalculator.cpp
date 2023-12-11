//	WAP to create simple calculator using class

#include<iostream>

using namespace std;

class calculator
{
	public:
	int a, b;
	void cal()
	{
		cout<<"*****  CALCULATOR  *****\n";
		cout<<"Enter the value of a : ";
		cin>>a;
		cout<<"Enter the value of b : ";
		cin>>b;
		cout<<"\nAddition : "<<a+b;
		cout<<"\nSubstraction :"<<a-b;
		cout<<"\nMultiplication :"<<a*b;
		cout<<"\nDivision :"<<a/b;

	}
};

int main()
{
	calculator c;
	c.cal();
	return 0;
}

//........Coded by JALPA VADGAMA