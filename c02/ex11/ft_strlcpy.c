#include <unistd.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int len = 0;
	while(src[len] != '\0')
	{
		dest[len] = src[len];
		size++;
		len++;
	}
	return(len);
}