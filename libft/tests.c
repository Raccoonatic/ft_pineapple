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
#include <string.h>

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
int test_memmove(void *dst1, void *dst2, const void *src1, const void *src2, size_t n, int *local);
int test_strlcpy(const char *src, size_t n, int *local);
size_t	mr_strlcpy(char *dst, const char *src, size_t size);
int test_strlcat(char *dst, const char *src, size_t size, int *local);
size_t	mr_strlcat(char *dst, const char *src, size_t size);
int test_toupper(int input, int *local);
int test_tolower(int input, int *local);
int test_strchr(const char *s, int c, int *local);
int test_strrchr(const char *s, int c, int *local);
int test_strncmp(const char *s1, const char *s2, size_t n, int *local);
int test_memchr(const void *s, int c, size_t n, int *local);
int test_memcmp(const void *s1, const void *s2, size_t n, int *local);
int test_strnstr(const char *haystack, const char *needle, size_t len, int *local);
char	*mr_strnstr(const char *big, const char *little, size_t len);
int test_atoi(const char *str, int *local);
int test_calloc(size_t count, size_t size, int *local);

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
	
// ft_memmove
	printf("\033[1mTesting ft_memmove:\033[0m\n");
	local = 1;

	char *src = calloc(52, sizeof(char));
	char *dst_std = calloc(42, sizeof(char));
	char *dst_ft = calloc(42, sizeof(char));

	if (!src || !dst_std || !dst_ft)
	{
		printf("\033[31m\tOops... Allocation problem\033[0m\n");
		return (0);
	}

	strcpy(src, "This is a totally normal thing that a human would say.");
	sucs += test_memmove(dst_std, dst_ft, src, src, 10, &local); // 	1

	strcpy(src, "Overlap test where src < dst.");
	sucs += test_memmove(src, src, src + 5, src + 5, 20, &local); //	2

	strcpy(src, "Overlap test where dst < src.");
	sucs += test_memmove(src + 5, src + 5, src, src, 20, &local); // 	3

	strcpy(src, "0 move.");
	sucs += test_memmove(dst_std, dst_ft, src, src, 0, &local); // 		4

	strcpy(src, "Ah MEeessed UP! STR with%^@&$ WieRDS CHar==2s");
	sucs += test_memmove(dst_std, dst_ft, src, src, 25, &local); // 	5

	strcpy(src, "Tiny");
	sucs += test_memmove(dst_std, dst_ft, src, src, 2, &local); // partial copy

	free(src);
	free(dst_std);
	free(dst_ft);
	
// ft_strlcpy
	printf("\033[1mTesting ft_strlcpy:\033[0m\n");
	local = 1;
	
	sucs += test_strlcpy("Qlq con qlq en mi rd", 20, &local);	// 1 exact size
	sucs += test_strlcpy("bby boi", 10, &local);			// 2 small src
	sucs += test_strlcpy("", 5, &local);				// 3 empty src
	sucs += test_strlcpy("This is a very long boi that should defo be truncated.", 20, &local); // 4 truncate
	sucs += test_strlcpy("Tiny", 0, &local);			// 5 n = 0
	sucs += test_strlcpy("Overflow?", 1, &local);			// 6 n = 1
	sucs += test_strlcpy("Negative Mindset", -1, &local);		// 7 n = -1 
	
// ft_strlcat
    printf("\033[1mTesting ft_strlcat:\033[0m\n");
    local = 1;

    // Test case 1: Normal concatenation
    char dest1a[14] = "Hello, ";
    char src1a[] = "world!";
    sucs += test_strlcat(dest1a, src1a, sizeof(dest1a), &local); // 1

    // Test case 2: Truncated concatenation (buffer too small)
    char dest2a[10] = "Hello, ";
    char src2a[] = "world!";
    sucs += test_strlcat(dest2a, src2a, sizeof(dest2a), &local); // 2

    // Test case 3: Empty source string
    char dest3a[8] = "Hello, ";
    char src3a[] = "";
    sucs += test_strlcat(dest3a, src3a, sizeof(dest3a), &local); // 3

    // Test case 4: Null termination check
    char dest4a[14] = "Hello, ";
    char src4a[] = "world!";
    sucs += test_strlcat(dest4a, src4a, sizeof(dest4a), &local); // 4

    // Test case 5: Overflow (buffer too small to fit the source and current content)
    char dest5a[6] = "Hello";
    char src5a[] = "world!";
    sucs += test_strlcat(dest5a, src5a, sizeof(dest5a), &local); // 5

