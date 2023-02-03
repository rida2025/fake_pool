#include<stdio.h>

int ft_iterative_power(int nb, int power)
{
    int result = 1;
    if(nb == 0 || 0 == power){
        result = 0;
        return(result);
    }
    for(int i=0;i<power;i++)
    {
        result = result * nb;
    }
    return(result);
}
int main()
{
    printf("%d ",ft_iterative_power(2,5));
    return 0;
}
