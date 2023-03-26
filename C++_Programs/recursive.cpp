#include<iostream>
using namespace std;
class recursion
{
	int X;
	public:
		int input()
		{
			cout<<"\nEnter the X=";
			cin>>X;
			return x;
		}
		int fact(int a)
		{
			if(n<=1)
			{
				return 1;
				else 
				{
					return(n*fact(n-1))
					}
				}
			};
			int main()
			{
			 recursion r;
    int n=r.input();
    cout<<"\nFactorial Of the number is="<<r.fact(n);
    return 0;	
}
