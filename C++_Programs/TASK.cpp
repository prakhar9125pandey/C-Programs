#include <iostream>
using namespace std;
class ABC;
class PQR;
class XYZ
{
int X,Y,Z;
public:
void input()
{
cout<<"Enter The Three Required Numbers=\n";
cin>> X>>Y>>Z;
}
friend class ABC;
friend class PQR;
};
class ABC
{
public:
void task1_ABC(XYZ obj1)
{
int B=0;
while(obj1.X>0)
{
B=B*10+obj1.X%10;
obj1.X/=10;
}
cout<<"\n The Reverse Of X Is="<<B;
}
public:
void task2_ABC(XYZ obj2)
{
int A=obj2.Y,B,C=0,count=0;
for(B=2;B<A/2;B++)
{
if(A%B==0)
{
cout<<"\nThe Number Y Is Not Prime..";
count=1;
break;
}
}
if (count==0)
cout<<"\nThe Number Y Is Prime..";
}
};
class PQR
{
public:
void task1_PQR(XYZ obj3)
{
cout<<"\nThe Square Of Z Is="<<obj3.Z*obj3.Z;
}
};
int main()
{
ABC o1;
PQR o2;
XYZ o3;
o3.input();
o1.task1_ABC(o3);
o1.task2_ABC(o3);
o2.task1_PQR(o3);
}
