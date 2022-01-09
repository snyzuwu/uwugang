#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1,&c,1);
    return (0);
}

void ft_ft(int *nbr)
{
    *nbr = 42;
}

int  main()
{  
    int nbr;

    nbr = 0;
    printf("%d\n",nbr);
    ft_ft(&nbr);
    printf("%d\n",nbr);
    return (0);
}