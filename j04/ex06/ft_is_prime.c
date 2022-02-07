#include <stdio.h>
#include <unistd.h>

int ft_is_prime(int nb)
{
    
    int i;
    i = 2;
    if (nb < 2)
    {
        return (0);
    }
    while (i < nb)
    {
        if (nb % i == 0)
        {
            return(0);
        }
        i++;
    }
    return(1);
}

int main()
{
    int num;

    num = ft_is_prime(0);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(1);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(2);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
    num = ft_is_prime(3);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
    num = ft_is_prime(9);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(25);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(3);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);

    num = ft_is_prime(-42);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_is_prime(16);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(550136);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);
    num = ft_is_prime(257);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);
}