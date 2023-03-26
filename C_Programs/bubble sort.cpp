#include <stdio.h>
int main()
{
    int ar[10]={29,10,14,37,14,12,23,65,12,2};
    int t;
    
for(int j=0; j<9; j++)
{
    for(int i=0; i<9; i++)
    {
        if( ar[i]>ar[i+1] )
        {
            t=ar[i];
            ar[i]=ar[i+1];
            ar[i+1]=t;
        }
    }
}
    
    
    printf("\n Sorted Array = ");
    for(int i=0; i<10; i++)
        printf("%d  ", ar[i]);
        
}
