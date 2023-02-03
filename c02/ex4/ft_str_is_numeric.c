#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int check;
	if(str[0] == '\0')
	{
		return(1);
	}
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] >= '0' && str[i] <= '9')
		{
		}
		else
		{
			check = 1;
		}
	}
	if (check == 1)
	{
	    return(0);
	}
	else
	{
	    return(1);
	}
}

int main(void)
{
	printf("%d ",ft_str_is_numeric(56432185));
}