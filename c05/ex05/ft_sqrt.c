#include <stdio.h>

int ft_sqrt(int nb)
{
    if(nb == 1)
    {
        return (1);
    }
    if(nb <= 0)
    {
        return (0);
    }
    int kid = 2;
    while((kid * kid) != nb && kid <= 10000)
    {
        kid++;
    }
    return(kid);
}

int main(){
    printf("%d",ft_sqrt(100));
}
