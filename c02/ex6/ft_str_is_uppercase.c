#include <unistd.h>

int ft_str_is_uppercase()
{
	int check;
	if(str[0] == '\0')
	{
		return(1);
	}
	for(int i=0;str[i] != '\0';i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
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

int main()
{
	ft_str_is_uppercase("itwork")
}