#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_comb2(void)
{
	int a = -1;
	int b = 0;
	
	while(a < 98)
	{
		a++;
		b = a;
		while(b < 99)
		{
			b++;
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
}
