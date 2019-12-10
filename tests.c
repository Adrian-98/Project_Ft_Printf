/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amunoz-p <amunoz-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:55:04 by amunoz-p          #+#    #+#             */
/*   Updated: 2019/12/10 14:38:23 by amunoz-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "printf_bonus.h"


int main()
{
	int	*s;

	s = NULL;
	write(1, "\n\n--- Integer Test ---\n\n", 24);
	//ft_printf("\n[%n]\n", 25);
	printf("\nFlag %%n\n");
	printf("\nprintf:[%n]\n", s);
	ft_printf("\nft_printf:[%n]\n", s);
	printf("\nFlag %%#\n");
	printf("\nprintf:con x [%#x]\n", 166);
	ft_printf("\nft_printf:con x[%#x]\n", 166);
		printf("\nprintf:con X[%#X]\n", 166);
	ft_printf("\nft_printf:con X[%#X]\n", 166);
	printf("\nFlag %%space\n");
	printf("\nprintf:[%  d]\n", 155);
	ft_printf("\nft_printf:[%  d]\n", 155);
	printf("\nFlag %%+\n");
	printf("\nprintf:[%+d]\n", 16);
	ft_printf("\nft_printf:[%+d]\n", 16);
	//ft_printf("\nla mia: %i\n", -2147483648);
	/*ft_printf("----\n");
	printf("printf *.*i (8, 8, 234):     [%*.*i]\n", 8, 8, 234);
	ft_printf("ft_printf *.*i (8, 8, 234):  [%*.*i]\n", 8, 8, 234);
	ft_printf("----\n");"%-05");
	printf("printf *.*i (8, 10, -234):     [%*.*i]\n", 8, 10, -234);
	ft_printf("ft_printf *.*i (8, 10, -234):  [%*.*i]\n", 8, 10, -234);
	ft_printf("----\n");
	printf("printf *.*i (-10, 8, -234):    [%*.*i]\n", -10, 8, -234);
	ft_printf("ft_printf *.*i (-10, 8, -234): [%*.*i]\n", -10, 8, -234);
	ft_printf("----\n");
	printf("printf *.*i (-10, 8, 234):    [%*.*i]\n", -10, 8, 234);
	ft_printf("ft_printf *.*i (-10, 8, 234): [%*.*i]\n", -10, 8, 234);
	ft_printf("----\n");
	printf("printf *.*i (8, -10, -234):    [%*.*i]\n", 8, -10, -234);
	ft_printf("ft_printf *.*i (8, -10, -234): [%*.*i]\n", 8, -10, -234);
	ft_printf("----\n");
	printf("printf *.*i (8, 0, -234):      [%*.*i]\n", 8, 0, -234);
	ft_printf("ft_printf *.*i (8, 0, -234):   [%*.*i]\n", 8, 0, -234);
	ft_printf("----\n");
	printf("printf *.*i (8, 1, -234):      [%*.*i]\n", 8, 1, -234);
	ft_printf("ft_printf *.*i (8, 1, -234):   [%*.*i]\n", 8, 1, -234);
	ft_printf("----\n");
	printf("printf *.10i (2, -234):        [%*.10i]\n", 2, -234);
	ft_printf("ft_printf *.10i (2, -234):     [%*.10i]\n", 2, -234);
	ft_printf("----\n");
	printf("printf 10.10i (-234):         [%10.10i]\n", -234);
	ft_printf("ft_printf 10.10i (-234):      [%10.10i]\n", -234);
	ft_printf("----\n");
	printf("printf 10i (-234):         [%10i]\n", -234);
	ft_printf("ft_printf 10i (-234):      [%10i]\n", -234);
	ft_printf("----\n");
	ft_printf("----\n");
	printf("printf .10i (-34):         [%.10i]\n", 234);
	ft_printf("ft_printf .10i (234):      [%.10i]\n", 234);
	ft_printf("----\n");
	printf("printf 10.*i (7, -1526):    [%10.*i]\n", 7, -1526);
	ft_printf("ft_printf 10.*i (7, -1526): [%10.*i]\n", 7, -1526);
	ft_printf("----\n");
	printf("printf -10.*i (7, -1526):    [%-10.*i]\n", 7, -1526);
	ft_printf("ft_printf -10.*i (7, -1526): [%-10.*i]\n", 7, -1526);
	ft_printf("----\n");
	printf("printf -*.*i (10, 7, -1526):    [%-*.*i]\n", 10, 7, -1526);
	ft_printf("ft_printf -*.*i (10, 7, -1526): [%-*.*i]\n", 10, 7, -1526);
	ft_printf("----\n");*/
	return (0);
}
/*int main()
{
	char *str;
	int *null;
	str = "hey muy buenas";
	null = NULL;
	ft_printf("\n\n---Memory Test---\n\n");
	printf("[  printf ] Puntero nulo %%p (null): [%p]\n", null);
	ft_printf("[ft_printf] Puntero nulo %%p (null): [%p]\n", null);
	ft_printf("char *str;\nint *null;\n\nstr = \"hey muy buenas\";\nnull = NULL;");
	ft_printf("\n");
	printf("[  printf ] Puntero %%p (str): [%p]\n", str);
	ft_printf("[ft_printf] Puntero %%p (str): [%p]\n", str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%p (&str): [%p]\n", &str);
	ft_printf("[ft_printf] Puntero a puntero %%p (&str): [%p]\n", &str);
	ft_printf("\n");
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (15, str): [%*p]\n",15, str);
	ft_printf("[ft_printf] Puntero %%*p (15, str): [%*p]\n",15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (15, null): [%*p]\n", 15, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (15, null): [%*p]\n", 15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (4, str): [%*p]\n",4, str);
	ft_printf("[ft_printf] Puntero %%*p (4, str): [%*p]\n",4, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (2, null): [%*p]\n", 2, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (2, null): [%*p]\n", 2, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (-15, str): [%*p]\n",-15, str);
	ft_printf("[ft_printf] Puntero %%*p (-15, str): [%*p]\n",-15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%.*p (15, str): [%.*p](?)\n",15, str);
	ft_printf("[ft_printf] Puntero %%.*p (15, str): [%.*p](?)\n",15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null);
	ft_printf("[ft_printf] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str);
	ft_printf("[ft_printf] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null);
	ft_printf("[ft_printf] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null);
	ft_printf("\n");
	return (0);
}

int main()
{
	write(1, "\n\n--- String-Char Test ---\n\n", 28);
	ft_printf("\n");
	printf("[  printf ] %%s (\"hola\"):  [%s]\n", "hola");
	ft_printf("[ft_printf] %%s (\"hola\"):  [%s]\n", "hola");
	ft_printf("\n");
	printf("[  printf ] %%c (\'c\'):  [%c](?)\n",'c');
	ft_printf("[ft_printf] %%c (\'c\'):  [%c](?)\n",'c');
	ft_printf("\n");
	printf("[  printf ] %%*.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola");
	ft_printf("[ft_printf] %%*.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola");
	ft_printf("\n");
	//
	printf("[  printf ] %%*.*c (8, 8, \'c\'):  [%*.*c](?)\n", 8, 8, 'c');//CASO EXTRAÑO
	ft_printf("[ft_printf] %%*.*c (8, 8, \'c\'):  [%*.*c](?)\n", 8, 8, 'c');//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("[  printf ] %%*.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola");
	ft_printf("[ft_printf] %%*.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola");
	ft_printf("\n");
	printf("[  printf ] %%*.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola");
	ft_printf("[ft_printf] %%*.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola");
	ft_printf("\n");
	//
	printf("[  printf ] %%*.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c');//CASO EXTRAÑO
	ft_printf("[ft_printf] %%*.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c');//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("[  printf ] %%*.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola");
	ft_printf("[ft_printf] %%*.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola");
	ft_printf("\n");
	printf("[  printf ] %%*.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola");
	ft_printf("[ft_printf] %%*.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola");
	ft_printf("\n");
	printf("[  printf ] %%*.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola");
	ft_printf("[ft_printf] %%*.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola");
	ft_printf("\n");
	printf("[  printf ] %%*.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola");
	ft_printf("[ft_printf] %%*.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola");
	ft_printf("\n");
	printf("[  printf ] %%10.10s (\"hola\"):      [%10.10s]\n", "hola");
	ft_printf("[ft_printf] %%10.10s (\"hola\"):      [%10.10s]\n", "hola");
	ft_printf("\n");
	printf("[  printf ] %%10s (\"hola\"):      [%10s]\n", "hola");
	ft_printf("[ft_printf] %%10s (\"hola\"):      [%10s]\n", "hola");
	ft_printf("\n");
	printf("[  printf ] %%.10s (\"hola\"):      [%.10s]\n", "hola");
	ft_printf("[ft_printf] %%.10s (\"hola\"):      [%.10s]\n", "hola");
	ft_printf("\n");
	//
	printf("[  printf ] %%.10c (\'c\'):      [%.10c](?)\n", 'c');//CASO EXTRAÑO
	ft_printf("[ft_printf] %%.10c (\'c\'):      [%.10c](?)\n", 'c');//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("[  printf ] %%10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal");
	ft_printf("[ft_printf] %%10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal");
	ft_printf("\n");
	printf("[  printf ] %%.-7s (\"hola que tal\"):    [%.*s]\n", -7, "hola que tal");
	ft_printf("[ft_printf] %%.-7s (\"hola que tal\"):    [%.*s]\n", -7, "hola que tal");
	ft_printf("\n");
	return (0);
}*/
/*int main()
{
	char *str;
	int *null;
	str = "hey muy buenas";
	null = NULL;
	ft_printf("\n\n---Test---\n\n");
	ft_printf("char *str;\nint *null;\n\nstr = \"hey muy buenas\";\nnull = NULL;");
	ft_printf("\n");
	printf("[  printf ] Puntero %%p (str): [%p]\n", str);
	ft_printf("[ft_printf] Puntero %%p (str): [%p]\n", str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%p (&str): [%p]\n", &str);
	ft_printf("[ft_printf] Puntero a puntero %%p (&str): [%p]\n", &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%p (null): [%p]\n", null);
	ft_printf("[ft_printf] Puntero nulo %%p (null): [%p]\n", null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (15, str): [%*p]\n",15, str);
	ft_printf("[ft_printf] Puntero %%*p (15, str): [%*p]\n",15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (15, null): [%*p]\n", 15, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (15, null): [%*p]\n", 15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (4, str): [%*p]\n",4, str);
	ft_printf("[ft_printf] Puntero %%*p (4, str): [%*p]\n",4, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (2, null): [%*p]\n", 2, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (2, null): [%*p]\n", 2, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%*p (-15, str): [%*p]\n",-15, str);
	ft_printf("[ft_printf] Puntero %%*p (-15, str): [%*p]\n",-15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null);
	ft_printf("[ft_printf] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%.*p (15, str): [%.*p](?)\n",15, str);
	ft_printf("[ft_printf] Puntero %%.*p (15, str): [%.*p](?)\n",15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null);
	ft_printf("[ft_printf] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null);
	ft_printf("\n");
	printf("[  printf ] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str);
	ft_printf("[ft_printf] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str);
	ft_printf("\n");
	printf("[  printf ] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str);
	ft_printf("[ft_printf] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str);
	ft_printf("\n");
	printf("[  printf ] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null);
	ft_printf("[ft_printf] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null);
	ft_printf("\n");
	return (0);
}*/
/*int main()
{
	write(1, "\n\n--- HEXA- 'x'-Test ---\n\n", 28);
	printf("printf *.*x (9, 9, -234):     [%*.*x]\n", 9, 9, -234);
	ft_printf("ft_printf *.*x (9, 9, -234):   [%*.*x]\n", 9, 9, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 8, 234):     [%*.*x]\n", 8, 8, 234);
	ft_printf("ft_printf *.*x (8, 8, 234):  [%*.*x]\n", 8, 8, 234);
	ft_printf("----\n");
	printf("printf *.*x (8, 10, -234):     [%*.*x]\n", 9, 10, -234);
	ft_printf("ft_printf *.*x (8, 10, -234):  [%*.*x]\n", 9, 10, -234);
	ft_printf("----\n");
	printf("printf *.*x (-10, 8, -234):    [%*.*x]\n", -10, 9, -234);
	ft_printf("ft_printf *.*x (-10, 8, -234): [%*.*x]\n", -10, 9, -234);
	ft_printf("----\n");
	printf("printf *.*x (-10, 8, -234):    [%*.*x]\n", -10, 9, 234);
	ft_printf("ft_printf *.*x (-10, 8, -234): [%*.*x]\n", -10, 9, 234);
	ft_printf("----\n");
	printf("printf *.*x (8, -10, -234):    [%*.*x]\n", 9, -10, -234);
	ft_printf("ft_printf *.*x (8, -10, -234): [%*.*x]\n", 9, -10, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 0, -234):      [%*.*x]\n", 9, 0, -234);
	ft_printf("ft_printf *.*x (8, 0, -234):   [%*.*x]\n", 9, 0, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 1, -234):      [%*.*x]\n", 9, 1, -234);
	ft_printf("ft_printf *.*x (8, 1, -234):   [%*.*x]\n", 9, 1, -234);
	ft_printf("----\n");
	printf("printf *.10x (2, -234):        [%*.10x]\n", 2, -234);
	ft_printf("ft_printf *.10x (2, -234):     [%*.10x]\n", 2, -234);
	ft_printf("----\n");
	printf("printf 10.10x (-234):         [%10.10x]\n", -234);
	ft_printf("ft_printf 10.10x (-234):      [%10.10x]\n", -234);
	ft_printf("----\n");
	printf("printf 10x (-234):         [%10x]\n", -234);
	ft_printf("ft_printf 10x (-234):      [%10x]\n", -234);
	ft_printf("----\n");
	printf("printf .10x (-234):         [%.10x]\n", -234);
	ft_printf("ft_printf .10x (-234):      [%.10x]\n", -234);
	ft_printf("----\n");
	printf("printf .10x (-34):         [%.10x]\n", 234);
	ft_printf("ft_printf .10x (234):      [%.10x]\n", 234);
	ft_printf("----\n");
	printf("printf 10.*x (7, -1526):    [%10.*x]\n", 7, -1526);
	ft_printf("ft_printf 10.*x (7, -1526): [%10.*x]\n", 7, -1526);
	ft_printf("----\n");
	return (0);
}*/

