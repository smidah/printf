/*
** move_bonus_blind.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:28:41 2016 SMIDA haïkel
** Last update Fri Jan 22 16:28:43 2016 SMIDA haïkel
*/

#include "my.h"

void    move_bonus_blind()
{
  char    c;
  char    **tab3;
  
  lose = 0;
  indexi =1;
  indexj =1;
  tab3 = malloc(sizeof(char*) * 50);
  tab3 = my_lab();
  while (lose != 1)
    {
      c = getchar();
      choixcasus(tab3, c);
      modif_bonus_blind(tab3);
      clear();
    }
  my_free(tab3);
}

void    parcour_bonus_blind()
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
	    my_putstr("\033[31;7m \033[0m");
	  else if (tab[i][j] == 'A')
	    my_putstr("\033[32;7m \033[0m");
	  else if (tab[i][j] == '8')
	    my_putstr("@");
	  j++;
	}
      my_putstr("\n");
      i++;
    }
  move_bonus_blind();
  my_free(tab);
}

void    modif_bonus_blind(char **tab3)
{
  
  i = 0;
  while (i < 17)
    {
      j = 0;
      while (j < 20)
        {
          if (tab3[i][j] == 'M')
	    my_putstr("\033[31;7m \033[0m");
	  else if (tab3[i][j] == ' ')
	    my_putstr("\033[31;7m \033[0m");
	  else if (tab3[i][j] == 'A')
	    my_putstr("\033[32;7m \033[0m");
	  else if (tab3[i][j] == '8')
	    {
	      my_putstr("@");
	      indexi = i;
	      indexj = j;
	    }
	  j++;
	}
      my_putstr("\n");
      i++;
    }
}
