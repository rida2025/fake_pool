#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	for (int a = 0;a < 99;a++)
	{
		for (int b = a + 1;b < 100;b++)
		{
			ft_putchar(48+ a / 10);
			ft_putchar(48+ a % 10);
			ft_putchar(' ');
			ft_putchar(48+ b / 10);
			ft_putchar(48+ b % 10);
			if (a != 98)
			{
				ft_putchar(',');
			}
		}
	}
}


int main()
{
	ft_print_comb2();
	return 0;
}