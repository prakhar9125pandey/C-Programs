#include <stdio.h>

int main()
{
   int ar[2][4]={11,22,33,44,55,66,77,88};
   
   
    printf("\n Enter Array Elements: \n");
   
   for(int r=0; r<2; r++)
   {
       for(int c=0; c<4; c++)
       {
           scanf("%d",&ar[r][c]);
       }
      
   }
   
   printf("\n Array Elements are: \n");
      for(int r=0; r<2; r++)
   {
       for(int c=0; c<4; c++)
       {
           printf("%d ",ar[r][c]);
       }
       printf("\n");
   }
   

    return 0;
}
