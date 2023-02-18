#include <stdio.h>

int ft_is_prime(int nbr)
{
    while(nbr < 100)
    {
        nbr++;
        int check = 0;
        int i = 2;
        while(i<=nbr)
        {
            if(nbr % i == 0)
                check++;
            i++;
        }
        if(check < 2)
            return nbr;
    }
}

int main()
{
    printf("%d",ft_is_prime(13));
}