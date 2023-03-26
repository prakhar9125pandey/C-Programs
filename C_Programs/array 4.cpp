#include <stdio.h>
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

for(int i=0; i<n; i++)
{
    printf("\n a[%d] = %d ",i, a[i]);
}

return 0;

}

