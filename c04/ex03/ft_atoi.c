#include <stdio.h>

int ft_atoi(char *str)
{
    int number = 0;
    int i = 0;
    int x = 1;
    int counter = 0;
    while(str[i] != '\0')
    {
        if(str[i] == '-')
        {
            counter++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            number = number * 10 + str[i] - 48;
        }
        else if(str[i] > '9')
        {
            break;
        }
        i++;
    }
    if(counter % 2 > 0)
    {
        x = -1;
    }
    
    return(number*x);
}

int main()
{
    char str[] = "  ---+--+1234ab567";
    printf("%d", ft_atoi(str));
}