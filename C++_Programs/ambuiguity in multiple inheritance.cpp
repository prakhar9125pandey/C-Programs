#include<iostream>
using namespace std;
class B1
{
public:
void display()
{
cout<<"\n In the Base class 1";
}
};
class B2
{
public:
void display()
{
cout<<"\n In the Base class 2";
}
};
class D:public B1,public B2
{
public:
D()
{
    cout<<"\nObject of derived class is created";
}
};
int main()
{
D obj;
//obj.display();//Ambiguity(Compile time error)
obj.B1::display();
obj.B2::display();
return 0;
}
