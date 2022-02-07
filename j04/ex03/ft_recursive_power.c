#include <stdio.h>
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
    if (power == 0)
    {
        return (1);
    }
    if (power < 0)
    {
        return (0);
    }
    else
        return (ft_recursive_power(nb, power - 1)) * nb;
}

int main()
{
    printf("%d\n", ft_recursive_power(4, 3));
    printf("%d\n", ft_recursive_power(-4, 3));
    printf("%d\n", ft_recursive_power(4, 0));
    printf("%d\n", ft_recursive_power(4, 1));
    printf("%d\n", ft_recursive_power(4, -4));
    return (0);
}