#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>

int	main(void)
{
	int		ret;
	char	*s;
	void	*ptr;
	void	*nullptr;

	s = NULL;
	ptr = &s;
	nullptr = NULL;
	// c
	// ret = ft_printf("- %ctoto%c   \n", 'i', 'i');
	// printf("\nprintf_ret c = %d\n\n", ret);
	// s
	// ret = ft_printf("- %s -  \n", s);
	// printf("- %s -  \n", s);
	// printf("\nprintf_ret s = %d\n", ret);
	// p
	// printf(" printf_ret p=%d\n", printf("%p", ptr));
	// printf(" ft_printf_ret p= %d\n", ft_printf("%p", ptr));
	// printf(" printf_ret p=%d\n", printf("%p", nullptr));
	// printf(" ft_printf_ret p= %d\n", ft_printf("%p", nullptr));
	// printf(" printf_ret p=%d\n", printf("%p", (void *)16));
	// printf(" ft_printf_ret p= %d\n", ft_printf("%p", (void *)16));
	// printf("printf_ret p=%d\n", printf("%p", (void *)LONG_MIN));
	// printf("ft_printf_ret p= %d\n", ft_printf("%p", (void *)LONG_MIN));
	//d
	// printf("printf_ret p=%d\n", printf("%d ", INT_MAX));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MAX));
	// printf("printf_ret p=%d\n", printf("%d ", INT_MIN));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MIN));
	// printf("printf_ret p=%d\n", printf("%d ", -1));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", -1));
	// printf("printf_ret p=%d\n", printf("%d ", LONG_MAX));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MAX));
	// printf("printf_ret p=%d\n", printf("%d ", LONG_MIN));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MIN));
	// printf("printf_ret p=%d\n", printf("%d ", UINT_MAX));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", UINT_MAX));
	// printf("printf_ret p=%d\n", printf("%d ", ULONG_MAX));
	// printf("ft_printf_ret p=%d\n", ft_printf("%d ", ULONG_MAX));
	//x
	printf("printf_ret p=%d\n", printf("%x ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", 0));
	printf("printf_ret p=%d\n", printf("%x ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%x ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", -1));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%x ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", ULONG_MAX));
	return (0);
}
