#include <stdio.h>
int main()
{
int a[5]; // Initialization method 2

a[0]=100;
a[4]=500;
a[1]=34;
a[2]= 50;
a[3]=100;


for(int i=0; i<5; i++)
{
printf("%d ", a[i]);
}
return 0;
}

