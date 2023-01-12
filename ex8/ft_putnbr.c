#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{

	ft_putchar('"');
	if (nb < 0)
	{
		nb = nb * (-1);
		ft_putchar('-');
		ft_putchar(48 + nb / 10);
		ft_putchar(48 + nb % 10);
	}
	if (nb >= 10)
	{
		ft_putchar(48 + nb / 10);
		ft_putchar(48 + nb % 10);
	}
	else
	{
		ft_putchar('0');
	}
	ft_putchar('"');

}

int main()
{
	ft_putnbr(42);
}