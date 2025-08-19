int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    while (i < n && s1[i] == s2[i] && s1[i])
    {
        i++;
    }
    if (i == n)
    {
        return 0;
    }
    return  (unsigned char) s1[i]  -  (unsigned char) s2[i];
}

// int main()
// {
//     char s1[] = "he\200ll";
//     char s2[] = "hev\0loz";
//     printf("%i\n", ft_strncmp(s1 , s2 ,3));
//     printf("%i\n", strncmp(s1 , s2 ,3));
// }