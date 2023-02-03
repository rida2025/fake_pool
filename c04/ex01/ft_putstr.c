#include <unistd.h>

void ft_putstr(char *str)
{
	int i=0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main()
{
	char text[10] = "hello mom";
	ft_putstr(text);
	return 0;
}