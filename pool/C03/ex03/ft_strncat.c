char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    while (dest[i])
        i++;
    j = 0;    
    while (src[j] && j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

// int main()
// {
//     char src[] = ", and good night world";
//     char dest[40] = "hello world";
//     printf("%s\n", ft_strncat(dest , src, 5));
//     printf("%s\n", strncat(dest , src, 5));
// }