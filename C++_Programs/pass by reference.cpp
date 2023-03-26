#include <iostream>
using namespace std;
void swap(int &, int &);// function declaration
int main ()
{
   int a = 100;     // local variable declaration
   int b = 200;
   cout << "Before swap, value of a :" << a << endl;
   cout << "Before swap, value of b :" << b << endl<<endl;
   swap(a,b);    // calling a function to swap values
   cout << "After swap, value of a :" << a << endl;
   cout << "After swap, value of b :" << b << endl;
   return 0;
}
void swap(int &x, int &y)
{
   int temp;
   temp = x;   
   x = y;     
   y = temp; 
   cout << "After swap, value of x :" << x << endl;
   cout << "After swap, value of y :" << y << endl<<endl;
}


