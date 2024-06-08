#include <unistd.h>

void    putchar(char c)
{
        write (1, &c, 1);
}

void    print_comb(int i, int n, int nb [])
{
        int     max;
        int     digit;

        while (i > 0)
        {
                max = 10;
                i = 0;
                while (i < n)
                {
                        putchar(nb[i] + 48);
                        i++;
                }
                //i = n;
                while (i--)
                {
                        digit = nb[i];
                        if (digit < --max)
                        {
                                while (i < n)
                                        nb[i++] = ++digit;
                                write (1, ", ", 2);
                                break ;
                        }
                }
        }
}

void    ft_print_combn(int n)
{
        int     nb[9];
        int     i;

        if (n > 0 && n < 10)
        {
                i = 0;
                while (i < n)
                {
                        nb[i] = i;
                        i++;
                }
                print_comb(i, n, nb);
        }
}

int     main(void)
{
        ft_print_combn(9);
}

