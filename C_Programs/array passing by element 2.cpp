 #include <stdio.h>
void show(int a);
void input(int *a);

int main()
{
    int ar[10];
    
    for(int i=0; i<10; i++)
        input(&ar[i]); // call by address 
    

    for(int i=0; i<10; i++)
        show(ar[i]); // call by value 
    
    return 0;
}

void show(int a)
{
    printf("%d ", a);
}
void input(int *a)
{
    scanf("%d", a);
}





