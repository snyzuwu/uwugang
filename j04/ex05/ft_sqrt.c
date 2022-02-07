#include <stdio.h>
#include <unistd.h>

int ft_sqrt(int nb)
{
    int i;
    int res;

    i = 1;
    res = 0;

    while (i < nb && i * i != nb)
    {
        res = i * i;
        i++;
    }
    if (res > nb)
    {
        return (0);
    }
    if (i > nb)
    {
        return (0);
    }
    return (i);
}

int main()
{
    int num;

    num = ft_sqrt(0);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(1);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);

    num = ft_sqrt(9);
    num == 3
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '3'\n", num);

    num = ft_sqrt(25);
    num == 5
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '5'\n", num);

    num = ft_sqrt(3);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(-42);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_sqrt(16);
    num == 4
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '4'\n", num);
    num = ft_sqrt(550183936);
    num == 23456
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '23456'\n", num);
}
