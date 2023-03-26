#include <stdio.h>
int main()
{
    int ar[10]={29,10,14,37,14,12,23,65,12,2};
    int val;
    
    printf("Enter the element you want to search: ");
    scanf("%d", &val);
    
    

    for(int i=0; i<9; i++)   // linear search
    {
        if(val==ar[i])
        {
            printf("\n Element found at location %d", i);
        }
    }
}
