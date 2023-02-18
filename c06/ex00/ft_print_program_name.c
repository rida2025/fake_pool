#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

char *ft_strcpy(char *dest, char *src)
{
    int i = 0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;;
    }
    dest[i] = '\0';
    
    int j = 0;
    
    while(dest[j] != '\0')
    {
        write(1, &dest[j], 1);
        j++;
    }
    return (dest);
}

int ft_size(char *str)
{
    int i=0;
    while(str[i] != '\0')
    {
       i++; 
    }
    return i;
}

int main(int argc, char **argv)
{    
    if(argc >= 0)
    {
        int x = ft_size(argv[0]);
        
        char store[x];
        
        ft_strcpy(store, argv[0]);
    }
    return 0;
}