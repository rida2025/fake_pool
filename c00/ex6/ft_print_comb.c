#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
	int r;
	int e;
	int d;

	r = 0 - 1;
	while (r < 7)
	{
		r++;
		e = r;
		while(e < 8)
		{
			e++;
			d = e;
			while(d < 9)
			{
				d++;
				ft_putchar(r+48);
				ft_putchar(e+48);
				ft_putchar(d+48);
				if (r != 7)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}


int main()
{
	ft_print_comb();
}
