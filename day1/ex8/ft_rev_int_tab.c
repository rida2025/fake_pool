#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_rev_int_tap(int *tap, int size)
{
	int x = size;
	int tmp[size];
	size = size - 1;
	while(size>0)
	{
		for(int i=0;i<x+1;i++)
        {
			tmp[i] = tap[size];
			size--;
		}
	}
	for(int j=0;j<5;j++)
	{
		ft_putchar(tmp[j]+48);
	}
}

int main()
{
	int c[5] = {3,5,8,1,6};
	ft_rev_int_tap(c,5);
	return 0;
}
