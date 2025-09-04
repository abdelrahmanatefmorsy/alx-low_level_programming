#include<stdio.h>
#include<stdlib.h>


int main()
{
    int i;
    int *ptr = malloc(sizeof(int) * 5); 
    for (i = 0; i < 5; i++)
    {
        ptr[i] = 1;
    }
     for (i = 0; i < 5; i++)
    {
        printf("%d " , ptr[i]);
    }
    
    free(ptr);

    return (0);
}
