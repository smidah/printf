/*
** options.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:25:34 2016 SMIDA haïkel
** Last update Fri Jan 22 16:26:05 2016 SMIDA haïkel
*/

#include "my.h"

void    option_c()
{
  char	c;

  c = getchar();
  clear();
  choixoptions(c);
  my_putstr("Aurevoir !\n");
}

int   choixoptions(char c)
{
  while (c != 'q')
    {
      if (c == 'a')
	{
	  my_putstr("\033c");
	  parcourcasus();
	  return(0);
	}
      else if (c  == 'b')
	{
	  my_putstr("\033c");
	  parcourhard();
	  return(0);
	}
      else
	{
	  choixoptions_bonus(c);
	  return(0);
	}
      c = getchar();
      clear();
    }
  return(0);
}

void    readline(char *ligne)
{
  
  i = 0;
  while((ligne[i] = getchar()) != '\n')
    i++;
}

int   choixoptions_bonus(char c)
{
  if (c == 'c')
    {
      my_putstr("\033c");
      parcour_bonus_mur();
      return(0);
    }
  else if (c == 'd')
    {
      my_putstr("\033c");
      parcour_bonus_blind();
      return(0);
    }
  else if (c == 'e')
    {
      my_putstr("\033c");
      parcour_bonus_compteur();
      return(0);
    }
  else
    {
      my_putstr("Wesh tu sais pas lire un menu ?\n");
    }
  return(0);
}
