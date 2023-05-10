#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"
#define WHITE "\033[37m"

int	main(void)
{
	char	*s;
	void	*ptr;
	void	*nullptr;

	s = NULL;
	ptr = &s;
	nullptr = NULL;
	// c
	printf("PRINTING percent c\n");
	printf(" printf_ret p=%d\n", printf("%c ", 0));
	printf(" ft_printf_ret p= %d\n", ft_printf("%c ", 0));
	printf(" printf_ret p=%d\n", printf("%c ", 'b'));
	printf(" ft_printf_ret p= %d\n", ft_printf("%c ", 'b'));
	printf("============================================================================\n");
	// s
	printf("PRINTING percent s\n");
	printf(" printf_ret p=%d\n", printf("%s ", "string1"));
	printf(" ft_printf_ret p= %d\n", ft_printf("%s ", "string1"));
	printf(" printf_ret p=%d\n", printf("%s ", nullptr));
	printf(" ft_printf_ret p= %d\n", ft_printf("%s ", nullptr));
	printf(" printf_ret p=%d\n", printf("%s ", "😀😀😀😀"));
	printf(" ft_printf_ret p= %d\n", ft_printf("%s ", "😀😀😀😀"));
	printf("printf_ret p=%d\n", printf("%s ",
				"QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("ft_printf_ret p= %d\n", ft_printf("%s ",
				"QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("============================================================================\n");
	// p
	printf("PRINTING percent p\n");
	printf(" printf_ret p=%d\n", printf("%p ", ptr));
	printf(" ft_printf_ret p= %d\n", ft_printf("%p ", ptr));
	printf(" printf_ret p=%d\n", printf("%p ", nullptr));
	printf(" ft_printf_ret p= %d\n", ft_printf("%p ", nullptr));
	printf(" printf_ret p=%d\n", printf("%p ", (void *)16));
	printf(" ft_printf_ret p= %d\n", ft_printf("%p ", (void *)16));
	printf("printf_ret p=%d\n", printf("%p ", (void *)LONG_MIN));
	printf("ft_printf_ret p= %d\n", ft_printf("%p ", (void *)LONG_MIN));
	printf("============================================================================\n");
	//d
	printf("PRINTING percent d\n");
	printf("printf_ret p=%d\n", printf("%d ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", 42));
	printf("printf_ret p=%d\n", printf("%d ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", -42));
	printf("printf_ret p=%d\n", printf("%d ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%d ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%d ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", -1));
	printf("printf_ret p=%d\n", printf("%d ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", 0));
	printf("printf_ret p=%d\n", printf("%d ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%d ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%d ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%d ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%d ", ULONG_MAX));
	printf("============================================================================\n");
	//i
	printf("PRINTING percent i\n");
	printf("printf_ret p=%d\n", printf("%i ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", 42));
	printf("printf_ret p=%d\n", printf("%i ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", -42));
	printf("printf_ret p=%d\n", printf("%i ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%i ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%i ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", -1));
	printf("printf_ret p=%d\n", printf("%i ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", 0));
	printf("printf_ret p=%d\n", printf("%i ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%i ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%i ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%i ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%i ", ULONG_MAX));
	printf("============================================================================\n");
	//x
	printf("PRINTING percent x\n");
	printf("printf_ret p=%d\n", printf("%x ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", 42));
	printf("printf_ret p=%d\n", printf("%x ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", -42));
	printf("printf_ret p=%d\n", printf("%x ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%x ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", -1));
	printf("printf_ret p=%d\n", printf("%x ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", 0));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%x ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%x ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%x ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%x ", ULONG_MAX));
	printf("============================================================================\n");
	//X
	printf("PRINTING percent X\n");
	printf("printf_ret p=%d\n", printf("%X ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", 42));
	printf("printf_ret p=%d\n", printf("%X ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", -42));
	printf("printf_ret p=%d\n", printf("%X ", INT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", INT_MAX));
	printf("printf_ret p=%d\n", printf("%X ", INT_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", INT_MIN));
	printf("printf_ret p=%d\n", printf("%X ", -1));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", -1));
	printf("printf_ret p=%d\n", printf("%X ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", 0));
	printf("printf_ret p=%d\n", printf("%X ", LONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", LONG_MAX));
	printf("printf_ret p=%d\n", printf("%X ", LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", LONG_MIN));
	printf("printf_ret p=%d\n", printf("%X ", UINT_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", UINT_MAX));
	printf("printf_ret p=%d\n", printf("%X ", ULONG_MAX));
	printf("ft_printf_ret p=%d\n", ft_printf("%X ", ULONG_MAX));
	printf("============================================================================\n");
	printf(GREEN "PRINTING Flags and Precision\n" RESET);
    // Left justify (-) and width with negative precision
    printf(RED "Left justify (-) and width with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%-10.*d ", -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("%-10.*d ", -5, 42));

    // Plus sign (+) with negative precision
    printf(YELLOW "Plus sign (+) with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%+.*d ", -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("%+.*d ", -5, 42));

    // Space (' ') with negative precision
    printf(BLUE "Space (' ') with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("% .*d ", -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("% .*d ", -5, 42));

    // Alternate form (#) with negative precision
    printf(MAGENTA "Alternate form (#) with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%#.*x ", -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("%#.*x ", -5, 42));

    // Zero-padding (0), width, and negative precision
    printf(CYAN "Zero-padding (0), width, and negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%0*.*d ", 10, -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("%0*.*d ", 10, -5, 42));

    // Precision (.) for integers with negative precision
    printf(WHITE "Precision (.) for integers with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%.*d ", -5, 42));
    printf("ft_printf_ret p=%d\n", ft_printf("%.*d ", -5, 42));

    // Precision (.) for strings with negative precision
    printf(RED "Precision (.) for strings with negative precision:\n" RESET);
    printf("printf_ret p=%d\n", printf("%.*s ", -5, "Hello, world!"));
    printf("ft_printf_ret p=%d\n", ft_printf("%.*s ", -5, "Hello, world!"));

	// Combination of flags, width, and negative precision
	printf(YELLOW "Combination of flags, width, and negative precision:\n" RESET);
	printf("printf_ret p=%d\n", printf("%+0*.*d ", 10, -5, 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%+0*.*d ", 10, -5, 42));
	printf("============================================================================\n");
	return (0);
}
