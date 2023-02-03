#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find)
{
	int i = 0;
	int j = 0;
	while(str[i] != '\0')
	{
		
		if(str[i] == to_find[j])
		{
			if(to_find[j+1] != '\0')
			{
				j++;
			}
			else
			{
				return(&str[i-j]);
			}
		}
		i++;
	}
	return(NULL);
}

int main()
{
	char text1[] = "hello mom is there any cookies left from the party of yesterday";
	char text2[] = "cookies";
	char *p;
	p = ft_strstr(text1, text2);
	printf("%s ", p);
	return 0;
}