#include <stdio.h>
int main()
{
int a;
printf("Enter a number (1-4): ");
scanf("%d",&a);

if(a==1)
printf("\n Number is One");
else if(a==2)
printf("\n Number is Two");
else if(a==3)
printf("\n Number is Three");
else if(a==4)
printf("\n Number is Four");
else
printf("Invalid Input");

}
