/*
** mouvements.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:29:56 2016 SMIDA haïkel
** Last update Fri Jan 22 16:29:58 2016 SMIDA haïkel
*/

#include "my.h"

void    mvright(char **tab3)
{
  if (tab3[indexi][indexj + 1] == 'M')
    {
      my_putstr("\033c");
      my_putstr("\033[31mVous avez perdu !\033[0m\n");
      lose = 1;
    }
  else if (tab3[indexi][indexj + 1] == 'A')
    {
      my_putstr("\033c");
      my_putstr("\033[31mvous avez gagne !!\033[0m\n");
      lose = 1;
    }
  else
    {
      my_putstr("\033c");
      tab3[indexi][indexj] = ' ';
      tab3[indexi][indexj + 1] = '8';
    }
}

void    mvleft(char **tab3)
{
  if (tab3[indexi][indexj - 1] == 'M')
    {
      my_putstr("\033c");
      my_putstr("\033[31mVous avez perdu !\033[0m\n");
      lose = 1;
    }
  else if (tab3[indexi][indexj - 1] == 'A')
    {
      my_putstr("\033c");
      my_putstr("\033[31mvous avez gagne !!\033[0m\n");
      lose = 1;
    }
  else
    {
      my_putstr("\033c");
      tab3[indexi][indexj] = ' ';
      tab3[indexi][indexj - 1] = '8';
    }
}

void    mvup(char **tab3)
{
  if (tab3[indexi - 1][indexj] == 'M')
    {
      my_putstr("\033c");
      my_putstr("\033[31mVous avez perdu !\033[0m\n");
      lose = 1;
    }
  else if (tab3[indexi - 1][indexj] == 'A')
    {
      my_putstr("\033c");
      my_putstr("\033[31mvous avez gagne !!\033[0m\n");
      lose = 1;
    }
  else
    {
      my_putstr("\033c");
      tab3[indexi][indexj] = ' ';
      tab3[indexi - 1][indexj] = '8';
    }
}

void    mvdown(char **tab3)
{
  if (tab3[indexi + 1][indexj] == 'M')
    {
      my_putstr("\033c");
      my_putstr("\033[31mVous avez perdu !\033[0m\n");
      lose = 1;
    }
  else if (tab3[indexi + 1][indexj] == 'A')
    {
      my_putstr("\033c");
      my_putstr("\033[31mvous avez gagne !!\033[0m\n");
      lose = 1;
    }
  else
    {
      my_putstr("\033c");
      tab3[indexi][indexj] = ' ';
      tab3[indexi + 1][indexj] = '8';
    }
}

void    modif(char **tab3)
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
	    my_putstr(" ");
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
