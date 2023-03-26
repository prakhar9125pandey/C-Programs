#include<iostream>
using namespace std;
int main() 
{
    float s1,s2,s3,s4,s5;
    float total=0.00,avg=0.00,percent=0.00;
    char grade;
    int Savg;
    cout<<"Enter the marks of five subjects::\n";
    cin>>s1>>s2>>s3>>s4>>s5;
    total=s1+s2+s3+s4+s5;
    avg=total/5.0;
    percent=(total/500.0)*100;
    Savg=(int)avg/10;
    switch (Savg) 
	{
        case 10:
            grade = 'A';
            break;

        case 9:
            grade = 'A';
            break;

        case 8:
            grade = 'B';
            break;

        case 7:
            grade = 'C';
            break;

        case 6:
            grade = 'D';
            break;

        default:
            grade = 'E';
            break;
    }
    cout<<"\nTotal marks="<<total<<"/500\n";
    cout<<"Average marks="<<avg<<"\n";
    cout<<"Percentage="<<percent<<"%\n";
    cout<<"Grade="<<grade<<"\n";
    return 0;
}
