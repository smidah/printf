/*
** move_bonus_mur.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:27:41 2016 SMIDA haïkel
** Last update Fri Jan 22 16:27:43 2016 SMIDA haïkel
*/

#include "my.h"

void    move_bonus_mur()
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
      choix_bonus_mur(tab3, c);
      modif(tab3);
      clear();
    }
  my_free(tab3);
}

void    parcour_bonus_mur()
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
  move_bonus_mur();
  my_free(tab);
}

void    choix_bonus_mur(char **tab3, char c)
{
  if (c == 'd')
    mvright_bonus_mur(tab3);
  else if (c == 'a')
    mvleft_bonus_mur(tab3);
  else if (c == 'w')
    mvup_bonus_mur(tab3);
  else if (c == 's')
    mvdown_bonus_mur(tab3);
  else
    {
      my_putstr("\033c");
      my_putstr("\033[31mMauvaise touche !\033[0m\n");
    }
}
