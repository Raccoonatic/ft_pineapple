/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-san- <lde-san-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 18:21:29 by lde-san-          #+#    #+#             */
/*   Updated: 2025/04/22 20:11:42 by lde-san-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int test_isalpha(int a, int *local);
int test_isdigit(int a, int *local);
int test_isalnum(int a, int *local);
int test_isascii(int a, int *local);
int test_isprint(int a, int *local);
int test_strlen(char *s, int *local);
int test_memset(void *s, size_t c, size_t n, int *local);
int test_bzero(void *s1, void *s2, size_t n, int *local);
int test_bzero_chad(void *input, size_t n, int *local);
int test_memcpy(const void *src, size_t n, int *local);

int	main(void)
{
	int sucs;
	int local;

	sucs = 0;
// ft_isalpha
	printf("\033[1mTesting ft_isalpha:\033[0m\n");
	local = 1;
	sucs += test_isalpha(0, &local);		 // 1
	sucs += test_isalpha(-1, &local);		 // 2
	sucs += test_isalpha(94, &local);		 // 3
	sucs += test_isalpha(128, &local);		 // 4
	sucs += test_isalpha(127, &local);		 // 5
	sucs += test_isalpha(35, &local);		 // 6
	sucs += test_isalpha(95, &local);		 // 7
	sucs += test_isalpha('!', &local);		 // 8
	sucs += test_isalpha('r', &local);		 // 9
	sucs += test_isalpha('H', &local);		 // 10
	sucs += test_isalpha(65, &local);		 // 11
	sucs += test_isalpha('\t', &local);		 // 12
	sucs += test_isalpha('\n', &local);		 // 13
	sucs += test_isalpha(55, &local);		 // 14
	sucs += test_isalpha(255, &local);		 // 15
	sucs += test_isalpha(100000, &local);		 // 16

// ft_isdigit
	printf("\033[1mTesting ft_isdigit:\033[0m\n");
	local = 1;
	sucs += test_isdigit(0, &local);		 // 1
	sucs += test_isdigit(-1, &local);		 // 2
	sucs += test_isdigit(94, &local);		 // 3
	sucs += test_isdigit(128, &local);		 // 4
	sucs += test_isdigit(127, &local);		 // 5
	sucs += test_isdigit(35, &local);		 // 6
	sucs += test_isdigit(95, &local);		 // 7
	sucs += test_isdigit('!', &local);		 // 8
	sucs += test_isdigit('r', &local);		 // 9
	sucs += test_isdigit('H', &local);		 // 10
	sucs += test_isdigit(65, &local);		 // 11
	sucs += test_isdigit('\t', &local);		 // 12
	sucs += test_isdigit('\n', &local);		 // 13
	sucs += test_isdigit(55, &local);		 // 14
	sucs += test_isdigit(255, &local);		 // 15
	sucs += test_isdigit(100000, &local);		 // 16

// ft_isdigit
	printf("\033[1mTesting ft_isalnum:\033[0m\n");
	local = 1;
	sucs += test_isalnum(0, &local);		 // 1
	sucs += test_isalnum(-1, &local);		 // 2
	sucs += test_isalnum(94, &local);		 // 3
	sucs += test_isalnum(128, &local);		 // 4
	sucs += test_isalnum(127, &local);		 // 5
	sucs += test_isalnum(35, &local);		 // 6
	sucs += test_isalnum(95, &local);		 // 7
	sucs += test_isalnum('!', &local);		 // 8
	sucs += test_isalnum('r', &local);		 // 9
	sucs += test_isalnum('H', &local);		 // 10
	sucs += test_isalnum(65, &local);		 // 11
	sucs += test_isalnum('\t', &local);		 // 12
	sucs += test_isalnum('\n', &local);		 // 13
	sucs += test_isalnum(55, &local);		 // 14
	sucs += test_isalnum(255, &local);		 // 15
	sucs += test_isalnum(99998, &local);		 // 16
	
// ft_isascii
	printf("\033[1mTesting ft_isascii:\033[0m\n");
	local = 1;
	sucs += test_isascii(0, &local);		 // 1
	sucs += test_isascii(-1, &local);		 // 2
	sucs += test_isascii(94, &local);		 // 3
	sucs += test_isascii(128, &local);		 // 4
	sucs += test_isascii(127, &local);		 // 5
	sucs += test_isascii(35, &local);		 // 6
	sucs += test_isascii(95, &local);		 // 7
	sucs += test_isascii('!', &local);		 // 8
	sucs += test_isascii('r', &local);		 // 9
	sucs += test_isascii('H', &local);		 // 10
	sucs += test_isascii(65, &local);		 // 11
	sucs += test_isascii('\t', &local);		 // 12
	sucs += test_isascii('\n', &local);		 // 13
	sucs += test_isascii(55, &local);		 // 14
	sucs += test_isascii(255, &local);		 // 15
	sucs += test_isascii(999999999, &local);		 // 16

// ft_isprint
	printf("\033[1mTesting ft_isprint:\033[0m\n");
	local = 1;
	sucs += test_isprint(0, &local);		 // 1
	sucs += test_isprint(-1, &local);		 // 2
	sucs += test_isprint(94, &local);		 // 3
	sucs += test_isprint(128, &local);		 // 4
	sucs += test_isprint(127, &local);		 // 5
	sucs += test_isprint(35, &local);		 // 6
	sucs += test_isprint(95, &local);		 // 7
	sucs += test_isprint('!', &local);		 // 8
	sucs += test_isprint('r', &local);		 // 9
	sucs += test_isprint('H', &local);		 // 10
	sucs += test_isprint(65, &local);		 // 11
	sucs += test_isprint('\t', &local);		 // 12
	sucs += test_isprint('\n', &local);		 // 13
	sucs += test_isprint(55, &local);		 // 14
	sucs += test_isprint(255, &local);		 // 15
	sucs += test_isprint(99997, &local);		 // 16

// ft_strlen
	printf("\033[1mTesting ft_strlen:\033[0m\n");
	local = 1;
	char bigboi[100000];
	memset(bigboi, 'a', 99999);
	bigboi[9999] = '\0';
	sucs += test_strlen(bigboi, &local);		 		// 1
	sucs += test_strlen("🦝", &local);		 		// 2
	sucs += test_strlen("¡Hola!", &local);		 		// 3
	sucs += test_strlen("\n", &local);				// 4
	sucs += test_strlen("\0", &local);		 		// 5
	sucs += test_strlen(" ", &local);		 		// 6
	sucs += test_strlen("", &local);		 		// 7
	sucs += test_strlen("hello", &local);		 		// 8
	sucs += test_strlen("1234567890", &local);		 	// 9
	sucs += test_strlen("                     ", &local);		// 10
	sucs += test_strlen("  &~!\%#*@&)#!@\'\'|-_+_+::;;  ", &local);	// 11
	sucs += test_strlen("     123  12 3 12  ", &local);		// 12
	sucs += test_strlen("-754674744446", &local);		 	// 13
	
// ft_memset
	printf("\033[1mTesting ft_memset:\033[0m\n");
	local = 1;
	int *num_full = calloc(42, sizeof(int));
	if(!num_full)
	{
		printf("\033[31m\tOops... num_full\033[0m\n");
		return(0);
	}
	int *num_empty = malloc(42 * sizeof(int));
	if(!num_empty)
	{
		printf("\033[31m\tOops... num_empty\033[0m\n");
		return(0);
	}
	char *char_full = calloc(42, sizeof(char));
	if(!char_full)
	{
		printf("\033[31m\tOops... char_full\033[0m\n");
		return(0);
	}
	char *char_empty = malloc(42 * sizeof(char));
	if(!char_empty)
	{
		printf("\033[31m\tOops... char_empty\033[0m\n");
		return(0);
	}
	int *bignum_full = calloc(242, sizeof(long));
	if(!bignum_full)
	{
		printf("\033[31m\tOops... bignum_full\033[0m\n");
		return(0);
	}
	int *bignum_empty = malloc(242 * sizeof(long));
	if(!bignum_empty)
	{
		printf("\033[31m\tOops... bignum_empty\033[0m\n");
		return(0);
	}
	int b = -0;

        sucs += test_memset(num_full, 42, 42, &local);                               	//1
        sucs += test_memset(num_full, 'A', 42, &local);                         	//2
        sucs += test_memset(num_full, 'A', 43, &local);                                	//3
        sucs += test_memset(num_full, 2147483647, 42, &local);                        	//4
        sucs += test_memset(num_full, -2147483648, 42, &local);                        	//5
        sucs += test_memset(num_full, 42, 43, &local);                                 	//6
        sucs += test_memset(num_full,4,0, &local);                                 	//7
        sucs += test_memset(num_full,97,7, &local);                                 	//8
        sucs += test_memset(num_full,b,9, &local);                                 	//9
        sucs += test_memset(num_full,b,b, &local);                                 	//10
        sucs += test_memset(num_empty, 42, 42, &local);                                	//11
        sucs += test_memset(num_empty, 'A', 42, &local);                        	//12
        sucs += test_memset(num_empty, 'A', 43, &local);                        	//13
        sucs += test_memset(num_empty, 2147483647, 42, &local);                        	//14
        sucs += test_memset(num_empty, -2147483648, 42, &local);                	//15
        sucs += test_memset(num_empty, 42, 43, &local);                                	//16
        sucs += test_memset(num_empty,4,0, &local);                                 	//17
        sucs += test_memset(num_empty,97,7, &local);                                 	//18
        sucs += test_memset(num_empty,b,9, &local);                                 	//19
        sucs += test_memset(num_empty,b,b, &local);                                 	//20
        sucs += test_memset(char_full, 42, 42, &local);                                	//21
        sucs += test_memset(char_full, 'A', 42, &local);                        	//22
        sucs += test_memset(char_full, 'A', 43, &local);                        	//23
        sucs += test_memset(char_full, 2147483647, 42, &local);                        	//24
        sucs += test_memset(char_full, -2147483648, 42, &local);                	//25
        sucs += test_memset(char_full, 42, 43, &local);                                	//26
        sucs += test_memset(char_full,4,0, &local);                                 	//27
        sucs += test_memset(char_full,97,7, &local);                                 	//28
        sucs += test_memset(char_full,b,9, &local);                         		//29
        sucs += test_memset(char_full,b,b, &local);                         		//30
        sucs += test_memset(char_empty, 42, 42, &local);                		//31
        sucs += test_memset(char_empty, 'A', 42, &local);                		//32
        sucs += test_memset(char_empty, 'A', 43, &local);                		//33
        sucs += test_memset(char_empty, 2147483647, 42, &local);        		//34	
        sucs += test_memset(char_empty, -2147483648, 42, &local);        		//35
        sucs += test_memset(char_empty, 42, 43, &local);                		//36
        sucs += test_memset(char_empty,4,0, &local);                         		//37
        sucs += test_memset(char_empty,97,7, &local);                         		//38
        sucs += test_memset(char_empty,b,9, &local);                         		//39
        sucs += test_memset(char_empty,b,b, &local);                         		//40
        sucs += test_memset(bignum_full, 2147483647, 42, &local);        		//43
        sucs += test_memset(bignum_full, -2147483648, 42, &local);        		//44
        sucs += test_memset(bignum_full, 42, 43, &local);                		//45
        sucs += test_memset(bignum_full,4,0, &local);                         		//46
        sucs += test_memset(bignum_full,97,7, &local);                         		//47
        sucs += test_memset(bignum_full,b,9, &local);                         		//48
        sucs += test_memset(bignum_full,b,b, &local);                         		//49
        sucs += test_memset(bignum_empty, 2147483647, 42, &local);        		//52
        sucs += test_memset(bignum_empty, -2147483648, 42, &local);        		//53
        sucs += test_memset(bignum_empty, 42, 43, &local);                		//54
        sucs += test_memset(bignum_empty,4,0, &local);                         		//55
        sucs += test_memset(bignum_empty,97,7, &local);                         	//56
        sucs += test_memset(bignum_empty,b,9, &local);                         		//57
        sucs += test_memset(bignum_empty,b,b, &local);                         		//58
        sucs += test_memset(bignum_empty,b,9, &local);                         		//59
        sucs += test_memset(bignum_empty,b,b, &local);                         		//60
	
	free(num_full);
	free(num_empty);
	free(char_full);
	free(char_empty);
	free(bignum_full);
	free(bignum_empty);

// ft_bzero
	printf("\033[1mTesting ft_bzero:\033[0m\n");
	local = 1;
int *num_full2 = calloc(42, sizeof(int));
if (!num_full2) {
    printf("\033[31m\tOops... num_full\033[0m\n");
    return (0);
}
int *num_full3 = calloc(42, sizeof(int));
if (!num_full3) {
    printf("\033[31m\tOops... num_full\033[0m\n");
    return (0);
}
int *num_empty2 = malloc(42 * sizeof(int));
if (!num_empty2) {
    printf("\033[31m\tOops... num_empty\033[0m\n");
    return (0);
}
int *num_empty3 = malloc(42 * sizeof(int));
if (!num_empty3) {
    printf("\033[31m\tOops... num_empty\033[0m\n");
    return (0);
}
char *char_full2 = calloc(42, sizeof(char));
if (!char_full2) {
    printf("\033[31m\tOops... char_full\033[0m\n");
    return (0);
}
char *char_empty2 = malloc(42 * sizeof(char));
if (!char_empty2) {
    printf("\033[31m\tOops... char_empty\033[0m\n");
    return (0);
}
char *char_full3 = calloc(42, sizeof(char));
if (!char_full3) {
    printf("\033[31m\tOops... char_full\033[0m\n");
    return (0);
}
char *char_empty3 = malloc(42 * sizeof(char));
if (!char_empty3) {
    printf("\033[31m\tOops... char_empty\033[0m\n");
    return (0);
}
	
/*1*/	sucs += test_bzero(num_full2, num_full3, 5, &local);
/*2*/	sucs += test_bzero(num_full2, num_full3, 1, &local);
/*3*/	sucs += test_bzero(num_full2, num_full3, 0, &local);
/*4*/	sucs += test_bzero(num_empty2, num_empty3, 5, &local);
/*5*/	sucs += test_bzero(num_empty2, num_empty3, 1, &local);
/*6*/	sucs += test_bzero(num_empty2, num_empty3, 0, &local);
/*7*/	sucs += test_bzero(char_full2, char_full3, 5, &local);
/*8*/	sucs += test_bzero(char_full2, char_full3, 1, &local);
/*9*/	sucs += test_bzero(char_full2, char_full3, 0, &local);
/*10*/	sucs += test_bzero(char_empty2, char_empty3, 5, &local);
/*11*/	sucs += test_bzero(char_empty2, char_empty3, 1, &local);
/*12*/	sucs += test_bzero(char_empty2, char_empty3, 0, &local);
	
