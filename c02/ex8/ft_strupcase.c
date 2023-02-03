#include <unistd.h>

char *ft_strupcase(char *str)
{
    if (*str >= 'a' && *str <= 'z'){
    	for(int i=0;str[i] != '\0';i++)
    	{
    		str[i] = str[i] - 32;
    	}
    }
	return(str);
}