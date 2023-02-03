#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
    if(nb == 0 || power == 0)
    {
        return(0);
    }
    if(power == 1)
    {
        return(nb);
    }
    return(nb * ft_recursive_power(nb, power -1));
}

int	main(void)
{
	printf("%d\n", ft_recursive_power(5, 8));
	return (0);
}
