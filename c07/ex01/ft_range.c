#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    if(min >= max)
    {
        return NULL;
    }
    
    int i=max-min+1;
    
    int *pointer;
    
    pointer = (int*) malloc(i * sizeof(int)+1);
    
    if(pointer == NULL)
    {
        return NULL;
    }
    
    i=0;
    
    while(min+i<=max)
    {
        pointer[i] = min+i;
        i++;
    }
    
    return pointer;
}

int main(void)
{
    int *arry = ft_range(5, 18);
    
    int i = 0;
    
    while(arry[i] != 0)
    {
        printf("%d ",arry[i]);
        i++;
    }
    
    return 0;
}
