#include <unistd.h>

int ft_str_is_printable(char *str)
{
	int check;
	int i=0;
	while(str[i] != '\0')
	{
		if(str[i] >= 32 && str[i] <= 126 )
		{
			
		}
		else
		{
			check = 1;
		}
		i++;
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