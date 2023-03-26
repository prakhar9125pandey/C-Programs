#include<iostream>
using namespace std;
class employee
{
	char name[100];
	int id;
	public:
		float salary;
		void input()
		{
			cout<<"\Enter the name of the Employee:";
			cin>>name;
			cout<<"Enter the ID:";
			cin>>id;
			cout<<"\nEnter the salary of the Employee:";
			cin>>salary;
					}
					void display()
					{
						cout<<"\nThe Details Of The Employee Is:";
						cout<<name<<" "<<id<<" "<<salary;
					}
				};
				int main()
{
	float average;
	employee obj1,obj2,obj3;
	obj1.input();
	obj1.display();
	obj2.input();
		obj2.display();
	obj3.input();
		obj3.display();
		average=(obj1.salary+obj2.salary+obj3.salary)/3.0f;
	cout<<"\nThe Average Salary;"<<average;
	return 0;
}

