/*
** options.c for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:46:00 2016 SMIDA
** Last update Fri Apr  8 09:46:00 2016 SMIDA
*/

#include "my_printf.h"

void 	opt_s(va_list ap)
{
   my_putstr(va_arg(ap, char *));
}

void 	opt_d(va_list ap)
{
   my_put_nbr(va_arg(ap, int));
}

void 	opt_c(va_list ap)
{
   my_putchar(va_arg(ap, int));
}

void 	opt_modul()
{
   my_putchar('%');
}