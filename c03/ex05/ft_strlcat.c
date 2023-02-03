#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *str, char *src, unsigned int size)
{
    int i=0;
    int j=0;
    int k=0;
   
    while(str[i] != '\0')
    {
        i++;
    }
    while(j+i+1 != size)
    {
        str[i + j] = src[j];
        j++;
    }
    while(src[k] != '\0')
    {
        k++;
    }
    size = i + k;
    
    return(size);
}

int main(void)
{
    int s;
    unsigned int size = 13;
    char text1[13] = "hello mr ";
    char text2[] = "mmxv, would u like to join out club";
    s = ft_strlcat(text1, text2, size);
    printf("%d\n",s);
    printf("%s ",text1);
    
}