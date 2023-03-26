#include <stdio.h>
int main()
{
int a;
printf("Enter a number (1-4): ");
scanf("%d",&a);


switch(a)
{
case 1:
printf("\n Number is One");
break;

case 2:
printf("\n Number is Two");
break;

case 3:
printf("\n Number is Three");
break;

case 4:
printf("\n Number is Four");
break;

default:
printf("Invalid Input");

}

}
