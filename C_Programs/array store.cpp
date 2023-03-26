#include <stdio.h>
void show(int b[], int s);

 int main()
{
int a[10],n;

printf("How many integers you want to store: "); 
scanf("%d", &n);

for(int i=0; i<n; i++) // Initialization method 3
{
    printf("Enter value for a[%d]=", i);
    scanf("%d", &a[i]);
}

show( a, n); // passing entire array


}

void show(int b[], int s)
{
   for(int i=0; i<s; i++)
    {
    printf("\n a[%d] = %d ",i, b[i]);
    } 
}
