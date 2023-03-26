#include<iostream>
#include<fstream>
#include<string>
using namespace std;

class doctor
{
public:
int doc_id,doc_salary;
string doc_name,doc_specialization;
void input()
{
cout<<"\n"<<"Enter Doctor's ID:";
cin>>doc_id;
cout<<"\n Enter Doctor's Name:";
cin>>doc_name;
cout<<"\n Enter Doctor's Salary:";
cin>>doc_salary;
cout<<"\n Enter Doctor's Specialization:";
cin>>doc_specialization;
}
};
int main()
{
int n;
string str1,str2;
cout<<"\n Enter number of doctor records you want to enter";
cin>>n;
doctor doc[n];
fstream FILE1,FILE2,FILE3;
FILE1.open("record1.txt",ios::out);
for(int i=0;i<n;i++)
{
doc[i].input();

}
for(int i=0;i<n;i++)
{
if(doc[i].doc_specialization.compare("cardiologist")==0)
{
FILE1<<"Doctor ID: "<<doc[i].doc_id<<endl;
FILE1<<"Doctor Name: "<<doc[i].doc_name<<endl;
FILE1<<"Doctor Salary: "<<doc[i].doc_salary<<endl;
FILE1<<"Doctor Specialization: "<<doc[i].doc_specialization<<endl;
FILE1<<endl;
}
}
FILE1.close();
FILE2.open("record2.txt",ios::out);
for(int i=0;i<n;i++)
{
if(doc[i].doc_salary>80000)
{
FILE2<<"Doctor ID: "<<doc[i].doc_id<<endl;
FILE2<<"Doctor Name: "<<doc[i].doc_name<<endl;
FILE2<<"Doctor Salary: "<<doc[i].doc_salary<<endl;
FILE2<<"Doctor Specialization: "<<doc[i].doc_specialization<<endl;
FILE2<<endl;
}
}
FILE2.close();
FILE1.open("record1.txt",ios::in);
FILE2.open("record2.txt",ios::in);
FILE3.open("finalrecord.txt",ios::out);
while(getline(FILE1,str1))
{
FILE3<<str1;
FILE3<<endl;
}
while(getline(FILE2,str2))
{
FILE3<<str2;
FILE3<<endl;
}
FILE1.close();
FILE2.close();
FILE3.close();
}
