/*
** mouvements_bonus_mur.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:29:09 2016 SMIDA haïkel
** Last update Fri Jan 22 16:29:44 2016 SMIDA haïkel
*/

#include "my.h"

void    mvright_bonus_mur(char **tab3)
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
      tab3[indexi][indexj] = 'M';
      tab3[indexi][indexj + 1] = '8';
    }
}

void    mvleft_bonus_mur(char **tab3)
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
      tab3[indexi][indexj] = 'M';
      tab3[indexi][indexj - 1] = '8';
    }
}

void    mvup_bonus_mur(char **tab3)
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
      tab3[indexi][indexj] = 'M';
      tab3[indexi - 1][indexj] = '8';
    }
}

void    mvdown_bonus_mur(char **tab3)
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
      tab3[indexi][indexj] = 'M';
      tab3[indexi + 1][indexj] = '8';
    }
}
