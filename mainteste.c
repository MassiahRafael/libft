/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainteste.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmassiah <rmassiah@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 21:00:14 by rmassiah          #+#    #+#             */
/*   Updated: 2022/06/21 21:01:55 by rmassiah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h> //isaplha | isdigit | isalnum | isascii | isprint | toupper | tolower |

#include <string.h> //strlen  | memset | bzero | memcpy | memmove | strlcpy | strlcat | strchr| strrchr |
					//strncmp | memchr | memcmp| strnstr| strdup

#include <stdio.h> //printf |

#include "libft.h" // ft_*.c   <-- include stlib.h - atoi | calloc

//função para o teste da striteri
void	f(unsigned int i, char *c)
{
	if (i == 2)
		*c = *c + 32;
}

//função para o teste da strmapi
char g(unsigned int i, char c)
{
//cada caracter vai ter o valor da proxima letra da tabela ascii, exceto o primeiro 
	if( i == 0)
		return c;
	else
	{
		c = c + 1;
		return (c);
	}
 }

int	main(void){

 // teste for isalpha | isdigit | isalnum | isascii | isprint
 //

	int i = 0;

//	printf("---------------------teste isalpha--------------------\n\n");

//	i = 32;
//	while( i <= 126){
//		printf("teste: %c | ft_*.c = %d | original = %d \n",i, ft_isalpha(i), isalpha(i));
//		i++;
//	}

	printf("\n--------------------teste isdigit--------------------\n\n");

	i = 32;
	while( i <= 126){
		printf("teste: %c | ft_*.c = %d | original = %d \n",i, ft_isdigit(i), isdigit(i));
		i++;
	}

	printf("\n--------------------teste isalnum--------------------\n\n");

	i = 32;
	while( i <= 126){
			printf("teste: %c | ft_*.c = %d | original = %d \n",i, ft_isalnum(i), isalnum(i));
		i++;
	}

	printf("\n--------------------teste isascii--------------------\n\n");

	i = 32;
	while( i <= 126){
			printf("teste: %c | ft_*.c = %d | original = %d \n",i, ft_isascii(i), isascii(i));
		i++;
	}

	printf("\n--------------------teste isprint--------------------\n\n");

	i = 0;
	while( i <= 126){
			printf("teste: %c | ft_*.c = %d | original = %d \n",i, ft_isprint(i), isprint(i));
		i++;
	}

	printf("\n--------------------teste strlen--------------------\n\n");

	char *teststrlen1 = "UBA LUBA DUBI DUBI";
	char *teststrlen2 = "";

	printf("teste 1 | ft_*.c = %d | original = %d \n" , (int)ft_strlen(teststrlen1), (int)strlen(teststrlen1));
	printf("teste 2 | ft_*.c = %d | original = %d \n" , (int)ft_strlen(teststrlen2), (int)strlen(teststrlen2));

	printf("\n--------------------teste memset--------------------\n\n");

	char testmemset1[] = "UBA LUBA DUBI DUBI";
	char testmemset2[] = " ";

	printf("teste 1 | ft_*.c = %s | original = %s \n" , ft_memset(testmemset1, 82, 8), memset(testmemset1, 82, 8));
	printf("teste 2 | ft_*.c = %s | original = %s \n" , ft_memset(testmemset2, 82, 1), memset(testmemset2, 82, 1));

	printf("\n--------------------teste bzero--------------------\n\n");

	int a;
	char testbzero[]= "UBA LUBA DUBI DUBI";
	char testbzero1[]= "UBA LUBA DUBI DUBI";
	
	printf("%s\n", testbzero);
	printf("\n---teste ft_*---\n");
	ft_bzero(testbzero, 15);
	a = 0;
	while( a < 18)
	{
		printf("%d, ", testbzero[a]);
		a++;
	}

	printf("\n---teste original---\n");
	bzero(testbzero1, 15);
	a = 0;
	while( a < 18)
	{
		printf("%d, ", testbzero1[a]);
		a++;
	}

	printf("\n--------------------teste memcpy--------------------\n\n");

	char testmemcpy1[] = "PEACE among WORLDS ,,l,,";
	char testmemcpy2[30];
	ft_memcpy(testmemcpy2, testmemcpy1, 26);
	printf("resultado ft*.c : %s\n", testmemcpy2);

	char testmemcpy3[] = "PEACE among WORLDS ,,l,,";
	char testmemcpy4[30];
	memcpy(testmemcpy4, testmemcpy3, 26);
	printf("resultado original : %s\n", testmemcpy4);


	printf("\n--------------------teste memmove--------------------\n\n");

	char testmemmove1[] = "PEACE among WORLDS ,,l,,";
	char testmemmove2[30];
	ft_memmove(testmemmove2, testmemmove1, 27);
	printf("resultado ft*.c : %s\n", testmemmove2);

	char testmemmove3[] = "PEACE among WORLDS ,,l,,";
	char testmemmove4[30];
	memmove(testmemmove4, testmemmove3, 27);
	printf("resultado original : %s\n", testmemmove4);

	printf("\n--------------------teste strlcpy--------------------\n\n");

	char teststrlcpy1[] = "Where's your towel?";
	char teststrlcpy2[40] = "";
	char teststrlcpy3[] = "Where's yout towel?";
	char teststrlcpy4[40] = "";
	int result;

	result = ft_strlcpy(teststrlcpy2, teststrlcpy1, 4);
	printf( "teste 1 size < str ft_*.c : size src = %d string copiada: %s\n", result, teststrlcpy2);

	result = ft_strlcpy(teststrlcpy2, teststrlcpy1, 22);
	printf( "teste 2 size > str ft_*.c : size src = %d string copiada: %s\n", result, teststrlcpy2);

	result = strlcpy(teststrlcpy4, teststrlcpy3, 4);
	printf( "teste 3 size < str original  : size src = %d string copiada: %s\n", result, teststrlcpy4);

	result = strlcpy(teststrlcpy4, teststrlcpy3, 22);
	printf( "teste 4 size > str original : size src = %d string copiada: %s\n", result, teststrlcpy4);


	printf("\n--------------------teste strlcat--------------------\n\n");

	char teststrlcat1[40] = "UBA LUBA ";
	char teststrlcat2[40] = "DUBI DUBI";
	char teststrlcat3[40] = "UBA LUBA ";
	char teststrlcat4[40] = "DUBI DUBI";

	result = ft_strlcat(teststrlcat1, teststrlcat2, 30);
	printf( "teste 2 size > dstlen ft_*.c : size src = %d string copiada: %s\n", result, teststrlcat1);

	result = strlcat(teststrlcat3, teststrlcat4, 30);
	printf( "teste 4 size > destlen original : size src = %d string copiada: %s\n", result, teststrlcat3);


	printf("\n--------------------teste toupper--------------------\n\n");


	i = 65;
	while( i <= 126){
		printf("teste: %c | ft_*.c = %c | original = %c \n",i, ft_toupper(i), toupper(i));
		i++;
	}

	printf("\n--------------------teste tolower--------------------\n\n");


	i = 65;
	while( i <= 126){
		printf("teste: %c | ft_*.c = %c | original = %c \n",i, ft_tolower(i), tolower(i));
		i++;
	}

	printf("\n--------------------teste strchr--------------------\n\n");

	printf("Test ft_*.c\n\n");
	printf("-- founded --\nresult:");
	char teststrchr1[] = "My name is @Rafael";
	char *teststrchr2;
	teststrchr2 = ft_strchr(teststrchr1, '@');
	printf("%s\n",teststrchr2);

	printf("-- not founded --\nresult: ");
	char teststrchr3[] = "My name is Rafael";
	char *teststrchr4;
	teststrchr4 = ft_strchr(teststrchr3, '@');
	printf("%s\n",teststrchr4);

	printf("\nTes original\n");
	printf("-- founded --\nresult: ");
	char teststrchr5[] = "My name is @Rafael";
	char *teststrchr6;
	teststrchr6 = strchr(teststrchr5, '@');
	printf("%s\n",teststrchr6);

	printf("-- not founded --\nresult: ");
	char teststrchr7[] = "My name is Rafael";
	char *teststrchr8;
	teststrchr8 = strchr(teststrchr7, '@');
	printf("%s\n",teststrchr8);

	printf("\n--------------------teste strrchr--------------------\n\n");

	printf("Test ft_*.c\n\n");
	printf("-- founded --\nresult:");
	char teststrrchr1[] = "My @name is @Rafael";
	char *teststrrchr2;
	teststrrchr2 = ft_strrchr(teststrrchr1, '@');
	printf("%s\n",teststrrchr2);

	printf("-- not founded --\nresult: ");
	char teststrrchr3[] = "My name is Rafael";
	char *teststrrchr4;
	teststrrchr4 = ft_strrchr(teststrrchr3, '@');
	printf("%s\n",teststrrchr4);

	printf("\nTeste original\n");
	printf("-- founded --\nresult: ");
	char teststrrchr5[] = "My @name is @Rafael";
	char *teststrrchr6;
	teststrrchr6 = strrchr(teststrrchr5, '@');
	printf("%s\n",teststrrchr6);

	printf("-- not founded --\nresult: ");
	char teststrrchr7[] = "My name is Rafael";
	char *teststrrchr8;
	teststrrchr8 = strrchr(teststrrchr7, '@');
	printf("%s\n",teststrrchr8);

	printf("\n--------------------teste strncmp--------------------\n\n");

	char teststrncmp1[40] = "UBA LUBA DUBI DUBI";
	char teststrncmp2[40] = "UBA LUBA DUBI DUBI";
	char teststrncmp3[40] = "UBA LUBA DUBI";

	printf("Test cmp str 1 == str 2 | result == 0 | ft_*.c = %d | original = %d \n", ft_strncmp(teststrncmp1, teststrncmp2, 18), strncmp(teststrncmp1, teststrncmp2, 18));
	printf("Test cmp str 1 >  str 2 | result > 0  | ft_*.c = %d | original = %d \n", ft_strncmp(teststrncmp1, teststrncmp3, 18), strncmp(teststrncmp1, teststrncmp3, 18));
	printf("Test cmp str 1 <  str 2 | result < 0  | ft_*.c = %d | original = %d \n", ft_strncmp(teststrncmp3, teststrncmp1, 18), strncmp(teststrncmp3, teststrncmp1, 18));

	printf("\n--------------------teste memchr--------------------\n\n");

	printf("Test ft_*.c\n\n");
	printf("-- founded --\nresult:");
	char testmemchr1[] = "My @name is @Rafael";
	printf("%s\n", ft_memchr(testmemchr1, '@', 17));

	printf("-- NOT founded --\nresult:");
	char testmemchr2[] = "My name is Rafael";
	printf("%s\n", ft_memchr(testmemchr2, '@', 17));


	printf("\nTest original\n\n");
	printf("-- founded --\nresult:");
	printf("%s\n", memchr(testmemchr1, '@', 17));

	printf("-- NOT founded --\nresult:");
	printf("%s\n", memchr(testmemchr2, '@', 17));


	printf("\n--------------------teste memcmp--------------------\n\n");

	char testmemcmp1[40] = "UBA LUBA DUBI DUBI";
	char testmemcmp2[40] = "UBA LUBA DUBI DUBI";
	char testmemcmp3[40] = "UBA LUBA DUBI";

	printf("Test cmp str 1 == str 2 | result == 0 | ft_*.c = %d | original = %d \n", ft_strncmp(testmemcmp1, testmemcmp2, 18), memcmp(testmemcmp1, testmemcmp2, 18));
	printf("Test cmp str 1 >  str 2 | result > 0  | ft_*.c = %d | original = %d \n", ft_strncmp(testmemcmp1, testmemcmp3, 18), memcmp(testmemcmp1, testmemcmp3, 18));
	printf("Test cmp str 1 <  str 2 | result < 0  | ft_*.c = %d | original = %d \n", ft_strncmp(testmemcmp3, testmemcmp1, 18), memcmp(testmemcmp3, testmemcmp1, 18));


	printf("\n--------------------teste strnstr--------------------\n\n");

	char teststrnstr1[] = "UBA LUBA DUBI DUBI";
	char teststrnstr2[] = "LUBA";
	char teststrnstr3[] = "Bali";
	char *result1 = ft_strnstr(teststrnstr1, teststrnstr2, 20);
	char *result2 = ft_strnstr(teststrnstr1, teststrnstr3, 20);
	char *result3 = strnstr(teststrnstr1, teststrnstr2, 20);
	char *result4 = strnstr(teststrnstr1, teststrnstr3, 20);

	printf("----- test ft_*c -----\n\n");
	printf("Teste FOUND     = %s\n", result1);
	printf("Teste NOT FOUND = %s\n", result2);
	printf("\n----- test original -----\n\n");
	printf("Teste original  = %s\n", result3);
	printf("Teste original  = %s\n", result4);

	printf("\n--------------------teste atoi-------------------\n\n");

	char testatoi1[] = "  -2342";
	char testatoi2[] = "abc-574";
	char testatoi3[] = "64872arat";
	char testatoi4[] = "13";

	printf("teste 0: mine = %d | orig = %d\n",ft_atoi(testatoi1), atoi(testatoi1));
	printf("teste 1: mine = %d | orig = %d\n",ft_atoi(testatoi2), atoi(testatoi2));
	printf("teste 2: mine = %d | orig = %d\n",ft_atoi(testatoi3), atoi(testatoi3));
	printf("teste 3: mine = %d | orig = %d\n",ft_atoi(testatoi4), atoi(testatoi4));


	printf("\n--------------------teste calloc-------------------\n\n");


	printf("\n--------------------teste strdup-------------------\n\n");

	char teststrdup1[] = "UBA LUBA DUBI DUBI";
	char *resultstrdup1 = ft_strdup(teststrdup1);
	char *resultstrdup2 = strdup(teststrdup1);

	printf("test ft_*.c = %s\n",resultstrdup1);
	printf("test original = %s\n",resultstrdup2);


	printf("\n--------------------FIRST PART END-------------------\n");
	printf("-----------------------------------------------------\n");
	printf("--------------------- SECOND PART -------------------\n");


	printf("\n--------------------test ft_substr-------------------\n\n");

	char testft_substr1[] = "UBA LUBA DUBI DUBI";
	char *resultft_substr = ft_substr(testft_substr1, 4,4);
	printf("result = %s\n", resultft_substr);


	printf("\n--------------------test ft_strjoin-------------------\n\n");

	char teststrjoin1[] = "UBA LUBA ";
	char teststrjoin2[] = "DUBI DUBI";
	char *joinstrresult =  ft_strjoin(teststrjoin1, teststrjoin2);

	printf("result = %s\n",joinstrresult);


	printf("\n--------------------test ft_strtrim-------------------\n\n");

	char testtrim[] = "UBA LUBA DUBI DUBI";
	const char settrim[] = {' ','U','B','A','I','\0'};
	char *newtrim;
	newtrim = ft_strtrim(testtrim,settrim);
	printf("%s\n",newtrim);

	printf("\n--------------------test ft_split-------------------\n\n");

	char splittest[] = "UBA LUBA DUBA DUBA";
	char splittest1[] = "th-is i-s a te-st to fuc-tion spl-it";
	char **testsplit = ft_split(splittest, ' ');
	char **testsplit1 = ft_split(splittest1, '-');

	i =0;
	printf("splittest %s\n", splittest);
	while(i < 5)
	{
		printf("splittest %d = %s\n",i, testsplit[i]);
		i++;
	}
	printf("\n");

	i = 0;
	printf("splittest1 %s\n", splittest1);
	while(i < 7)
	{
		printf("splittest %d = %s\n",i, testsplit1[i]);
		i++;
	}

	printf("\n--------------------test ft_itoa-------------------\n\n");

	int testitoa = 10;
	char *testitoa2 = ft_itoa(testitoa);
	printf("%s\n",testitoa2);


	testitoa = -65186;
	testitoa2 = ft_itoa(testitoa);
	printf("%s\n",testitoa2);


	testitoa = -2147483648;
	testitoa2 = ft_itoa(testitoa);
	printf("%s\n",testitoa2);


	testitoa = 84764354;
	testitoa2 = ft_itoa(testitoa);
	printf("%s\n",testitoa2);

	testitoa = 0;
	testitoa2 = ft_itoa(testitoa);
	printf("%s\n",testitoa2);

	printf("\n--------------------test ft_strmapi -------------------\n\n");

	char teststrmapi[] = "UBA LUBA DUBI DUBI";
	char *newstrmapi;
	newstrmapi = ft_strmapi(teststrmapi,g);
	printf("%s\n",newstrmapi);

	printf("\n--------------------test ft_striteri -------------------\n\n");

	char teststriteri[] = "UBA LUBA DUBI DUBI";
	ft_striteri(teststriteri,f);
	printf("%s\n",teststriteri);

	printf("\n--------------------test ft_putchar_fd -------------------\n\n");

	ft_putchar_fd('c',1);
	write(1, "\n", 1);

	printf("\n--------------------test ft_putstr_fd -------------------\n\n");

	ft_putstr_fd(testft_substr1,1);
	write(1, "\n",1);

	printf("\n--------------------test ft_putendl_fd -------------------\n\n");

	ft_putendl_fd(testft_substr1,1);

	printf("\n--------------------test ft_putnbr_fd -------------------\n\n");

	int testft_putnbr_fd1 = 1636476;
	int testft_putnbr_fd2 = -2147483648;
	int testft_putnbr_fd3 = -646847;
	int testft_putnbr_fd4 = 5468476;

	ft_putnbr_fd(testft_putnbr_fd1, 1);
	write(1, "\n",1);
	ft_putnbr_fd(testft_putnbr_fd2, 1);
	write(1, "\n",1);
	ft_putnbr_fd(testft_putnbr_fd3, 1);
	write(1, "\n",1);
	ft_putnbr_fd(testft_putnbr_fd4, 1);
	write(1, "\n",1);


}
