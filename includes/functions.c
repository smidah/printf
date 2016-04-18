/*
** functions.c for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:49:59 2016 SMIDA
** Last update Fri Apr  8 09:49:59 2016 SMIDA
*/

#include "my_printf.h"

void	my_printf(char *str, ...)
{
	va_list ap;
	int i;

	options();
	i = 0;
    va_start(ap, str);
    options();
  	while (str[i] != '\0')
  	{
    	if (str[i] == '%')
    	{
        	i++;
        	verif_options(str[i], ap);
    	}
    	else
      		my_putchar(str[i]);
    i++;
  	}
  	va_end(ap);
}

void	options()
{
	  pt_tab['d'] = &opt_d;
    pt_tab['s'] = &opt_s;
    pt_tab['i'] = &opt_d;
    pt_tab['c'] = &opt_c;
    pt_tab['o'] = &opt_o;
    pt_tab['u'] = &opt_u;
    pt_tab['x'] = &opt_x;
    pt_tab['X'] = &opt_X;
    pt_tab['%'] = &opt_modul;
}

void    verif_options(char options, va_list ap)
{
   unsigned char opts;
   int   int_char;

   int_char = options;
   if (pt_tab[int_char])
   {
     opts = options;
     pt_tab[opts](ap);
   }
}

void	my_put_nbr_base(int nb, char* base)
{
	int taille_base;
	int result;

	taille_base = my_strlen(base);
	result = nb / taille_base;
	if (result >= taille_base)
		my_put_nbr_base(result, base);
	else
		my_putchar(base[result]);
	my_putchar(base[nb % taille_base]);
}
