unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    i = 0;
    while (dest[i])
        i++;
    j = 0;    
    while (src[j] && j < size && i < size)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i);
}