/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 19:10:38 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/26 15:50:43 by mapache          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		counter;

	va_start(arg, format);
	counter = 0;
	while (*format)
	{
		if (*format == '%')
			racc_format_check(arg, *(++format), &counter);
		else
			racc_putchar(*format, &counter);
		format++;
	}
	va_end(arg);
	return (counter);
}

#include <limits.h>
#include <stdio.h>

int main(void)
{
	int a = 1;
	int ft = 0;
	int pc = 0;
	printf("\033[1;35;40m\t\tEPIC BATTLE!\033[0m\n");
	ft_printf("       \033[36mMapache 🦝\033[0m", NULL);
	printf("\033[1;35;40m    VS\033[0m");
	printf("    The PC 💻\n");
	printf("\033[1;35;40m\t\t  LET'S GO!\033[0m");
///////////// TEST 1 /////////////////
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" NULL %s NULL \n", NULL);	
	printf("\033[36mprintf: \033[0m\n");	
	pc = printf(" NULL %s NULL \n", NULL);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
///////////// TEST 2 /////////////////
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;

	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p \n", -1);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p \n", -1);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
///////////// TEST 3 /////////////////
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p \n", 1);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p \n", 1);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t\t✅\n");
	else
		printf("\t\t❌\n");
///////////// TEST 4 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p \n", 15);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p \n", 15);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t\t✅\n");
	else
		printf("\t\t❌\n");
///////////// TEST 5 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p \n", 16);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p \n", 16);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t\t✅\n");
	else
		printf("\t\t❌\n");
///////////// TEST 6 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p \n", 17);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p \n", 17);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t\t✅\n");
	else
		printf("\t\t❌\n");
///////////// TEST 7 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p %p \n", LONG_MIN, LONG_MAX);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
///////////// TEST 8 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p %p \n", INT_MIN, INT_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p %p \n", INT_MIN, INT_MAX);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
///////////// TEST 9 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
///////////// TEST 10 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p %p \n", 0, 0);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p %p \n", 0, 0);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 11 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf(" %p %d \n", 0, &a);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf(" %p %d \n", 0, &a);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");

///////////// TEST 12 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%d \n", INT_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%d \n", INT_MAX);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 13 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft_printf("Ay carajito. Tu como que");
	ft = ft_printf(" tienes %d%x%i%X pelos de tonto\n", 3.14);
	printf("\033[36mprintf: \033[0m\n");
	printf("Ay carajito. Tu como que");
	pc = printf(" tienes %d%x%i%X pelos de tonto\n", 3.14);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 14 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%x \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%x \n", 5315831358358);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 15 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%X \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%X \n", 5315831358358);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 16 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%u \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%u \n", 5315831358358);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");

///////////// TEST 17 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%d \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%d \n", 5315831358358);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 18 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%i \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%i \n", 5315831358358);
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 19 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%s \n", "5315831358358");
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%s \n", "5315831358358");
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t✅\n");
	else
		printf("\t❌\n");
		
///////////// TEST 20 /////////////////	
	printf("\n\033[1mTest %d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("%c \n", '5');
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("%c \n", '5');
	
	printf("\e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
		printf("\t\t✅\n");
	else
		printf("\t\t❌\n");
		
		


//////// AFTER ALL TESTS /////////
	printf("\n\n\033[1;35;40m\t\tLUIS WINS!\033[0m\n");
	printf("\e[3;36m Of course he wins, he always does. Even if\n");
	printf("there are errors, you are wining experience.\n");
	printf("            Keep it up buddy <3\n\e[0m");
	return(0);
}
