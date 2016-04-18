/*
** move_bonus_compteur.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:28:21 2016 SMIDA haïkel
** Last update Fri Jan 22 16:28:24 2016 SMIDA haïkel
*/

#include "my.h"

void    move_bonus_compteur()
{
  char    c;
  char    **tab3;
  
  lose = 0;
  indexi =1;
  indexj =1;
  nb_coup = 42;
  tab3 = malloc(sizeof(char*) * 50);
  tab3 = my_lab();
  while (lose != 1)
    {
      my_putstr("Coups restants : ");
      my_put_nbr(nb_coup);
      my_putstr("\n");
      c = getchar();
      choix_bonus_compteur(tab3, c);
      modif(tab3);
      clear();
      if (nb_coup == 0)
	{
	  lose = 1;
	  my_putstr("\033[31mVous avez perdu !\033[0m\n");
	}
    }
  my_free(tab3);
}

void    parcour_bonus_compteur()
{
  char    **tab;
  
  tab = malloc(sizeof(char*)*50);
  tab = my_lab();
  i = 0;
  while (i < 17)
    {
      j = 0;
      while (j < 20)
	{
	  if (tab[i][j] == 'M')
	    my_putstr("\033[31;7m \033[0m");
	  else if (tab[i][j] == ' ')
	    my_putstr(" ");
	  else if (tab[i][j] == 'A')
	    my_putstr("\033[32;7m \033[0m");
	  else if (tab[i][j] == '8')
	    my_putstr("@");
	  j++;
	}
      my_putstr("\n");
      i++;
    }
  move_bonus_compteur();
  my_free(tab);
}

void	my_put_nbr(int n)
{
  int	d;
  int 	no;
  
  no = n;
  d = 1;
  if (no == -2147483648)
    {
      my_putstr("-2147483648");
      return ;
    }
  else if (n < 0)
    {
      my_putchar('-');
      no = - n;
    }
  while ((no / d) >= 10)
    {
      d = d * 10;
    }
  while (d > 0)
    {
      my_putchar((no / d) % 10 + 48);
      d = d / 10;
    }
}

void    choix_bonus_compteur(char **tab3, char c)
{
  if (c == 'd')
    {
      mvright(tab3);
      nb_coup--;
    }
  else if (c == 'a')
    {
      mvleft(tab3);
      nb_coup--;
    }
  else if (c == 'w')
    {
      mvup(tab3);
      nb_coup--;
    }
  else if (c == 's')
    {
      mvdown(tab3);
      nb_coup--;
    }
  else
    {
      my_putstr("\033c");
      my_putstr("\033[31mMauvaise touche !\033[0m\n");
    }
}
