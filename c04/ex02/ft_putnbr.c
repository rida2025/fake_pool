#include <unistd.h>

int ft_len(unsigned x) {
    if (x >= 1000000000) return 10;
    else if (x >= 100000000)  return 9;
    else if (x >= 10000000)   return 8;
    else if (x >= 1000000)    return 7;
    else if (x >= 100000)     return 6;
    else if (x >= 10000)      return 5;
    else if (x >= 1000)       return 4;
    else if (x >= 100)        return 3;
    else if (x >= 10)         return 2;
    return 1;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if(nb == 0)
    {
        ft_putchar('0');
    }

	
	
	int i = 0;

	if(nb < 0)
    {
    	nb = nb * -1;
    	int a = ft_len(nb);
    	int ary[a];
        while (nb > 0) 
		{
			ary[i] = nb % 10;
			nb = nb / 10;
			i++;
	  	}
	  	
	    int n = a;
	    ft_putchar('-');
	  	while(n > 0)
	  	{
	  		ft_putchar(ary[n-1] + '0');
	  		n--;
	  	}
    }
    
    else if(nb > 0)
    {
        int a = ft_len(nb);
        int ary[a];
    	while (nb > 0) 
    	{
    		ary[i] = nb % 10;
    		nb = nb / 10;
    		i++;
      	}
      	
        int n = a;
      	while(n > 0)
      	{
      		ft_putchar(ary[n-1] + '0');
      		n--;
      	}
    }
}

int main()
{
	ft_putnbr(-1337);
}