// ft_toupper
	printf("\033[1mTesting ft_toupper:\033[0m\n");
	local = 1;
	sucs += test_toupper('a', &local);        // 1: basic lowercase
	sucs += test_toupper('z', &local);        // 2: end of lowercase
	sucs += test_toupper('A', &local);        // 3: already uppercase
	sucs += test_toupper('0', &local);        // 4: non-alpha
	sucs += test_toupper(2147483647, &local); // 5: int max
	sucs += test_toupper(-1, &local);  	  // 6: negative value
	sucs += test_toupper(128, &local);        // 7: beyond ASCII
	sucs += test_toupper(0, &local);          // 8: null char
	sucs += test_toupper(1, &local);          // 9: control char
	sucs += test_toupper('[', &local);        // 10: bracket

// ft_tolower
	printf("\033[1mTesting ft_tolower:\033[0m\n");
	local = 1;
	sucs += test_tolower('A', &local);   // 1: uppercase letter
	sucs += test_tolower('Z', &local);   // 2: uppercase edge
	sucs += test_tolower('M', &local);   // 3: middle uppercase
	sucs += test_tolower('a', &local);   // 4: already lowercase
	sucs += test_tolower('z', &local);   // 5: already lowercase edge
	sucs += test_tolower('0', &local);   // 6: digit
	sucs += test_tolower('!', &local);   // 7: punctuation
	sucs += test_tolower(' ', &local);   // 8: space
	sucs += test_tolower(-1, &local);    // 9: EOF
	sucs += test_tolower(-42, &local);   // 10: negative invalid input
	sucs += test_tolower(128, &local);   // 11: extended ASCII
	sucs += test_tolower(255, &local);   // 12: upper unsigned char limit
	sucs += test_tolower(0, &local);     // 13: null char

// ft_strchr
	printf("\033[1mTesting ft_strchr:\033[0m\n");
	local = 1;
	sucs += test_strchr("hello world", 'w', &local);      // 1: normal match
	sucs += test_strchr("hello world", 'l', &local);      // 2: multiple matches
	sucs += test_strchr("hello world", 'z', &local);      // 3: no match
	sucs += test_strchr("", 'a', &local);                 // 4: empty string
	sucs += test_strchr("42 Perritos sentaos", '4', &local);        // 5: match at start
	sucs += test_strchr("end\0hidden", '\0', &local);     // 6: null terminator
	sucs += test_strchr("abc", 0, &local);                // 7: explicit null
	sucs += test_strchr("ñandú", 163, &local);            // 8: non-ASCII char
	sucs += test_strchr("abc", -42, &local);              // 9: negative input
	sucs += test_strchr("abc", 256, &local);              // 10: out-of-range input

// ft_strrchr
	printf("\033[1mTesting ft_strrchr:\033[0m\n");
	local = 1;
	sucs += test_strrchr("hello world", 'w', &local);      // 1: normal match
	sucs += test_strrchr("hello world", 'l', &local);      // 2: multiple matches
	sucs += test_strrchr("hello world", 'z', &local);      // 3: no match
	sucs += test_strrchr("", 'a', &local);                 // 4: empty string
	sucs += test_strrchr("42 Perritos sentaos", '4', &local);        // 5: match at start
	sucs += test_strrchr("end\0hidden", '\0', &local);     // 6: null terminator
	sucs += test_strrchr("abc", 0, &local);                // 7: explicit null
	sucs += test_strrchr("ñandú", 163, &local);            // 8: non-ASCII char
	sucs += test_strrchr("abc", -42, &local);              // 9: negative input
	sucs += test_strrchr("abc", 256, &local);              // 10: out-of-range input

// ft_strncmp
    printf("\033[1mTesting ft_strncmp:\033[0m\n");
    local = 1;
    sucs += test_strncmp("hello", "hello", 5, &local); // 1
    sucs += test_strncmp("hello", "hellp", 5, &local); // 2
    sucs += test_strncmp("hell", "hello", 4, &local);   // 3
    sucs += test_strncmp("abc", "abcdef", 3, &local);   // 4
    sucs += test_strncmp("abc", "abc", -4, &local);      // 5
    sucs += test_strncmp("abc", "abz", 3, &local);      // 6
    sucs += test_strncmp("abcd", "abc", 4, &local);     // 7
    sucs += test_strncmp("abcd", "abcd", 4, &local);    // 8
    sucs += test_strncmp("hello", "hello", 0, &local);  // 9
    sucs += test_strncmp("test", "TEST", 4, &local);  // 10

