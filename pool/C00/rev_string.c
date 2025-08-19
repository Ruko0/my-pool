#include <stdio.h>

void ft_swap(char *a, char *b)
{
    char x;
    x = *a;
    *a = *b;
    *b = x;
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;    
}

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = ft_strlen(str);
    while(i < j - 1)
    {
       ft_swap(&str[i], &str[j - 1]);
        i++;
        j--;
    }    
    return str;
}

int main()
{
    char str[] = "Hello world";
    printf("%s\n", ft_strrev(str));
}