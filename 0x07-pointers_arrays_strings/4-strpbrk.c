# inclure  " main.h "

/* *
* _strpbrk - recherche dans une chaîne l'un des ensembles d'octets
* @s : chaîne à rechercher
* @accept : chaîne à rechercher
*
* Return : pointeur vers l'octet de s qui correspond à l'un des octets de accept,
* ou NULL si aucun octet de ce type n'est trouvé
 */

char * _strpbrk ( char *s, char *accepter)
{
 entier non signé i, j ;
pour (i = 0 ; *(s + i); i++)
{
pour (j = 0 ; *(accepter + j); j++)
{
si (*(s + i) == *(accepter + j))
{
casser ;
}
}
si (*(accepter + j) != ' \0 ' )
{
retour (s + je);
}
}
retour ( 0 );
}
