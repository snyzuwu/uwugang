#include <unistd.h>

int ft_putchar(char c)
{
    write(1,&c,1);
    return (0);
}

void ft_print_comb(void)
{
    char a;
    char b;
    char c;
    a = '0';
    b = '1';
    c = '2';
        while (a <= '7')
        {
            while (b <= '8')
            {
                while (c <= '9')
                {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                if (a == '7')
                return;
                ft_putchar(',');
                ft_putchar(' ');
                c++;
                }
            b++;
            c = b + 1;
            }
        a++;
        b = a + 1;
        c = b + 1;
        }
}

int  main()
{
    ft_print_comb();
    ft_putchar('\n');
    return (0);
}