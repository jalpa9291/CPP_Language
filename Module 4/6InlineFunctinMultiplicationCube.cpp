//	Write a program to find the multiplication values and the cubic values using inline function

#include<iostream>

using namespace std;

inline float mul( float a, float b)
{
    return(a*b);
}

inline float cube(float a)
{
    return(a*a*a) ;
}

int main()
{
    float x,y;
    cout<<"enter the value of x : ";
    cin>>x;
    cout<<"enter the value of y : ";
    cin>>y;
    cout<<mul(x,y)<<endl;
    cout<<cube(x)<<endl;
    return 0;
}
//........Coded by JALPA VADGAMA