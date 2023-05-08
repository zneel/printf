#include "ft_printf.h"
#include <stdio.h>

int main()
{
    char c = 'i';
    printf("printf_ret=%d", ft_printf("%c", c));
    return 0;
}