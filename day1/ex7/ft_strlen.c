#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i = 0;
	
	while(str[i] != '\0')
	{
		i++;
	}
	ft_putchar(48 + i/10);
	ft_putchar(48 + i%10);
	return 0;
}

int main(void)
{
	char *test = "hello world";
	ft_strlen(test);
	return 0;
}
