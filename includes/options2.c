/*
** options2.c for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:46:00 2016 SMIDA
** Last update Fri Apr  8 09:46:00 2016 SMIDA
*/

#include "my_printf.h"

void 	opt_o(va_list ap)
{
   my_put_nbr_base(va_arg(ap, int), "01234567");
}

void    my_put_nbr_unsigned(unsigned int n)
{
  int   div;
  int   res;
  div = 1;

  while ((n / div) >= 10)
    {
      div *= 10;
    }
  while (div > 0)
    {
      res = (n / div) % 10;
      my_putchar(res + '0');
      div /= 10;
    }
}

void 	opt_u(va_list ap)
{
   my_put_nbr_unsigned(va_arg(ap,  int));
}

void 	opt_x(va_list ap)
{
   my_put_nbr_base(va_arg(ap, int), "0123456789abcdef");
}

void 	opt_X(va_list ap)
{
   my_put_nbr_base(va_arg(ap, int), "0123456789ABCDEF");
}
