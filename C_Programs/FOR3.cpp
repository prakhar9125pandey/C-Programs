#include<stdio.h>
int main()
{
int num, r;
printf("\n Enter a number to print table:");
scanf("%d", &num);

printf("Upto what range you want to print table:");
scanf("%d", &r);

for ( int n=1 ; n<=r ; n++ )
{
printf("\n %d * %d = %d ", num, n, n*num);
}
}
