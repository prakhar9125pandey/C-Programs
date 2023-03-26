   #include <stdio.h>
void show(int a);

int main()
{
    int ar[10]={11,22,33,44,55,66,77,88,99,100};

    for(int i=0; i<10; i++)
    {
            show(ar[i]); // call by value 
    }
    return 0;
}

void show(int a)
{
    printf("%d ", a);
}

