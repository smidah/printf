/*
** movehard.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:26:33 2016 SMIDA haïkel
** Last update Fri Jan 22 16:26:38 2016 SMIDA haïkel
*/

#include "my.h"

void    parcourhard()
{
  char  **tab;
  
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
  movehard();
  my_free(tab);
}

void    movehard()
{
  char	*c;
  char	**tab3;
  int   i;
  
  i = 0;
  lose = 0;
  indexi = 1;
  indexj = 1;
  tab3 = malloc(sizeof(char*) * 50);
  tab3 = my_lab();
  c = malloc(sizeof(*c));
  readline(c);
  while (lose != 1 && c[i] != '\0')
    {
      choixhard(tab3, c, i);
      modif(tab3);
      i++;
    }
  my_free(tab3);
  free(c);
}

void    choixhard(char **tab3, char *c, int i)
{
  if (c[i] == 'd')
    mvright(tab3);
  else if (c[i] == 'a')
    mvleft(tab3);
  else if (c[i] == 'w')
    mvup(tab3);
  else if (c[i] == 's')
    mvdown(tab3);
  else
    {
      my_putstr("\033c");
      my_putstr("\033[31mVous avez perdu\033[0m\n");
      lose=1;
    }
}
