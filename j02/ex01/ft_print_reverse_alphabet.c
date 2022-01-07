#include <unistd.h>

int ft_putchar(char c)
{
    write(1,&c,1);
    return (0);
}

void ft_print_alphabet(void)
{
    char c;
    
    c = 'z';
    while (c >= 'a')
    {
        ft_putchar(c);
        c = c - 1;
    }
}

int  main()
{
    ft_print_alphabet();
    ft_putchar('\n');
    return (0);
}