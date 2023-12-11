// Write a program of to swap the two values using template
#include <iostream> 

using namespace std; 

template <class T> 

void swap_numbers(T &x, T &y) 
{ 
	T t; 
	t = x; 
	x = y; 
	y = t; 
} 

int main() 
{ 
	int a=10, b=20; 
	
	cout<<"\nBefore Swap A = "<<a<<" | B = "<<b;
	swap_numbers(a, b); 
	cout<<"\nAfter Swap A = "<<a<<" | B = "<<b;
	return 0; 
}
//........Coded by JALPA VADGAMA