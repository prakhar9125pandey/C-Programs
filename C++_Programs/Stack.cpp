#include<iostream>
#include<conio.h>
using namespace std;

char stack[5];

int top = -1;

void pop()
{
if(top == -1) cout<<"\nStack is EMPTY";
else
{
char item = stack[top]; //store the item to be deleted
if(top==0)
{
top=-1;
}
else if(top == 4) top = 0;
else top = top-1;

cout<<"\nDeleted: "<<item;
}
}

void push(char item)
{
if(top== 4)
cout<<"\nStack is FULL";

else {

if(top == -1)
{
top = 0;
}

//insert the item
stack[top] = item;
}
}


int main()
{
int choice;
do{
cout<<"\n____________________________________\n";
cout<<"1. Insert in the stack" <<endl;
cout<<"2. Delete from the stack" <<endl;
cout<<"0. EXIT" <<endl;

cout<<"\n\nEnter the Choice:\t";
cin>>choice;

switch(choice)
{
case 1: char x;
cout<<"\n\nEnter the element to be inserted:\t";
cin >> x;
push(x); break;

case 2: pop(); break;
default: cout<<"\n\nOh... Incorrect Choice, Kindly Re-enter!";
case 0: exit(0);
}
}
while(true);

return 0;
}
