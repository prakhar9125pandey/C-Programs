#include <stdio.h>
int main()
{
int a[5];

for(int i=0; i<5; i++) // Initialization method 3
{
    printf("Enter value for a[%d]=", i);
    scanf("%d", &a[i]);
}

for(int i=0; i<5; i++)
{
    printf("\n a[%d] = %d ",i, a[i]);
}

return 0;

}

