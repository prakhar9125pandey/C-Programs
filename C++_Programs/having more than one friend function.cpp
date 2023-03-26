#include<iostream>
using namespace std;
class B;
class C;
class A
{
        int X;
        public:
                void input()
                {
                        cout<<"\Enter the x=";
                        cin>>X;
                }
                friend int smallest(A,B,C);
};
class B
{
        int Y;
        public:
                void input()
                {
                        cout<<"\Enter the y=";
                        cin>>Y;
                }
        friend int smallest(A,B,C);
};
class C
{
        int Z;
        public:
                void input()
                {
                        cout<<"\Enter the z=";
                        cin>>Z;
                }
        friend int smallest(A,B,C);
};
int smallest(A a,B b,C c)
{
	if(a.X<b.Y&&a.X<c.Z)
    if(a.X<b.Y && a.X<c.Z)
    return a.X;
    else if(b.Y<a.X && b.Y<c.Z)
    return b.Y;
    else
    return c.Z;
}
int main()
{
    A obj1;
    obj1.input();
    B obj2;
    obj2.input();
    C obj3;
    obj3.input();
    cout<<"\nSmallest Input is:"<<smallest(obj1,obj2,obj3);
    return 0;
}

