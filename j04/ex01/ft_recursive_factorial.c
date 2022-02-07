#include <unistd.h>
#include <stdio.h>

int ft_recursive_factorial(int nb)

{
    if (nb > 12)
    {
        return (0);
    }
    if (nb < -12)
    {
        return (0);
    }
    if (nb == 0)
    {
        return (1);
    }
    else
        return (nb * ft_recursive_factorial(nb - 1));
}
int main()
{
    printf("%d\n", ft_recursive_factorial(4));
    printf("%d\n", ft_recursive_factorial(42));
    printf("%d\n", ft_recursive_factorial(-4));
    printf("%d\n", ft_recursive_factorial(0));
    printf("%d\n", ft_recursive_factorial(1));
    printf("%d\n", ft_recursive_factorial(-1));
    return (0);
}