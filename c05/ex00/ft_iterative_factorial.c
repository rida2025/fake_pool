#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int x = 1;
    if(nb == 0){
        return 0;
    }
    for(int i=1;i<=nb;i++)
    {
        x = x * i;
    }
    return(x);
}

int main()
{
    printf("%d",ft_iterative_factorial(5));
    return 0;
}
