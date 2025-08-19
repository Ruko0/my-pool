#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c ,1);
}

void zigzag_case(char *str)
{
    if (str == NULL)
    {
        return ;
    }
    int i = 0;
    while (str[i])
    {
        if (i % 2 == 1)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
            {
                ft_putchar(str[i] + 32);
            }
            else
                ft_putchar(str[i]);
        }
        else if (i % 2 == 0)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                ft_putchar(str[i] - 32);
            }
            else
                ft_putchar(str[i]);
        }
        i++;
    }
    ft_putchar('\n');
}

int main()
{
    zigzag_case("Hello World");
    zigzag_case("42school");
    zigzag_case("ABC123def");
}