//	Write a program to find the max number from given two numbers using friend function

#include<iostream>

using namespace std;

class number
{
	private:
		int x;
		int y;
		
		friend void max();
};

void max()
{
	number n;
	
	cout<<"Enter first Number : ";
	cin>>n.x;
	cout<<"Enter second Number : ";
	cin>>n.y;
	
	if(n.x > n.y)
	{
		cout<<"\nMax number is : "<<n.x;
	}
	else if(n.y > n.x)
	{
		cout<<"\nMax number is : "<<n.y;
	}
	else if(n.x == n.y)
	{
		cout<<"\nBoth number are Eual "<<n.x<<" = "<<n.y;
	}
}

int main()
{
	max();
	return 0;
}
//........Coded by JALPA VADGAMA