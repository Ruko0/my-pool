int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] && s1[i] ==  s2[i])
    {
        i++;
    }
    return  (unsigned char)s1[i] -  (unsigned char)s2[i];
}

// int main()
// {
//     char s1[] = "hello worlz";
//     char s2[] = "hello worl\200";
//     printf("%i\n", ft_strcmp(s1, s2));
//     printf("%i\n", strcmp(s1, s2));
// }