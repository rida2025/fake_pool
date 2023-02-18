#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr_base(int nbr, char *base)
{
	if(base == "01")
	{
		char fexnbr[5];
	   	int i=0;
	   
	   	while (nbr > 0)
	   	{
	      	fexnbr[i] = nbr % 2;
	      	nbr = nbr / 2;
	      	i++;
	   	}
	   	int j = i-1;
	   	while(j >= 0)
	   	{
	      	ft_putchar("01"[fexnbr[j]]);
	       	j--;
	   	}
	}
	else if(base == "0123456789abcdf")
	{
		char hexnbr[5];
	   	int i=0;
	   
	   	while (nbr > 0)
	   	{
	      	hexnbr[i] = nbr % 16;
	      	nbr /= 16;
	      	i++;
	   	}
	   	int j = i-1;
	   	while(j >= 0)
	   	{
	      	ft_putchar("0123456789abcdf"[hexnbr[j]]);
	       	j--;
	   	}
	}
	else if(base == "0123456789")
	{
		char hexnbr[5];
	   	int i=0;
	   
	   	while (nbr > 0)
	   	{
	      	hexnbr[i] = nbr % 10;
	      	nbr /= 10;
	      	i++;
	   	}
	   	int j = i-1;
	   	while(j >= 0)
	   	{
	      	ft_putchar("0123456789"[hexnbr[j]]);
	       	j--;
	   	}
	}
	else if(base == "poneyvif")
	{
		char fexnbr[5];
	   	int i=0;
	   
	   	while (nbr > 0)
	   	{
	      	fexnbr[i] = nbr % 8;
	      	nbr = nbr / 8;
	      	i++;
	   	}
	   	int j = i-1;
	   	while(j >= 0)
	   	{
	      	ft_putchar("poneyvif"[fexnbr[j]]);
	       	j--;
	   	}
	}
   
}

int main(void)
{
	char base1[] = "01";
	char base2[] = "0123456789";
	char base3[] = "0123456789abcdf";
	char base4[] = "poneyvif";

	ft_putnbr_base(16, "poneyvif");
	return 0;
}