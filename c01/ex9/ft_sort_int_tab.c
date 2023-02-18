#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_sort_int_tap(int* tab, int size)
{
	int tmp[size];
	int j = 0;
	int k=0;
	while(j<99)
	{
	    int i = 0;
		while(i<size)
		{
			if(tab[i]==j)
			{
				tmp[k] = tab[i];
				k++;
			}
			i++;
		}
		j++;
	}
	k=0;
	while(k<size)
	{
		ft_putchar(48+tmp[k]);
		k++;
	}
	
}

int main(void)
{
	int test[6]={5,3,8,9,1,7};
	ft_sort_int_tap(test,6);
}
