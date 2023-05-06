#include "includes/libft.h"


// la diff/connexion entre la len et lindex =>
//str = "ABCDE" la len est de 5
// le E = str[4]
//str == A B C D E
//ind == 0 1 2 3 4 -5-(len)
//len == 1 2 3 4 5
// du coup len - 1 = dernier index, car la len commence a 1 son comptage, 
//et lindex lui commence a 0, 
//ce qui cree un decalage
//du coup si jutilise la len comme index: str[len] = '/0'
// du coup 
// char* str = malloc(sizeof(char) * len + 1);
// str[len] = '\0'

static int count_len(long int n) //on le met en long comme ca 2147483648 rentrera // static ca veut dire ya que itoa qui en a besoin 
{
	// long int nb_debug = n; // a suppr cest just pour debug
	int len = 0;
	if (n < 0) //mettre un espace en plus dans le malloc pour le moins
	{
		len++;
		n =  n * -1;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	//  printf("pour n =%ld, len = %d\n", nb_debug, len);

	return (len);
}

char *ft_itoa(int nb) 
{
	long int n = nb; //jle transforme en plus gros pour pouvoir accueuillir le fameux 2147483648 qui ne rentre pas dhabitude dans un int
	int len = count_len(n);
	char* str = malloc(sizeof(char) * len + 1); //sert toi de ton i et de ton n pour malloc de la taille exact a part dans le cas de -2147483648,
	if (str == NULL)
		return NULL;
	str[len] = '\0';
	len = len -1; //mtn len est lequivalent en index, du dernier caractere avant le /0.
	if (n == 0) 
	{
		str[0] = '0';
		return str;
	}
	else if (n < 0) 	
	{
		str[0] = '-';
		n = -n;
	}

	while (n != 0)
	{
		int digit = n % 10;
		str[len] = digit + '0'; //tutilise len comme index
		n /= 10;
		len--;
	}
	return (str);
}

// int main()
// {
//    int a = -2147483648;
//    printf("%s\n", ft_itoa(a));
//    printf("%s\n", ft_itoa(123));
//    printf("%s\n", ft_itoa(-123));
//    printf("%s\n", ft_itoa(0));
//    printf("%s\n", ft_itoa(3434534));
//    printf("%s\n", ft_itoa(-454));
//    printf("%s\n", ft_itoa(43343));

//    ft_itoa(-214740648);


//    // DANS LE CAS 654
//    /*
//    len = 3
//    jfais un malloc de 3 + 1
//    str[len] = '\0' c pareil que str[3]
// 	len - 1; (len =2)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =1)
// 	str[len] = 5
// 	len -1;(len =0)
// 	str[len] = 6
//    */

//      // DANS LE CAS -654
//    /*
//    len = 4
//    jfais un malloc de len + 1
//    str[len] = '\0' c pareil que str[4]
//    //str[0] = '-'
// 	len - 1; (len =3)
// 	str[len] = 4 soit le dernier caratere 
// 	len -1;(len =2)
// 	str[len] = 5
// 	len -1;(len =1)
// 	str[len] = 6

// 	du coup tarrete la copie a str[1]
//    */
// }