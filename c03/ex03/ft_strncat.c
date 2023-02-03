#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	int counter = 0;
	while(dest[counter] != '\0')
	{
		counter++;
	}
	int i = 0;
	while(i < nb)
	{
		dest[counter+i] = src[i];
		i++;
	}
	
	dest[counter + i] = '\0';
	return(dest);
}

int main(void)
{
	char text1[40] = "my name is 2015 ";
	ft_strncat(text1, "and im the mmxv", 14);
	printf("%s\n", text1);
	return 0;
}