#include<iostream>
using namespace std;
class Array
{
int *arr;
int size;
public:
void get_data(int n)
{
size=n;
arr=new int[size];
cout<<"\nEnter elements:";
for(int i=0;i<size;i++)
{
cin>>*(arr+i);
}
}
int largest()
{
int max=*(arr+0);
for(int i=1;i<size;i++)
{
if(*(arr+i)>max)
{
    max=*(arr+i);
}
}
delete []arr;
cout<<"\nMemory is deallocated";
}
};
int main()
{
Array abc;
int n;
cout<<"\n Enter the number of elements:"<<endl;
cin>>n;
a.get_data(n);
cout<<"\nLargest element from the given array elements is=";
<<abc.largest();
return 0;
}

