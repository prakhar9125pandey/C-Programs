#include<iostream>
using namespace std;
void Test1(int x)
{
cout<<"\nInside function";
try
{
if(x%3==0)
throw x;
else
cout<<"\nException is not thrown";
}
catch(int) 
{
cout<<"\nCaught exception inside function and now rethrowing=";
throw; 
}
cout<<"\nEnd of function";
}
int main()
{
cout<<"\nInside main";
try
{
Test1(5);
Test1(15);
}
catch(int x)
{
if(x%5==0)
{
    cout<<"\nCaught integer is a multiple of 5 as well";
}
else 
{
    cout<<"\nCaught integer is not a multiple of 5";
}
}
cout<<"\nEnd of main";
return 0;
}

