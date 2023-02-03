#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_sort_int_tap(int* tab, int size)
{
    int ss = 0;
	int tmp[size];
	int j = 0;
	int x = size - 1;
	while(j<99)
	{
		for(int i = 0;i<size+1;i++)
		{
			if(tab[i]==j)
			{
				tmp[ss] = tab[i];
				ss++;
			}
		}
		j++;
	}
	for(int k=0;k<x+1;k++)
	{
		ft_putchar(48+tmp[k]);
	}
}

int main(void)
{
	int test[6]={5,3,8,9,1,7};
	ft_sort_int_tap(test,6);
}
