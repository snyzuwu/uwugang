#include <unistd.h>
#include <stdio.h>

int ft_putchar(char c)
{
    write(1,&c,1);
    return (0);
}

void ft_ultimate_div_mod(int *a, int *b)

{
    int c;
    
        //a = 12, b = 8, c = undefined
        c = *a / *b;   
        //a = 12,b = 8, c = 1
        *b = *a % *b;
        //a =
        *a = c;

}

int main()
{
    int a;
    int b;

    a = 12;
    b = 8;
    printf("test1 : a = 12, b = 8\n");
    ft_ultimate_div_mod(&a, &b);
    a == 1 && b == 4
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected : '1'\n\tb: '%d', expected: '4'\n", a, b);
    
    a = 42;
    b = 5;
    printf("test1 : a = 42, b = 5\n");
    ft_ultimate_div_mod(&a, &b);
    a == 8 && b == 2
        ? printf("✔️ Correct\n")
        : printf("❌ Wrong\n\ta: '%d', expected : '8'\n\tb: '%d', expected: '2'\n", a, b);
}