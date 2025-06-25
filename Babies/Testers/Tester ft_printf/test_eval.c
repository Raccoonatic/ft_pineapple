/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 22:12:25 by lde-san-          #+#    #+#             */
/*   Updated: 2025/05/12 17:44:31 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <fcntl.h>
#include "ft_printf.h"

#define MINT	"\033[1;38;2;55;250;133m"
#define NEOR	"\033[3m\033[38;2;255;153;51m"
#define LIME	"\033[38;2;0;255;0m"
#define B_WI    "\033[1;37m"

int main(void)
{
	int a = 1;
	int ft = 0;
	int pc = 0;
	int succs = 0;
	
	printf("\t\033[1;35m\t\tEPIC BATTLE!\033[0m\n");
	ft_printf("\t       \033[36mMapache 🦝\033[0m", NULL);
	printf("\033[1;35m    VS\033[0m");
	printf("    The PC 💻\n");
	printf("\t\033[1;35m\t\t  LET'S GO!\033[0m");
///////////// TEST 1 /////////////////
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t     NULL %s NULL \n", NULL);	
	printf("\033[36mprintf: \033[0m\n");	
	pc = printf("\t\t     NULL %s NULL \n", NULL);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 2 /////////////////
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;

	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t        %p \n", -1);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t        %p \n", -1);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 3 /////////////////
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t\t    %p \n", 1);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t\t    %p \n", 1);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 4 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t\t    %p \n", 15);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t\t    %p \n", 15);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 5 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p \n", 16);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p \n", 16);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 6 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p \n", 17);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p \n", 17);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 7 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p %p \n", LONG_MIN, LONG_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p %p \n", LONG_MIN, LONG_MAX);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 8 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p %p \n", INT_MIN, INT_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p %p \n", INT_MIN, INT_MAX);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 9 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p %p \n", ULONG_MAX, -ULONG_MAX);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
///////////// TEST 10 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p %p \n", 0, 0);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p %p \n", 0, 0);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 11 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t %p %d \n", 0, &a);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t %p %d \n", 0, &a);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");

///////////// TEST 12 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%d \n", INT_MAX);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%d \n", INT_MAX);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 13 A/////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("Ay carajito. Tu como que tienes %d%x%i%X pelos de tonto\n", 3.14);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("Ay carajito. Tu como que tienes %d%x%i%X pelos de tonto\n", 3.14);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 13 B/////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft_printf("Ay carajito. Tu como que");
	ft = ft_printf(" tienes %d%x%i%X pelos de tonto\n", 9, 9, 9, 9);
	printf("\033[36mprintf: \033[0m\n");
	printf("Ay carajito. Tu como que");
	pc = printf(" tienes %d%x%i%X pelos de tonto\n", 9, 9, 9, 9);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 14 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%x \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%x \n", 5315831358358);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 15 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%X \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%X \n", 5315831358358);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 16 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%u \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%u \n", 5315831358358);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");

///////////// TEST 17 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%d \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%d \n", 5315831358358);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 18 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%i \n", 5315831358358);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%i \n", 5315831358358);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 19 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%s \n", "5315831358358");
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%s \n", "5315831358358");
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 20 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("\t\t%c \n", '5');
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("\t\t%c \n", '5');
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 21 /////////////////
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
    a++;

    int saved_stdout = dup(1);

    close(1);

    printf("\033[36mft_printf: \033[0m\n");
    ft = ft_printf(" NULL %s NULL \n", NULL);

    printf("\033[36mprintf: \033[0m\n");
    pc = printf(" NULL %s NULL \n", NULL);

    dup2(saved_stdout, 1);
    close(saved_stdout);

    printf("\n\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
    if (ft == pc)
{
	printf("\t✅\n");
	succs++;
}
    else
	printf("\t\t❌\n");

///////////// TEST 22 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("This: %x and This: %X should be negative numbers in hex\n", -2393569, -2393569);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("This: %x and This: %X should be negative numbers in hex\n", -2393569, -2393569);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");
		
///////////// TEST 23 /////////////////	
	printf("\n" B_WI "\t\t\tTest" NEOR " --> " B_WI "%d\033[0m\n", a);
	a++;
	
	printf("\033[36mft_printf: \033[0m\n");	
	ft = ft_printf("Asking for unsigned but giving signed? this happens: %u\n", -2147483699);
	printf("\033[36mprintf: \033[0m\n");
	pc = printf("Asking for unsigned but giving signed? this happens: %u\n", -2147483699);
	
	printf("\t  \e[38;5;208m 🦝 printed: %d || 💻 printed: %d\e[0m", ft, pc);
	if (ft == pc)
	{
		printf("\t✅\n");
		succs++;
	}
	else
		printf("\t\t❌\n");

//////// AFTER ALL TESTS /////////
	printf("\n\n\033[1;35m\t\t\tLUIS WINS!\033[0m\n");
	printf("\t\e[3;36m Of course he wins, he always does. Even if\n");
	printf("\tthere are errors, you are wining experience.\n");
	printf("\t            Keep it up buddy <3\n\e[0m");
	if (succs == 24)
		ft_printf("\n✅" MINT " Correct write size in " LIME "%d " MINT "tests out of " LIME "24" MINT " possible. Congrats!\e[0m\n", succs, succs);
	else
		ft_printf("\n❌\033[1;38;2;255;0;0m Correct write size in " NEOR "%d \033[1;38;2;255;0;0mtests out of " NEOR "24 \033[1;38;2;255;0;0mpossible. Check your code!\e[0m\n", succs);
	return(0);
}