// ft_memchr
    printf("\033[1mTesting ft_memchr:\033[0m\n");
    local = 1;
    sucs += test_memchr("hello", 'e', 5, &local); 	// 1
    sucs += test_memchr("hello", 'l', 5, &local);   	// 2
    sucs += test_memchr("hello", 'o', 5, &local);     	// 3
    sucs += test_memchr("abcdef", 'a', 6, &local); 	// 4
    sucs += test_memchr("abcdef", 'd', 6, &local);   	// 5
    sucs += test_memchr("abcdef", 'z', 6, &local);    	// 6 (not found case)
    sucs += test_memchr("hello", 'l', 2, &local);     	// 7
    sucs += test_memchr("12345", '3', 5, &local);    	// 8
    sucs += test_memchr("hello", 'e', 1, &local);    	// 9
    sucs += test_memchr("hello", 'o', 5, &local);     	// 10

// ft_memcmp
    printf("\033[1mTesting ft_memcmp:\033[0m\n");
    local = 1;
    sucs += test_memcmp("hello", "hello", 5, &local);   // 1
    sucs += test_memcmp("hello", "hella", 5, &local);    // 2
    sucs += test_memcmp("abcdef", "abcdef", 6, &local);  // 3
    sucs += test_memcmp("abcd", "abce", 4, &local);    // 4
    sucs += test_memcmp("abc", "abcd", 3, &local);     // 5
    sucs += test_memcmp("abcd", "abdc", 4, &local);     // 6
    sucs += test_memcmp("12345", "12346", 5, &local);  // 7
    sucs += test_memcmp("123", "124", 3, &local);     // 8
    sucs += test_memcmp("abcd", "abcc", 4, &local);     // 9
    sucs += test_memcmp("hello", "hell", 4, &local);    // 10

// ft_strnstr
    printf("\033[1mTesting ft_strnstr:\033[0m\n");
    local = 1;
    sucs += test_strnstr("Hello, world!", "world", 13, &local);   // 1
    sucs += test_strnstr("Hello, world!", "abc", 13, &local);       // 2
    sucs += test_strnstr("abcdef", "cd", 6, &local);                // 3
    sucs += test_strnstr("abcdef", "bc", 3, &local);                // 4
    sucs += test_strnstr("abcdef", "def", 3, &local);               // 5
    sucs += test_strnstr("abcdef", "f", 3, &local);                 // 6
    sucs += test_strnstr("abcdef", "f", 6, &local);                  // 7
    sucs += test_strnstr("abcdef", "abc", 3, &local);              // 8
    sucs += test_strnstr("abcdef", "abcdef", 6, &local);        // 9
    sucs += test_strnstr("abcdef", "z", 6, &local);                 // 10

// ft_atoi
	printf("\033[1mTesting ft_atoi:\033[0m\n");
	local = 1;
	sucs += test_atoi("42", &local);                 	// 1
	sucs += test_atoi("   -42", &local);             	// 2
	sucs += test_atoi("4193 with words", &local);    	// 3
	sucs += test_atoi("words and 987", &local);      	// 4
	sucs += test_atoi("-91283472332", &local);       	// 5
	sucs += test_atoi("+2147483647", &local);        	// 6
	sucs += test_atoi("-2147483648", &local);        	// 7
	sucs += test_atoi("00000000123", &local);        	// 8
	sucs += test_atoi("  +000", &local);             	// 9
	sucs += test_atoi("  -0000042abc", &local);      	//10
	sucs += test_atoi("", &local);                   	//11
	sucs += test_atoi("   \t\n\r\v\f123", &local);    	//12

