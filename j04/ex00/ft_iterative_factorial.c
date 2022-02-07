#include <unistd.h>
#include <stdio.h>

int ft_iterative_factorial(int nb)
{
    int res;
    int i;
    i = 1;
    res = 1;
    if (nb > 0)
    {
        while (i <= nb)
        {
            res = i * res;
            i++;
        }
        if (nb > 12)
        {
            return (0);
        }
    }
    if (nb < 0)
    {
        i = -1;
        res = -1;
        while (i >= nb)
        {
            res = i * res;
            i--;
        }
        if (nb < -12)
        {
            return (0);
        }
    }
    if (i == 0)
    {
        return (1);
    }
    return (res);
}

int main()
{
    printf("%d\n", ft_iterative_factorial(4));
    printf("%d\n", ft_iterative_factorial(42));
    printf("%d\n", ft_iterative_factorial(-4));
    printf("%d\n", ft_iterative_factorial(0));
    printf("%d\n", ft_iterative_factorial(1));
    printf("%d\n", ft_iterative_factorial(-1));
    return (0);
}