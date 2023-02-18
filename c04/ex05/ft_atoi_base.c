#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_atoi_base(char *str, char *base)
{
    int value;
    value = ft_atoi(str);
    ft_putnbr_base(value, base);
}

int ft_size(char *size) {
    int i=0;
    
    while(size[i] != '\0')
    {
        i++;
    }
    return i;
}

int ft_atoi(char *str)
{
    int number = 0;
    int i = 0;
    int x = 1;
    int counter = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '-')
        {
            counter++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number = number * 10 + str[i] - 48;
        }
        else if(str[i] > '9')
        {
            break;
        }
        i++;
    }
    if(counter % 2 > 0)
    {
        x = -1;
    }
    
    return(number*x);
}

void ft_putnbr_base(int nbr, char *base)
{
    int size = ft_size(base);
	
	char fexnbr[5];
   	int i=0;
   
   	while (nbr > 0)
   	{
      	fexnbr[i] = nbr % size;
      	nbr = nbr / size;
      	i++;
   	}
   	int j = i-1;
   	while(j >= 0)
   	{
      	ft_putchar(base[fexnbr[j]]);
       	j--;
   	}
	
}

int main()
{
    char str[] = "  ---+--+1234ab567";
    char base[10] = "0123456789";
    ft_atoi_base(str, base);
}