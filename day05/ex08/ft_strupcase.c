char *ft_strupcase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] -= 32;
    }
    return str;
}
