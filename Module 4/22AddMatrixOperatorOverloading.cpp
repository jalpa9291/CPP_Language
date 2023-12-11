//	Write a Program of Two 1D Matrix Addition using Operator Overloading

#include <iostream>

using namespace std;

class Matrix 
{
   public:
      int arr[5];

      Matrix operator +(Matrix m2) 
      {
         Matrix temp;

         for(int i = 0; i < 5; i++) 
         {
            temp.arr[i] = arr[i] + m2.arr[i];
         }

         return temp;
      }
};

int main() 
{
   Matrix m1, m2, m3;

   cout << "\nEnter 5 elements of first matrix: ";
   for(int i = 0; i < 5; i++) 
    {
      cin >> m1.arr[i];
    }

   cout << "\nEnter 5 elements of second matrix: ";
   for(int i = 0; i < 5; i++) 
    {
      cin >> m2.arr[i];
    }

   m3 = m1 + m2;
  
   cout << "Result is: "<<endl;
   for(int i = 0; i < 5; i++) 
    {
      cout << m3.arr[i] << " ";
    }

   cout << endl;
   return 0;
}
//........Coded by JALPA VADGAMA