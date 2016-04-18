/*
** my_strlen.c for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:46:01 2016 SMIDA
** Last update Fri Apr  8 09:46:01 2016 SMIDA
*/

int     my_strlen(char *str)
{
  int   i;

  i = 0;
  while (*str != '\0')
    {
      i++;
      str++;
    }
  return (i);
}
