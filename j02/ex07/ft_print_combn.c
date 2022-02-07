#include <stdio.h>
#include <unistd.h>

int ft_putchar(char c)
{
    write(1, &c, 1);
    return (0);
}

void ft_print_combn(int n);


int main()
{
    ft_print_combn(5);
    ft_putchar('\n');
    return(0);
}