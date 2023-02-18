#include <stdio.h>
#include <stdlib.h>

char *ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;;
	}
	
	return dest;
}

int ft_len(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *ft_strdup(char *src)
{
    char *pointer;

    pointer = (char *) malloc(ft_len(src)+1);
    ft_strcpy(pointer, src);
    return pointer;
}

int main(void)
{
    char text[] = "hello am i copyed";
    printf("%s",ft_strdup(text));

    return 0;
}