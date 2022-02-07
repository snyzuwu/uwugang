#include <stdio.h>
#include <unistd.h>

char *ft_strrev(char *str)
{
    int i;
    int len;
    char temp;
    i = 0;
    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    len--;

    while (len > i)
    {

        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
        len--;
        i++;
    }
    return (str);
}

void main()
{
    char str[27];
    char *res;
    int i;

    str[0] = 'a';
    i = 1;
    while (str[i - 1] != 'z')
    {
        str[i] = str[i - 1] + 1;
        i++;
    }
    str[i] = 0;

    printf("%s\n", str);
    res = ft_strrev(str);
    printf("%s\n", res);
}