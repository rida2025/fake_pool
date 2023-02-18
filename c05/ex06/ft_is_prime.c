#include <stdio.h>

int ft_is_prime(int nbr)
{
    int i = 2;
    while(i<nbr)
    {
        if(nbr % i == 0)
        {
            return 0;
        }
        i++;
    }
    return 1; 
}

int main()
{
    printf("%d",ft_is_prime(77));
}