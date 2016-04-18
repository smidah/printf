/*
** fonctions.c for octocat in /Users/aboube_s/Desktop/octocat/smida_h
** 
** Made by SMIDA haïkel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Fri Jan 22 16:31:00 2016 SMIDA haïkel
** Last update Fri Jan 22 16:31:02 2016 SMIDA haïkel
*/

#include "my.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar (*str);
      str++;
    }
}

int   my_strlen(char *str)
{
  
  i = 0;
  while (*str != '\0')
    {
      str = str + 1;
      i++;
    }
  return (i);
}

char    *my_strdup(char *str)
{
  char	*bre;
  int	sdrex;
  
  sdrex = 0;
  bre = malloc (my_strlen(str) + 1 * sizeof (char));
  while (str[sdrex] != '\0')
    {
      bre[sdrex] = str[sdrex];
      sdrex++;
    }
  bre[sdrex] = '\0';
  return (bre);
}

void    clear (void)
{
  while ( getchar() != '\n' );
}
