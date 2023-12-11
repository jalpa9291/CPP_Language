#include<iostream>

using namespace std;

class Swap
{
	private:
		int x;
		int y;
		
		friend void swapping();
};

void swapping()
{
	Swap s;
	int temp=0;
	
	cout<<"Enter first no : ";
	cin>>s.x;
	cout<<"Enter second no : ";
	cin>>s.y;
	cout<<"\nBefore swapping x = "<<s.x<< " y ="<<s.y;
	
	temp=s.x;
	s.x=s.y;
	s.y=temp;
	
	cout<<"\nAfter swapping x = "<<s.x<< " y ="<<s.y;
}

int main()
{
	swapping();
	return 0;
}
//........Coded by JALPA VADGAMA