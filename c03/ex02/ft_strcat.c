#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src)
{
	int counter = 0;
	while(dest[counter] != '\0')
	{
		counter++;
	}
	int i = 0;
	while(src[i] != '\0')
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
	ft_strcat(text1, "and im the mmxv");
	printf("%s\n", text1);
	return 0;
}