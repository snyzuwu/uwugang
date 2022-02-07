#include <stdio.h>
#include <unistd.h>

int ft_fibonacci(int index)
{
    if (index < 0)
    {
        return (-1);
    }
    if (index < 2)
    {
        return (index);
    }

    return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int main()
{
    int num;

    num = ft_fibonacci(0);
    num == 0
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '0'\n", num);

    num = ft_fibonacci(1);
    num == 1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '1'\n", num);

    num = ft_fibonacci(3);
    num == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '2'\n", num);

    num = ft_fibonacci(-42);
    num == -1
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '-1'\n", num);

    num = ft_fibonacci(12);
    num == 144
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\tnum: '%d', expected : '144'\n", num);
}