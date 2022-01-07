#include <unistd.h>

int ft_putchar(int i)
{
    write(1,&i,1);
    return (0);
}

void ft_print_numbers(void)
{
    int i;

    i = '0';
    while (i <= '9')
    {
        ft_putchar(i);
        i = i + 1;
    }
}

int  main()
{
    ft_print_numbers();
    ft_putchar('\n');
    return (0);
}