memset(num_full2, 'z', 41);
memset(num_full3, 'z', 41);
memset(char_full2, 'z', 41);
memset(char_full3, 'z', 41);
memset(num_empty2, 'z', 41);
memset(num_empty3, 'z', 41);
memset(char_empty2, 'z', 41);
memset(char_empty3, 'z', 41);
/*13*/	sucs += test_bzero(num_full2, num_full3, 5, &local);
/*14*/	sucs += test_bzero(num_full2, num_full3, 1, &local);
/*15*/	sucs += test_bzero(num_full2, num_full3, 0, &local);
/*16*/	sucs += test_bzero(num_full2, num_full3, 'w', &local);
/*17*/	sucs += test_bzero(num_full2, num_full3, 5, &local);
/*18*/	sucs += test_bzero(num_full2, num_full3, 1, &local);
/*19*/	sucs += test_bzero(num_full2, num_full3, 0, &local);
/*20*/	sucs += test_bzero(num_empty2, num_empty3, 5, &local);
/*21*/	sucs += test_bzero(num_empty2, num_empty3, 1, &local);
/*22*/	sucs += test_bzero(num_empty2, num_empty3, 0, &local);
/*23*/	sucs += test_bzero(char_full2, char_full3, 5, &local);
/*24*/	sucs += test_bzero(char_full2, char_full3, 1, &local);
/*25*/	sucs += test_bzero(char_full2, char_full3, 0, &local);
/*26*/	sucs += test_bzero(char_empty2, char_empty3, 5, &local);
/*27*/	sucs += test_bzero(char_empty2, char_empty3, 1, &local);
/*28*/	sucs += test_bzero(char_empty2, char_empty3, 0, &local);

	free(num_full2);
	free(num_empty2);
	free(char_full2);
	free(char_empty2);
	free(num_full3);
	free(num_empty3);
	free(char_full3);
	free(char_empty3);
	
	// Test 29: Regular string
	char *str1 = strdup("qlq contigo chamita chama");
	sucs += test_bzero_chad(str1, 25, &local);
	free(str1);

	// Test 30: calloc-ed memory
	char *str2 = calloc(1, 10);
	memset(str2, 'A', 10);
	sucs += test_bzero_chad(str2, 10, &local);
	free(str2);

	// Test 31: Empty string
	char *str3 = strdup("");
	sucs += test_bzero_chad(str3, 0, &local);
	free(str3);

	// Test 32: Zero out part of a string
	char *str4 = strdup("Don't zero all");
	sucs += test_bzero_chad(str4, 5, &local);
	free(str4);

	// Test 33: Big buffer
	char *str5 = malloc(1000);
	memset(str5, 42, 1000);
	sucs += test_bzero_chad(str5, 1000, &local);
	free(str5);

	// Test 34: Null-ish input but n = 0
	char *str6 = NULL;
	sucs += test_bzero_chad(str6, 0, &local);
	
