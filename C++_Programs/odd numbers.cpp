#include<iostream>

using namespace std;

int size;

int *arr;

void show()
{
cout<<"\n\n * * * Array * * *\n";

for(int i = 0; i< size; i++)
cout<<arr[i] <<"\t";
}

int main()
{
cout<<"Enter the Size of Array:\t";
cin>> size;

//Create an array

arr = new int[size];

//Read the values

for(int i=0; i<size; i++)
{
cout<<"\nEnter the value at index " <<i << "\t";
cin >> arr[i];
}

//call the show()

show();

return -1;
};
