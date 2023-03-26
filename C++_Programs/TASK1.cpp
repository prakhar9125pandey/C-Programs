#include <iostream>
using namespace std;
class B;
class A
{
int X,Y;
public:
void input()
{
cout<<"\nEnter The X AND Y=";
cin>>X>>Y;
}
friend class B;
};
class B
{
	int Z;
public:
	void input(){
		{
		cout<<"\nEnter The Z=";
		cin>>Z
		}
	}
void task1_A(B obj1)
{
while(obj1.Z>0)
{
if (obj.Z%2==0)
cout<<"\nThe Number Is Even..";
else
cout<<"\nThe Number Is Odd";
}
void task2_A(B obj2)
{
if(obj.Y%5==0)
cout<<"\nThe Number Is Mutltiple Of 5..";
else 
cout<<"\nThe Number Is Not Mutltiple Of 5..";
}
};
int main()
{
A a1;
B b1;
b1.input();
b1.task1_A(a1);
b1.task2_A(a1);
return 0;
}
