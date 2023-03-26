#include <stdio.h>
int main()
{
int x=20, y=4;
char a;
printf("choose operation (a,m,s,d): ");
scanf("%c",&a);


switch(a)
{
case 'a':
printf("\n Sum = %d", x+y);
break;

case 'm':
printf("\n Mul = %d", x*y);
break;

case 's':
printf("\n Sub = %d", x-y);
break;

case 'd':
printf("\n Div = %d", x/y);
break;

default:
printf("Invalid Input");


}

}
