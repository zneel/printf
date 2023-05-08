#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>

int	main(void)
{
	int ret;
	char *s = NULL;
	void *ptr = &s;
    void *nullptr = NULL;
	// c
	ret = ft_printf("- %ctoto%c   \n", 'i', 'i');
	printf("\nprintf_ret c = %d\n\n", ret);
	// s
	ret = ft_printf("- %s -  \n", s);
	printf("- %s -  \n", s);
	printf("\nprintf_ret s = %d\n", ret);

	// p
	printf("printf_ret p=%d \n", printf("- %p - ", ptr));
	printf("ft_printf_ret p= %d\n", ft_printf("- %p - ", ptr));

	printf("printf_ret p=%d \n", printf("- %p - ", nullptr));
	printf("ft_printf_ret p= %d\n", ft_printf("- %p - ", nullptr));

    printf("printf_ret p=%d \n", printf("- %p - ", 16));
	printf("ft_printf_ret p= %d\n", ft_printf("- %p - ", 16));

        printf("printf_ret p=%d \n", printf("- %p - ", LONG_MIN));
	printf("ft_printf_ret p= %d\n", ft_printf("- %p - ", LONG_MIN));
	return (0);
}