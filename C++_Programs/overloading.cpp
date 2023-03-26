#include<iostream>
using namespace std;
class overloading
{
	public:
		int volume_cube(int side)
		{
			return(side*side*side)
		}
		int volume_cuboid(int length,int breadth,int height)
		{
			return(length*breadth*height)
		}
float volume_cylinder(float radius,float height)
{
	return(3.14*radius*radius*height)
}
};
int main()
{
	overloading ob1;
	int volume_cube,volume_cuboid;
	float volume_cylinder;
	cube=obj1.volume_cube(5);
	cout<<"\nTHE VOLUME OF CUBE IS=";
	cuboid=obj1.volume_cuboid(3,4,5);
	cout<<"\nTHE VOLUME OF CUBOID IS=";
	cylinder=ob1.volume_cylinder(3.14f);
	cout<<"\nTHW VOLUME OF CYLINDER IS=";
	return 0;
}
