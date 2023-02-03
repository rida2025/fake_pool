#include <unistd.h>

char *ft_strcapitalize(char *str)
{
    str[0] = str[0] - 32;
	for(int i=0; str[i]!= '\0'; i++)
	{
		if(str[i] == 32 || str[i] == 43)
		{
			if(str[i+1] >= 97 && str[i+1] <= 122)
			{
				str[i+1] = str[i+1] - 32;
			}
		}
	}
	return(str);
}