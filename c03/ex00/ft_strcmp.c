#include <unistd.h>

int ft_strcmp(char *s1, char *s2)
{
	int i=0;
	while(s1[i] != '\0')
	{
		if(s1[i] == s2[i])
		{
			i++;
		}
		else if(s1[i] < s2[i])
		{
			return(-1);
		}
		else
		{
			return(1);
		}
	}
	return(0);
}

int main(void)
{
	char str1[] = "hello xx";
	char str2[] = "hello yy";
	if(ft_strcmp(str1, str2) == 0)
	{
		write(1, "they are equal", 14);
	}
	else
	{
		write(1, "they are not equal", 18);
	}
}