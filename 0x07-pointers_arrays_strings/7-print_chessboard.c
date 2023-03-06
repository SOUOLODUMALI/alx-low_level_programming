# include  " main.h "

/* *
* print_chessboard - imprime l'échiquier
* @a : échiquier
*
* Retour : nul
 */

void  print_chessboard ( char (*a)[8])
{
int je, j ;

for (i = 0 ; i < 8 ; i++)
{
for(j = 0 ; j < 8 ; j++)
{
_putchar (a[i][j]);
}
_putchar ( 10 );
}
}
