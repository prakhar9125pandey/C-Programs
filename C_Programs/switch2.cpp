#include <stdio.h>
int main()
{
int x=20, y=4;
char a;
printf("choose operation (+,*,-,/): ");
scanf("%c",&a);


switch(a)
{
case '+':
printf("\n Sum = %d", x+y);
break;

case '*':
printf("\n Mul = %d", x*y);
break;

case '-':
printf("\n Sub = %d", x-y);
break;

case '/':
printf("\n Div = %d", x/y);
break;

default:
printf("Invalid Input");


}

}
