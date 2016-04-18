/*
** my_putchar.c for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:19:30 2016 SMIDA
** Last update Fri Apr  8 09:19:30 2016 SMIDA
*/

#include <unistd.h>

void    my_putchar(char c)
{
  write(1, &c, 1);
}
