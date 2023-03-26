#include <stdio.h>
 
int main()
{
    int ar[5]={10,20,30};
    
    printf("\n %ld", ar);
    
    printf("\n ar[0] = %d and add = %ld", ar[0], &ar[0]);
    printf("\n ar[1] = %d and add = %ld", ar[1], &ar[1]);
    printf("\n ar[2] = %d and add = %ld", ar[2], &ar[2]);
    printf("\n ar[3] = %d and add = %ld", ar[3], &ar[3]);
    printf("\n ar[4] = %d and add = %ld", ar[4], &ar[4]);
    
    return 0;
}
