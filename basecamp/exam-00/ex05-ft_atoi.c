int ft_is_digit(char c)
{
    return ('0' <= c && c <= '9');
}

int ft_digit_to_int(char c)
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
            number -= ft_digit_to_int(*str);
        else
            number += ft_digit_to_int(*str);
        ++str;
    }
    return (number);
}
