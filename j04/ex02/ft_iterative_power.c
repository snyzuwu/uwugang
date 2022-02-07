#include <stdio.h>
#include <unistd.h>

int ft_iterative_power(int nb, int power)
{
    int i;
    int res;
    i = 1;
    res = 1;
    if (power < 0)
    {
        return (0);
    }

    while (i <= power)
    {
        res = (res * nb);
        i++;
        printf("i : %d\n", i);
    }
    return (res);
}

int main()
{
    printf("%d\n", ft_iterative_power(4, 3));
    printf("%d\n", ft_iterative_power(-4, 3));
    printf("%d\n", ft_iterative_power(4, 0));
    printf("%d\n", ft_iterative_power(4, 1));
    printf("%d\n", ft_iterative_power(4, -4));
    printf("%d\n", ft_iterative_power(4, -4));
    return (0);
}