/*int main() 
{
	write(1, "\n\n--- String-Char Test ---\n\n", 28);
    printf("[  printf ] *.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola");
    ft_printf("[ft_printf] *.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola");
    ft_printf("\n");
    printf("[  printf ] *.*s (8, 8, c):  [%*.*c](?)\n", 8, 8, 'c');
    ft_printf("[ft_printf] *.*s (8, 8, c):  [%*.*c](?)\n", 8, 8, 'c');
    ft_printf("\n");
    printf("[  printf ] *.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola");
    ft_printf("[ft_printf] *.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola");
    ft_printf("\n");
    printf("[  printf ] *.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola");
    ft_printf("[ft_printf] *.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola");
    ft_printf("\n");
    printf("[  printf ] *.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c');
    ft_printf("[ft_printf] *.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c');
    ft_printf("\n");
    printf("[  printf ] *.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola");
    ft_printf("[ft_printf] *.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola");
    ft_printf("\n");
    printf("[  printf ] *.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola");
    ft_printf("[ft_printf] *.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola");
    ft_printf("\n");
    printf("[  printf ] *.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola");
    ft_printf("[ft_printf] *.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola");
    ft_printf("\n");
    printf("[  printf ] *.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola");
    ft_printf("[ft_printf] *.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola");
    ft_printf("\n");
    printf("[  printf ] 10.10s (\"hola\"):      [%10.10s]\n", "hola");
    ft_printf("[ft_printf] 10.10s (\"hola\"):      [%10.10s]\n", "hola");
    ft_printf("\n");
    printf("[  printf ] 10s (\"hola\"):      [%10s]\n", "hola");
    ft_printf("[ft_printf] 10s (\"hola\"):      [%10s]\n", "hola");
    ft_printf("\n");
    printf("[  printf ] .10s (\"hola\"):      [%.10s]\n", "hola");
    ft_printf("[ft_printf] .10s (\"hola\"):      [%.10s]\n", "hola");
    ft_printf("\n");
    printf("[  printf ] .10c (\'c\'):      [%.10c](?)\n", 'c');
    ft_printf("[ft_printf] .10c (\'c\'):      [%.10c](?)\n", 'c');
    ft_printf("\n");
    printf("[  printf ] 10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal");
    ft_printf("[ft_printf] 10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal");
    ft_printf("\n");
    printf("[  printf ] -10.*s (7, \"hola que tal\"):    [%-10.*s]\n", 7, "hola que tal");
    ft_printf("[ft_printf] -10.*s (7, \"hola que tal\"):    [%-10.*s]\n", 7, "hola que tal");
    ft_printf("\n");
	ft_printf("%%");
	return (0);
}*/

