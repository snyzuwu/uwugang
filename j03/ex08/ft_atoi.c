#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int res = 0;
    int sign = 1;
    int i = 0;

    if (str[i] > '9')
    {
        return (0);
    }

    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] <= '9' && str[i] >= '0')

    {

        res = res * 10 + str[i] - '0';
        ++i;
    }

    return (sign * res);
}

int main()
{
    int num;
    int atoiresult;

    num = ft_atoi("42");
    atoiresult = atoi("42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("-42");
    atoiresult = atoi("-42");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("0");
    atoiresult = atoi("0");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("coucou17");
    atoiresult = atoi("coucou17");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);

    num = ft_atoi("17qzdcoucou");
    atoiresult = atoi("17qzdcoucou");
    num == atoiresult
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '%d'\n", num, atoiresult);
}