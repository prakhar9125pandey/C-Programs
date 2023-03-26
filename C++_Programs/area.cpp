#include<iostream>
using namespace std;
class rectangle
{
	int length,breadth;
	public:
	void input()
	{
		cout<<"\nEnter the length and breadth:";
		cin>>length>>breadth;
	}
	void display()
	{
		cout<<"\nAre is:"<<length*breadth;
	}
};
int main()
{
	rectangle obj[3];
	for(int i=0;i<3;i++)
	{
		obj[i].input();
		obj[i].display();
		}
		return 0;
		}		
