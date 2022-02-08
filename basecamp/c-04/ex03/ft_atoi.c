#include <stdio.h>

int ft_is_digit(char c)
{
    return ('0' <= c && c <= '9');
}

int ft_isdigit(char c)
{
    return (c - 48);
}

int ft_atoi(char *str)
{
    int number;
    int is_negative;

    number = 0;
    while (*str == ' ')
    {
        ++str;
    }
    is_negative = *str == '-';
    if (is_negative || *str == '+')
        ++str;
    while (*str)
    {
        if (!ft_is_digit(*str))
            break ;
        number *= 10;
        if (is_negative)
            number -= ft_isdigit(*str);
        else
            number += ft_isdigit(*str);
        ++str;
    }
    return (number);
}

void    main(void)
{
    char    str[11] = "-2147483648";
    int     num;

    num = ft_atoi(str);
    printf("%d\n", num);
}