// ft_calloc
	printf("\033[1mTesting ft_calloc:\033[0m\n");
	local = 1;
	sucs += test_calloc(10, sizeof(int), &local);     // 1
	sucs += test_calloc(0, 1, &local);                // 2
	sucs += test_calloc(1, 0, &local);                // 3
	sucs += test_calloc(0, 0, &local);                // 4
	sucs += test_calloc(100, 100, &local);            // 5
	sucs += test_calloc(1, 1, &local);                // 6
	sucs += test_calloc(50, sizeof(char), &local);    // 7
	sucs += test_calloc(5, sizeof(long), &local);     // 8


// After all tests
	printf("\033[36mAll tests done!\nSuccessful tests: %d\033[0m\n", sucs);
	return(0);
}
//////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////    TESTS HERE    //////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////

int test_calloc(size_t count, size_t size, int *local)
{
	void *expected = calloc(count, size);
	void *result = ft_calloc(count, size);
	int match = 1;

	if (!expected || !result)
		match = (expected == result);
	else
		match = !memcmp(expected, result, count);

	if (match)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tCount: %zu, Size: %zu\n", count, size);
	}
	free(expected);
	free(result);
	*local += 1;
	return (match);
}


int test_atoi(const char *str, int *local)
{
	int expected = atoi(str);
	int result = ft_atoi(str);
	if (expected == result)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tInput: \"%s\"\n", str);
		printf("\t\tExpected: %d\n", expected);
		printf("\t\tReceived: %d\n", result);
		*local += 1;
		return (0);
	}
}

char	*mr_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return ((char *)big);
	i = 0;
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big[i + j] != '\0' && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (0);
}

int test_strnstr(const char *haystack, const char *needle, size_t len, int *local)
{
    char *result = mr_strnstr(haystack, needle, len);
    char *ft_result = ft_strnstr(haystack, needle, len);

    if ((result == NULL && ft_result == NULL) || (strcmp(result, ft_result) == 0))
    {
        printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
        *local += 1;
        return 1;
    }
    else
    {
        printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
        *local += 1;
        printf("\t\tExpected: %s\n", result ? result : "NULL");
        printf("\t\tReceived: %s\n", ft_result ? ft_result : "NULL");
    }
    return 0;
}

int test_memcmp(const void *s1, const void *s2, size_t n, int *local)
{
    int expected = memcmp(s1, s2, n);
    int result = ft_memcmp(s1, s2, n);
    
    if (result == expected)
    {
        printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
        *local += 1;
        return 1;
    }
    else
    {
        printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
        *local += 1;
        printf("\t\tExpected: %d\n", expected);
        printf("\t\tReceived: %d\n", result);
    }
    return 0;
}

int test_memchr(const void *s, int c, size_t n, int *local)
{
    void *result = memchr(s, c, n);
    void *expected = ft_memchr(s, c, n);
    
    if (result == expected)
    {
        printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
        *local += 1;
        return 1;
    }
    else
    {
        printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
        *local += 1;
        printf("\t\tExpected: %p\n", expected);
        printf("\t\tReceived: %p\n", result);
    }
    return 0;
}

int test_strncmp(const char *s1, const char *s2, size_t n, int *local)
{
    int expected = strncmp(s1, s2, n);
    int result = strncmp(s1, s2, n);
    
    if (result == expected)
    {
        printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
        *local += 1;
        return (1);
    }
    else
    {
        printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
        *local += 1;
        printf("\t\tExpected: %d\n", expected);
        printf("\t\tReceived: %d\n", result);
    }
    return (0);
}

int test_strrchr(const char *s, int c, int *local)
{
	char *std = strrchr(s, c);
	char *mine = ft_strrchr(s, c);

	if (std == mine || (std && mine && strcmp(std, mine) == 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tInput: \"%s\", char: '%c' (%d)\n", s, (c >= 32 && c <= 126) ? c : '.', c);
		printf("\t\tExpected: \"%s\"\n", std ? std : "NULL");
		printf("\t\tReceived: \"%s\"\n", mine ? mine : "NULL");
		*local += 1;
		return (0);
	}
}


int test_strchr(const char *s, int c, int *local)
{
	char *std = strchr(s, c);
	char *mine = ft_strchr(s, c);

	if (std == mine || (std && mine && strcmp(std, mine) == 0))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tInput: \"%s\", char: '%c' (%d)\n", s, (c >= 32 && c <= 126) ? c : '.', c);
		printf("\t\tExpected: \"%s\"\n", std ? std : "NULL");
		printf("\t\tReceived: \"%s\"\n", mine ? mine : "NULL");
		*local += 1;
		return (0);
	}
}

