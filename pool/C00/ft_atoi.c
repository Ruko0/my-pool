#include <stdio.h>
#include <stdlib.h>
int ft_atoi(char *str)
{
    int i = 0;
	
    int sign = 1;
    int nb = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if (str[i] == '-' || str[i] =='+')
    {
        if (str[i] == '-')
        {
            sign = -sign;
        }
        i++;
    }    
    while (str[i] >= '0' && str[i] <= '9')
    {
        nb = nb * 10 + (str[i] - '0');
        i++;
    }
    return (nb * sign);
}

int main()
{
    printf("%i\n", ft_atoi("            -1337abd-lm"));
    printf("%i\n", atoi("         -1337abddlm"));
}
