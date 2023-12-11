// 	Write a C++ Program to show access to Private Public and Protected using Inheritance
#include<iostream>

using namespace std;

class Base 
{
   private:
    int x = 1;

   protected:
    int y = 2;

   public:
    int z = 3;

    int getx() 
	{
        return x;
    }
};

class Derived : public Base 
{
   public:
    int gety() 
	{
        return y;	
    }
};

int main() 
{
    Derived d;
    cout << "Private = " << d.getx() << endl;
    cout << "Protected = " << d.gety()<< endl;
    cout << "Public = " << d.z<< endl;
    return 0;
}
//........Coded by JALPA VADGAMA