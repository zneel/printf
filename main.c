#include "ft_printf.h"
#include <limits.h>
#include <stdarg.h>
#include <stdio.h>
#define RESET "\x1B[0m"
#define RED "\x1B[31m"
#define GREEN "\x1B[32m"
#define YELLOW "\x1B[33m"
#define BLUE "\x1B[34m"
#define MAGENTA "\x1B[35m"
#define CYAN "\x1B[36m"
#define WHITE "\x1B[37m"

int main(void)
{
	char *s;
	void *ptr;
	void *nullptr;

	s = NULL;
	ptr = &s;
	nullptr = NULL;

	// dumb check
	printf("Idiot check NULL\n");
	printf("printf_ret p=%d\n", printf(NULL));
	printf("ft_printf_ret p=%d\n", ft_printf(NULL));

	// c
	printf("PRINTING percent c\n");
	printf("printf_ret p=%d\n", printf("%c ", 0));
	printf("ft_printf_ret p=%d\n", ft_printf("%c ", 0));
	printf("printf_ret p=%d\n", printf("%c ", 'b'));
	printf("ft_printf_ret p=%d\n", ft_printf("%c ", 'b'));
	printf("============================================================================\n");
	// s
	printf("PRINTING percent s\n");
	printf("printf_ret p=%d\n", printf("%s ", "string1"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", "string1"));
	printf("printf_ret p=%d\n", printf("%s ", nullptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", nullptr));
	printf("printf_ret p=%d\n", printf("%s ", "😀😀😀😀"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ", "😀😀😀😀"));
	printf("printf_ret p=%d\n", printf("%s ",
									   "QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("ft_printf_ret p=%d\n", ft_printf("%s ",
											 "QWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKEQWLEKLQWJJELQWKE"));
	printf("============================================================================\n");
	// p
	printf("PRINTING percent p\n");
	printf("printf_ret p=%d\n", printf("%p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", ptr));
	printf("printf_ret p=%d\n", printf("%p ", nullptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", nullptr));
	printf("printf_ret p=%d\n", printf("%p ", (void *)16));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", (void *)16));
	printf("printf_ret p=%d\n", printf("%p ", (void *)LONG_MIN));
	printf("ft_printf_ret p=%d\n", ft_printf("%p ", (void *)LONG_MIN));
	printf("============================================================================\n");
	// d
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
	// i
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
	// x
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
	// X
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

	printf("PRINTING simple flags for C\n");
	// pre padding
	printf("printf_ret p=%d\n", printf("%10c ", 'a'));
	printf("ft_printf_ret p=%d\n", ft_printf("%10c ", 'a'));
	// post padding
	printf("printf_ret p=%d\n", printf("%-10c ", 'a'));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10c ", 'a'));

	printf("PRINTING simple flags for S\n");
	// pre padding
	printf("printf_ret p=%d\n", printf("%10s ", "Hello"));
	printf("ft_printf_ret p=%d\n", ft_printf("%10s ", "Hello"));
	// post padding
	printf("printf_ret p=%d\n", printf("%-10s ", "Hello"));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10s ", "Hello"));

	printf("PRINTING simple flags for p\n");
	// pre-padding
	printf("printf_ret p=%d\n", printf("%20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%20p ", ptr));
	// post-padding
	printf("printf_ret p=%d\n", printf("%-20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("%-20p ", ptr));

	printf("PRINTING simple flags for d\n");
	// pre-padding
	printf("printf_ret p=%d\n", printf("%10d ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%10d ", 42));
	// post-padding
	printf("printf_ret p=%d\n", printf("%-10d ", 42));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10d ", 42));

	printf("PRINTING simple flags for i\n");
	// pre-padding
	printf("printf_ret p=%d\n", printf("%10i ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%10i ", -42));
	// post-padding
	printf("printf_ret p=%d\n", printf("%-10i ", -42));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10i ", -42));

	printf("PRINTING simple flags for x\n");
	// pre-padding
	printf("printf_ret p=%d\n", printf("%10x ", 255));
	printf("ft_printf_ret p=%d\n", ft_printf("%10x ", 255));
	// post-padding
	printf("printf_ret p=%d\n", printf("%-10x ", 255));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10x ", 255));

	printf("PRINTING simple flags for X\n");
	// pre-padding
	printf("printf_ret p=%d\n", printf("%10X ", 255));
	printf("ft_printf_ret p=%d\n", ft_printf("%10X ", 255));
	// post-padding
	printf("printf_ret p=%d\n", printf("%-10X ", 255));
	printf("ft_printf_ret p=%d\n", ft_printf("%-10X ", 255));

	printf("============================================================================\n");
	printf(GREEN "ADVANCED: PRINTING Flags and Precision\n" RESET);

	// Conversions: %c, %s, %p, %d, %i, %u, %x, %X, %%
	char ch = 'A';
	char *str = "Vegeta the best";
	int dec = 42;
	unsigned int udec = 42;
	int hex = 255;

	printf(RED "Combinaison of flags with conversions:\n" RESET);

	// %c
	printf("printf_ret c=%d\n", printf("1. %-10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("1. %-10c ", ch));
	printf("printf_ret c=%d\n", printf("2. %010c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("2. %010c ", ch));
	printf("printf_ret c=%d\n", printf("3. %#-10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("3. %#-10c ", ch));
	printf("printf_ret c=%d\n", printf("4. %+10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("4. %+10c ", ch));
	printf("printf_ret c=%d\n", printf("5. % -10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("5. % -10c ", ch));
	printf("printf_ret c=%d\n", printf("6. %-.10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("6. %-.10c ", ch));
	printf("printf_ret c=%d\n", printf("7. %010.5c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("7. %010.5c ", ch));
	printf("printf_ret c=%d\n", printf("8. %#-.10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("8. %#-.10c ", ch));
	printf("printf_ret c=%d\n", printf("9. %+.10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("9. %+.10c ", ch));
	printf("printf_ret c=%d\n", printf("10. % -.10c ", ch));
	printf("ft_printf_ret c=%d\n", ft_printf("10. % -.10c ", ch));
	printf("============================================================================\n");

	// %s
	printf("printf_ret s=%d\n", printf("1. %-20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("1. %-20s ", str));
	printf("printf_ret s=%d\n", printf("2. %020s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("2. %020s ", str));
	printf("printf_ret s=%d\n", printf("3. %#-20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("3. %#-20s ", str));
	printf("printf_ret s=%d\n", printf("4. %+20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("4. %+20s ", str));
	printf("printf_ret s=%d\n", printf("5. % -20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("5. % -20s ", str));
	printf("printf_ret s=%d\n", printf("6. %-.20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("6. %-.20s ", str));
	printf("printf_ret s=%d\n", printf("7. %020.10s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("7. %020.10s ", str));
	printf("printf_ret s=%d\n", printf("8. %#-.20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("8. %#-.20s ", str));
	printf("printf_ret s=%d\n", printf("9. %+.20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("9. %+.20s ", str));
	printf("printf_ret s=%d\n", printf("10. % -.20s ", str));
	printf("ft_printf_ret s=%d\n", ft_printf("10. % -.20s ", str));
	printf("============================================================================\n");

	// %p
	printf("printf_ret p=%d\n", printf("1. %-20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("1. %-20p ", ptr));
	printf("printf_ret p=%d\n", printf("2. %020p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("2. %020p ", ptr));
	printf("printf_ret p=%d\n", printf("3. %#-20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("3. %#-20p ", ptr));
	printf("printf_ret p=%d\n", printf("4. %+20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("4. %+20p ", ptr));
	printf("printf_ret p=%d\n", printf("5. % -20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("5. % -20p ", ptr));
	printf("printf_ret p=%d\n", printf("6. %-.20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("6. %-.20p ", ptr));
	printf("printf_ret p=%d\n", printf("7. %020.10p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("7. %020.10p ", ptr));
	printf("printf_ret p=%d\n", printf("8. %#-.20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("8. %#-.20p ", ptr));
	printf("printf_ret p=%d\n", printf("9. %+.20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("9. %+.20p ", ptr));
	printf("printf_ret p=%d\n", printf("10. % -.20p ", ptr));
	printf("ft_printf_ret p=%d\n", ft_printf("10. % -.20p ", ptr));

	printf("============================================================================\n");
	// %d, %i
	printf("printf_ret di=%d\n", printf("1. %-10d ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("1. %-10d ", dec));
	printf("printf_ret di=%d\n", printf("2. %010d ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("2. %010d ", dec));
	printf("printf_ret di=%d\n", printf("3. %#-10d ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("3. %#-10d ", dec));
	printf("printf_ret di=%d\n", printf("4. %+10d ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("4. %+10d ", dec));
	printf("printf_ret di=%d\n", printf("5. % -10d ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("5. % -10d ", dec));
	printf("printf_ret di=%d\n", printf("6. %-10.di ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("6. %-10.di ", dec));
	printf("printf_ret di=%d\n", printf("7. %010.di ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("7. %010.di ", dec));
	printf("printf_ret di=%d\n", printf("8. %#-10.di ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("8. %#-10.di ", dec));
	printf("printf_ret di=%d\n", printf("9. %+10.di ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("9. %+10.di ", dec));
	printf("printf_ret di=%d\n", printf("10. % -10.di ", dec));
	printf("ft_printf_ret di=%d\n", ft_printf("10. % -10.di ", dec));
	printf("============================================================================\n");

	// %u
	printf("printf_ret u=%d\n", printf("1. %-10u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("1. %-10u ", udec));
	printf("printf_ret u=%d\n", printf("2. %010u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("2. %010u ", udec));
	printf("printf_ret u=%d\n", printf("3. %#-10u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("3. %#-10u ", udec));
	printf("printf_ret u=%d\n", printf("4. %+10u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("4. %+10u ", udec));
	printf("printf_ret u=%d\n", printf("5. % -10u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("5. % -10u ", udec));
	printf("printf_ret u=%d\n", printf("6. %-10.5u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("6. %-10.5u ", udec));
	printf("printf_ret u=%d\n", printf("7. %010.5u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("7. %010.5u ", udec));
	printf("printf_ret u=%d\n", printf("8. %#-10.5u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("8. %#-10.5u ", udec));
	printf("printf_ret u=%d\n", printf("9. %+10.5u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("9. %+10.5u ", udec));
	printf("printf_ret u=%d\n", printf("10. % -10.5u ", udec));
	printf("ft_printf_ret u=%d\n", ft_printf("10. % -10.5u ", udec));

	printf("============================================================================\n");
	// %x
	printf("printf_ret x=%d\n", printf("1. %-10x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("1. %-10x ", hex));
	printf("printf_ret x=%d\n", printf("2. %010x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("2. %010x ", hex));
	printf("printf_ret x=%d\n", printf("3. %#-10x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("3. %#-10x ", hex));
	printf("printf_ret x=%d\n", printf("4. %+10x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("4. %+10x ", hex));
	printf("printf_ret x=%d\n", printf("5. % -10x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("5. % -10x ", hex));
	printf("printf_ret x=%d\n", printf("6. %-10.x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("6. %-10.x ", hex));
	printf("printf_ret x=%d\n", printf("7. %010.x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("7. %010.x ", hex));
	printf("printf_ret x=%d\n", printf("8. %#-10.x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("8. %#-10.x ", hex));
	printf("printf_ret x=%d\n", printf("9. %+10.x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("9. %+10.x ", hex));
	printf("printf_ret x=%d\n", printf("10. % -10.x ", hex));
	printf("ft_printf_ret x=%d\n", ft_printf("10. % -10.x ", hex));
	printf("============================================================================\n");

	// %X
	printf("printf_ret X=%d\n", printf("1. %-10X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("1. %-10X ", hex));
	printf("printf_ret X=%d\n", printf("2. %010X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("2. %010X ", hex));
	printf("printf_ret X=%d\n", printf("3. %#-10X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("3. %#-10X ", hex));
	printf("printf_ret X=%d\n", printf("4. %+10X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("4. %+10X ", hex));
	printf("printf_ret X=%d\n", printf("5. % -10X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("5. % -10X ", hex));
	printf("printf_ret X=%d\n", printf("6. %.3X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("6. %.3X ", hex));
	printf("printf_ret X=%d\n", printf("7. %#.5X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("7. %#.5X ", hex));
	printf("printf_ret X=%d\n", printf("8. %10.2X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("8. %10.2X ", hex));
	printf("printf_ret X=%d\n", printf("9. %-15.8X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("9. %-15.8X ", hex));
	printf("printf_ret X=%d\n", printf("10. %+06.4X ", hex));
	printf("ft_printf_ret X=%d\n", ft_printf("10. %+06.4X ", hex));

	// %%
	printf("printf_ret %%=%d\n", printf("%% "));
	printf("ft_printf_ret %%=%d\n", ft_printf("%% "));
	printf("============================================================================\n");

	return (0);
}
