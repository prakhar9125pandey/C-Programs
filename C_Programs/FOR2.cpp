#include<stdio.h>
int main()
{
int num;
printf("\n Enter a number to print table:");
scanf("%d", &num);

for ( int n=1 ; n<=10 ; n++ )
{
printf("\n %d * %d = %d ", num, n, n*num);
}
}