/*xnt main() 
{
	write(1, "\n\n--- Integer Test ---\n\n", 24);
	printf("printf *.*x (8, 8, -234):     [%*.*x]\n", 8, 8, -234);
	ft_printf("ft_printf *.*x (8, 8, -234):  [%*.*x]\n", 8, 8, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 8, 234):     [%*.*x]\n", 8, 8, 234);
	ft_printf("ft_printf *.*x (8, 8, 234):  [%*.*x]\n", 8, 8, 234);
	ft_printf("----\n");
	printf("printf *.*x (8, 10, -234):     [%*.*x]\n", 8, 10, -234);
	ft_printf("ft_printf *.*x (8, 10, -234):  [%*.*x]\n", 8, 10, -234);
	ft_printf("----\n");
	printf("printf *.*x (-10, 8, -234):    [%*.*x]\n", -10, 8, -234);
	ft_printf("ft_printf *.*x (-10, 8, -234): [%*.*x]\n", -10, 8, -234);
	ft_printf("----\n");
	printf("printf *.*x (-10, 8, 234):    [%*.*x]\n", -10, 8, 234);
	ft_printf("ft_printf *.*x (-10, 8, 234): [%*.*x]\n", -10, 8, 234);
	ft_printf("----\n");
	printf("printf *.*x (8, -10, -234):    [%*.*x]\n", 8, -10, -234);
	ft_printf("ft_printf *.*x (8, -10, -234): [%*.*x]\n", 8, -10, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 0, -234):      [%*.*x]\n", 8, 0, -234);
	ft_printf("ft_printf *.*x (8, 0, -234):   [%*.*x]\n", 8, 0, -234);
	ft_printf("----\n");
	printf("printf *.*x (8, 1, -234):      [%*.*x]\n", 8, 1, -234);
	ft_printf("ft_printf *.*x (8, 1, -234):   [%*.*x]\n", 8, 1, -234);
	ft_printf("----\n");
	printf("printf *.10x (2, -234):        [%*.10x]\n", 2, -234);
	ft_printf("ft_printf *.10x (2, -234):     [%*.10x]\n", 2, -234);
	ft_printf("----\n");
	printf("printf 10.10x (-234):         [%10.10x]\n", -234);
	ft_printf("ft_printf 10.10x (-234):      [%10.10x]\n", -234);
	ft_printf("----\n");
	printf("printf 10x (-234):         [%10x]\n", -234);
	ft_printf("ft_printf 10x (-234):      [%10x]\n", -234);
	ft_printf("----\n");
	printf("printf .10x (-234):         [%.10x]\n", -234);
	ft_printf("ft_printf .10x (-234):      [%.10x]\n", -234);
	ft_printf("----\n");
	printf("printf .10x (-34):         [%.10x]\n", 234);
	ft_printf("ft_printf .10x (234):      [%.10x]\n", 234);
	ft_printf("----\n");
	printf("printf 10.*x (7, -1526):    [%10.*x]\n", 7, -1526);
	ft_printf("ft_printf 10.*x (7, -1526): [%10.*x]\n", 7, -1526);
	ft_printf("----\n");
	printf("printf -10.*x (7, -1526):    [%-10.*x]\n", 7, -1526);
	ft_printf("ft_printf -10.*x (7, -1526): [%-10.*x]\n", 7, -1526);
	ft_printf("----\n");
	printf("printf -*.*x (10, 7, -1526):    [%-*.*x]\n", 10, 7, -1526);
	ft_printf("ft_printf -*.*x (10, 7, -1526): [%-*.*x]\n", 10, 7, -1526);
	ft_printf("----\n");
	return (0);
}*/
/*xnt main()
{  


	
	//printf("%.*s\n", 1, "hola");
	//ft_printf("%.*s\n", "hola");
	ft_printf("%0*d\n-", 10, 65);
	printf("-----------------------------------\n");
	printf ("Width trick: %*d \n", 5, 10);
	ft_printf ("Width trick: %*d \n", 5, 10);
	printf("-----------------------------------\n");
	printf ("Characters: %c %c \n", 'a', 65);
   ft_printf("Characters: %c %c \n", 'a', 65);
   printf("-----------------------------------\n");
   printf ("Preceding with zeros: %0*x \n", 10, 1997);
	ft_printf("Preceding with zeros: %0*x \n", 10, 1997);
	ft_printf("-----------------------------------\n");
	printf("Width trick: %*d \n", 5, 10);
   ft_printf("Width trick: %*d \n", 5, 10);
    ft_printf("-----------------------------------\n");
	//printf ("%0*s\n", 10, "hola");
   //ft_printf("%.*s\n-", 15, 30,"A string");
    printf("-----------------------------------\n");
   printf("'%s\n'", "Hello");
   ft_printf("'%s\n'", "Hello");
   printf("-----------------------------------\n");
   printf("'%0*s\n'", 10, "H");
   ft_printf("'%0*s\n'", 10, "H");
   printf("-----------------------------------\n");
   printf("-----------------------------------\n");
   
    printf("-----------------------------------\n");
	
	printf("-----------------------------------\n");
	printf("'%x\n", 0);
   ft_printf("'%x\n", 0);
   printf("-----------------------------------\n");
    printf("'%0X\n", 460);
   ft_printf("'%0X\n", 460);
    printf("%0*s\n",10, "H");
   ft_printf("'%0*s\n'", 10, "H");*/
   //printf("'%*x\n", 10, -111);
   //printf("'%*x\n", 10, -111);
// printf("'%.*s-\n", 3, "1256");
 //printf("'%*.*s-\n", 10, 3, "1526");
 /*printf("'%10.*x-\n", 3, -1526);
   //ft_print("'%*s-\n", 10, 6, "Muy buenas tardes");
   ft_printf("----------------------------------- end");

   return 0;
}*/