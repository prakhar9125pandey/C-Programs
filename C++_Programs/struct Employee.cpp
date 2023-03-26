#include <iostream>
using namespace std;
struct employee 
{
   char emp_name[100];
   int emp_id;
   float emp_salary;
   void input()
   {
       cout<<"\nEnter the Employee name, id and Salary:";
       cin>>emp_name>>emp_id>>emp_salary;
   }
};
int main()
{
    employee obj[3];
    for(int i=0;i<3;i++)
    {
        obj[i].input();
    }
    cout<<"\n The details of the Employees are:";
    for(int i=0;i<3;i++)
    {
        cout<<endl<<obj[i].emp_name<<" "<<obj[i].emp_id<<" "<<obj[i].emp_salary;
    }
    return 0;
}
