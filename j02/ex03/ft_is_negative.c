#include <unistd.h>

int ft_putchar(int i)
{
    write(1,&i,1);
    return (0);
}

void ft_is_negative(int n);
{
    int n;

    n = 'N';
    while (n < '0')
    {
        ft_putchar(n);
        n = n - 1;
    }
}

int  main()
{
    ft_is_negative();
    ft_putchar('\n');
    return (0);
}