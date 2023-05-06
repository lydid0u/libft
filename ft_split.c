#include "includes/libft.h"

int countword(const char *s, char c)
{
    int i;
    int len;

    i = 0;
    len = 0;

    while (s[i])
    {
        while(s[i] != '\0' && s[i] == c) //s cest une adresse, et du coup tu peux pas comparer une adresse a un char, par contre en mettant *s, ca sapelle dereferencer, et ca permet dacceder au contenu de ladresse, en loccurance, un char.
        {
            i++; 
        }

        if(s[i] != '\0')
            len++;

        while (s[i] != '\0' && s[i] != c)
        {
            i++;
        }
    }
    return (len);
}

char *copyStr(const char *original, char c)
{
    char *copy;
    int i;

    i = 0;
    while(original[i] != '\0' && original[i] != c)
        i++;
    
    copy = malloc(sizeof(char) * (i + 1));
    if (!copy)
        return NULL;

    i = 0;
    while(original[i] && original[i] != c)
    {
        copy[i] = original[i];
        i++;
    }
    copy[i] = '\0';
    //copy une str jusqua un caratere donne ou la fin dans un malloc et le renvoi

    return (copy);
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;
    int len_tab;
    len_tab = countword(s, c);

    char **tab;

    tab = malloc(sizeof(char*) * (len_tab + 1)); //char* = taille d'uen adresse de char 
    if (!tab)
        return NULL;
    //(len_tab +1) => parce que sizeof(char*) cest 4, et la case du \0 doit aussi avoir cette taille
    int i;

    i = 0;
    while (i != len_tab)
    {
        //------------------------------------------------------------------------------//

        // le principe de ce while cest de passer tout les epaces avant le mot;
        while(*s != '\0' && *s == c) //s cest une adresse, et du coup tu peux pas comparer une adresse a un char, par contre en mettant *s, ca sapelle dereferencer, et ca permet dacceder au contenu de ladresse, en loccurance, un char.
        {
            s++; // s cest le contenant, en faisant s++ jpasse au contenant suivant, qui contient un autre contenu.
        //   s++ => ladresse de s qui point sur b, vaut maintenant  ladresse de s +1, soit la suivante, soit 'o';
        //  *s++ => le contenu de s qui est egal b, vaut maintenant b +1; soit c;
        }



        //------------------------------------------------------------------------------//
       
        // le principe de cette fonction cest de copier le mot jusquau prochain separateur ou la fin et le mettre dans tab[i]
            tab[i] = copyStr(s, c);
            
            if (!tab[i])
            {
                i--;
                while (i >=0)
                    free(tab[i--]);
                return NULL;
            }


        //------------------------------------------------------------------------------//
        
        //le principe de ce while c'est davance a la prochaine sequence de sepateur pour la prochaine boucle ou la fin. Le mot actuel a ete copie, il ne nous interesse plus
        while(*s != '\0' && *s != c)
        {
            s++;
        }
        i++;
    }
    tab[i] = NULL;

    return (tab);
}


//void    print_tab(char **tab, char const *str, char c)
//{
//   int i;
//   
//   i = 0;
//
//   printf("pour la str : \"%s\" avec le separateur : \"%c\"\n", str, c);
//   while(tab[i])
//   {
//       printf("tab[%d] : \"%s\"\n", i, tab[i]);
//       i++;
//   }
//   printf("______________________\n");
//   printf("______________________\n");
//}
//
//
//int main()
//{
////    char **tab1 = ft_split("====lol===lol== sisi    = = =", '=');
////   char **tab2 = ft_split("", '=');
////   char **tab3 = ft_split("       ", 'v');
////   char **tab4 = ft_split("123", '1');
////   char **tab5 = ft_split("1233", '2');
////   char **tab6 = ft_split("ahah", 's');
////   char **tab7 = ft_split("", '=');
////   char **tab8 = ft_split("salam", 's');
//
//  print_tab(ft_split("      split       this for   me  !       ", ' '), "      split       this for   me  !       ", ' ');
////    write(1, "\n", 1);
////   print_tab(tab2, "", '=');
////   print_tab(tab3, "       ", 'v');
////   print_tab(tab4, "123", '1');
////   print_tab(tab5, "1233", '2');
////   print_tab(tab6, "ahah", 's');
////   print_tab(tab7, "", '=');
////   print_tab(tab8, "salam", 's');
//}
//
//
//// pour la str "====lol===lol== sisi    = = =" avec le separateur "="
//// tab[0] ="lol"
//// tab[1] ="lol"
//// tab[2] =" sisi   "
//// tab[3] =" "
//// tab[4] =" "