int test_tolower(int input, int *local)
{
	int std = tolower((unsigned char)input);
	int mine = ft_tolower((unsigned char)input);

	if (mine == std)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tInput: %d ('%c')\n", input, (input >= 32 && input <= 126) ? input : '.');
		printf("\t\tExpected: %d\n", std);
		printf("\t\tReceived: %d\n", mine);
		*local += 1;
		return (0);
	}
}

int test_toupper(int input, int *local)
{
	if (ft_toupper(input) == toupper(input))
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tInput: %d ('%c')\n", input, (input >= 32 && input <= 126) ? input : '.');
		printf("\t\tExpected: %d\n", toupper(input));
		printf("\t\tReceived: %d\n", ft_toupper(input));
		*local += 1;
		return (0);
	}
}

size_t	mr_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_size;
	size_t	src_size;
	size_t	space_left;

	i = 0;
	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	if (size <= dst_size)
		return (size + src_size);
	space_left = size - dst_size - 1;
	while (i < (space_left) && src[i])
	{
		dst[dst_size + i] = src[i];
		i++;
	}
	dst[dst_size + i] = '\0';
	return (dst_size + src_size);
}

int test_strlcat(char *dst, const char *src, size_t size, int *local)
{
    char *dst_clone = strdup((const char *)dst);
    size_t res = mr_strlcat(dst, src, size);
    size_t ft_res = ft_strlcat(dst_clone, src, size);

    if (res == ft_res && strcmp(dst, dst_clone) == 0)
    {
        printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
        *local += 1;
        free(dst_clone);
        return (1);
    }
    else
    {
        printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
        *local += 1;
        printf("\t\tExpected: %zu, \"%s\"\n", res, dst);
        printf("\t\tReceived: %zu, \"%s\"\n", ft_res, dst_clone);
    }
    free(dst_clone);
    return (0);
}

size_t	mr_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	i = 0;
	src_size = ft_strlen(src);
	if (!dst || !src)
		return (0);
	if (size == 0)
		return (src_size);
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

int test_strlcpy(const char *src, size_t n, int *local)
{
	char vessel1[100];
	char vessel2[100];

	memset(vessel1, 'o', 100);
	memset(vessel2, 'o', 100);

	size_t vessel1_len = mr_strlcpy(vessel1, src, n);
	size_t vessel2_len = ft_strlcpy(vessel2, src, n);

	if (memcmp(vessel1, vessel2, 100) == 0 && vessel1_len == vessel2_len)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		printf("\t\tExpected length: %zu\n", vessel1_len);
		printf("\t\tReceived length: %zu\n", vessel2_len);
		printf("\t\tExpected string: %s\n", vessel1);
		printf("\t\tReceived string: %s\n", vessel2);
		*local += 1;
		return (0);
	}
}

int test_memmove(void *dst1, void *dst2, const void *src1, const void *src2, size_t n, int *local)
{
	if (memcmp(memmove(dst1, src1, n), ft_memmove(dst2, src2, n), n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		(*local)++;
		return (1);
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		(*local)++;
		printf("\t\tExpected: 0\n");
		printf("\t\tReceived: %d\n", memcmp(memmove(dst1, src1, n), ft_memmove(dst2, src2, n), n));
	}
	printf("%s\n", (char *)memmove(dst1, src1, n));
	printf("%s\n", (char *)ft_memmove(dst2, src2, n));
	return (0);
}

int test_memcpy(const void *src, size_t n, int *local)
{
	void *clone1 = malloc(n);
	void *clone2 = malloc(n);
	if (!clone1 || !clone2)
	{
		printf("\033[31m\tOops... Allocation problem\033[0m\n");
		return (0);
	}
	memcpy(clone1, src, n);
	ft_memcpy(clone2, src, n);

	if (memcmp(clone1, clone2, n) == 0)
	{
		printf("\033[32m\ttest %d: Todo fino\033[0m\n", *local);
		*local += 1;
		free(clone1);
		free(clone2);
		return 1;
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		*local += 1;
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
		*local += 1;
		free(s1);
		free(s2);
		return 1;
	}
	else
	{
		printf("\033[31m\ttest %d: Cagaste\033[0m\n", *local);
		*local += 1;
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
		
