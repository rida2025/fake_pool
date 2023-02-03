#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 32 && str[i] <= 126)
        {
            write(1, &str[i], 1);
        }
        else
        {
            int x = 92;
            write(1, &x, 1);
            write(1, &"0123456789abcdef"[str[i]/16], 1);
            write(1, &"0123456789abcdef"[str[i]%16], 1);
        }
        i++;
    }
}

int main()
{
    ft_putstr_non_printable("hello\nmomy\b");
}