#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;;
	}
	dest[i] = '\0';
	
	int j = 0;
	
	while(dest[j] != '\0')
	{
		write(1, &dest[j], 1);
		j++;
	}
	return (dest);
}

int main(void)
{
	char first[12] = "doesnt work";
	char second[12] = "please work";
	ft_strcpy(first, second);
}