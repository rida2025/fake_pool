#include <unistd.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i=0;
	while(i < n)
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
	char text1[] = "string 1";
	char text2[] = "string 2";
	if(ft_strncmp(text1, text2, 6) == 0)
	{
		write(1, "they are equal", 14);
	}
	else
	{
		write(1, "they are not equal", 18);
	}
}