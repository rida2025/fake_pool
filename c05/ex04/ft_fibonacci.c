#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index <= 0)
    {
        return (-1);
    }
	if (index <= 2)
	{
        return (1);
	}
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	main(void)
{
	printf("%d\n", ft_fibonacci(9));
	//index 0 1 2 3 4 5 6  7  8  9  10
    //numbr 0 1 1 2 3 5 8 13 21 34  55
	return (0);
}
