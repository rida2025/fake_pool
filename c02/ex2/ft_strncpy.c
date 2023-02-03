#include <unistd.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	while(i < n+1)
	{
		dest[i] = src[i];
		i++;
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
	ft_strncpy(first, second, 6);
}