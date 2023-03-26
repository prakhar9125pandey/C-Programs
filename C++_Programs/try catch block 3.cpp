#include<iostream>
#include<string.h>
using namespace std;
class checking
{
int x;
public:
void getdata()
{
    cout<<"\nEnter x:";
    cin>>x;
}
int check()
{
    if(x%2==0)
    return 1;
    else
    return 0;
}
void display()
{
cout<<"\nInvalid";
}
};
int main()
{
try
{
checking obj;
obj.getdata();
int result=obj.check();
if(result==1)
throw obj;
else 
cout<<"\nNo exception is thrown";
}
catch(checking c)
{
cout<<"\nClass typed exception caught successfully";
c.display();
}
return 0;
}



