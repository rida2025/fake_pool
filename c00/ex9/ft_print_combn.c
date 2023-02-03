#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combn(int	n)
{
	//under heavy work
}

int	main(void)
{
	ft_print_combn(5);
}