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
    if(argc >= 1)
    {
        int i = 1;
        while(i<argc)
        {
            int x = ft_size(argv[i]);
            
            char store[x];
            
            ft_strcpy(store, argv[i]);
            if (i+1<argc)
            {
                ft_putchar('\n');
            }
            
            i++;
        }
    }
    return 0;
}