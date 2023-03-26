#include <iostream>
using namespace std;
class rectangle 
{
    int length,breadth;
    public:
    int area;
    void input()
    {
        cout<<"\nEnter length and breadth";
        cin>>length>>breadth;
    }
    int calculate()
    {
        area=length*breadth;
        return area;
    }
};
int main()
{
    rectangle obj[3];
    float sum;
    for(int i=0;i<3;i++)
    {
        obj[i].input();
        cout<<obj[i].calculate();
    }
    for(int i=0;i<3;i++)
{
sum+=obj[i].area;

}
cout<<"\The average area is :"<<(sum/3);
return 0;
}