// ft_memcpy
	printf("\033[1mTesting ft_memcpy:\033[0m\n");
	local = 1;
	
	// Test 1: Regular string
	char *src1 = strdup("qlq contigo chamita chama");
	sucs += test_memcpy(src1, strlen(src1) + 1, &local);
	free(src1);

	// Test 2: Binary data
	char bin[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	sucs += test_memcpy(bin, sizeof(bin), &local);

	// Test 3: Empty buffer
	char *src3 = strdup("");
	sucs += test_memcpy(src3, 0, &local);
	free(src3);

	// Test 4: Big copy
	char *src4 = malloc(1000);
	memset(src4, 65, 1000);
	sucs += test_memcpy(src4, 1000, &local);
	free(src4);

	// Test 5: NULL src, n = 0 (valid edge case)
	char *src5 = NULL;
	sucs += test_memcpy(src5, 0, &local);
	

// After all tests	
	printf("\033[36mAll tests done!\nSuccessful tests: %d\033[0m\n", sucs);
	return(0);
}
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////    TESTS HERE    //////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

int test_memcpy(const void *src, size_t n, int *local)
{
	void *clone1 = malloc(n);
	void *clone2 = malloc(n);
	if (!clone1 || !clone2)
		return 0;

	memcpy(clone1, src, n);
	ft_memcpy(clone2, src, n);

	if (memcmp(clone1, clone2, n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		(*local)++;
		free(clone1);
		free(clone2);
		return 1;
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		(*local)++;
		printf("\t\tExpected: 0\n");
		printf("\t\tReceived: %d\n", memcmp(clone1, clone2, n));
		free(clone1);
		free(clone2);
		return 0;
	}
}

int test_bzero_chad(void *input, size_t n, int *local)
{
	void *s1 = malloc(n);
	void *s2 = malloc(n);
	if (!s1 || !s2)
		return 0;

	memcpy(s1, input, n);
	memcpy(s2, input, n);

	bzero(s1, n);
	ft_bzero(s2, n);

	if (memcmp(s1, s2, n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		(*local)++;
		free(s1);
		free(s2);
		return 1;
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		(*local)++;
		printf("\t\tExpected: 0\n");
		printf("\t\tReceived: %d\n", memcmp(s1, s2, n));
		free(s1);
		free(s2);
		return 0;
	}
}

int test_bzero(void *s1, void *s2, size_t n, int *local)
{
	bzero(s1,n);
	ft_bzero(s2,n);
	if(memcmp(s1, s2, n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
	        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
	        *local += 1;
	        printf("\t\tExpected: 0\n");
	        printf("\t\tReceived: %d\n", memcmp(s1, s2, n));	
	}
	return(0);
}
int test_memset(void *s, size_t c, size_t n, int *local)
{
	if(memcmp(memset(s,(int)c,n), ft_memset(s,(int)c,n), n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
	        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
	        *local += 1;
	        printf("\t\tExpected: 0\n");
	        printf("\t\tReceived: %d\n", memcmp(memset(s,(int)c,n), ft_memset(s,(int)c,n), n));	
	}
	return(0);
}

int test_strlen(char *s, int *local)
{
	if(strlen(s) == ft_strlen(s))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
	        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
	        *local += 1;
	        printf("\t\tExpected: %lu\n",strlen(s));
	        printf("\t\tReceived: %lu\n",ft_strlen(s));	
	}
	return(0);
}


int test_isprint(int a, int *local)
{
	if(isprint(a) == ft_isprint(a))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else if((isprint(a) != 0) && (ft_isprint(a) != 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
        *local += 1;
        printf("\t\tExpected: %d\n",isprint(a));
        printf("\t\tReceived: %d\n",ft_isprint(a));	
	}
	return(0);
}

int test_isascii(int a, int *local)
{
	if(isascii(a) == ft_isascii(a))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else if((isascii(a) != 0) && (ft_isascii(a) != 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
        *local += 1;
        printf("\t\tExpected: %d\n",isascii(a));
        printf("\t\tReceived: %d\n",ft_isascii(a));	
	}
	return(0);
}

int test_isalnum(int a, int *local)
{
	if(isalnum(a) == ft_isalnum(a))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else if((isalnum(a) != 0) && (ft_isalnum(a) != 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
        *local += 1;
        printf("\t\tExpected: %d\n",isalnum(a));
        printf("\t\tReceived: %d\n",ft_isalnum(a));	
	}
	return(0);
}

int test_isdigit(int a, int *local)
{
	if(isdigit(a) == ft_isdigit(a))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else if((isdigit(a) != 0) && (ft_isdigit(a) != 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
        *local += 1;
        printf("\t\tExpected: %d\n",isdigit(a));
        printf("\t\tReceived: %d\n",ft_isdigit(a));	
	}
	return(0);
}

int test_isalpha(int a, int *local)
{
	if(isalpha(a) == ft_isalpha(a))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else if((isalpha(a) != 0) && (ft_isalpha(a) != 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n",*local);
		*local += 1;
		return(1);
	}
	else
    	{
        printf("\033[31m\ttest %d: Cagaste\033[0m\n",*local);
        *local += 1;
        printf("\t\tExpected: %d\n",isalpha(a));
        printf("\t\tReceived: %d\n",ft_isalpha(a));	
	}
	return(0);
}
		
