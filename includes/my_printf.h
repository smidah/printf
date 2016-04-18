/*
** my_lib.h for my_printf in /Users/smida_h/Desktop/printf/iche_n/includes
**
** Made by SMIDA
** Login   <smida_h@etna-alternance.net>
**
** Started on  Fri Apr  8 09:45:57 2016 SMIDA
** Last update Fri Apr  8 09:45:57 2016 SMIDA
*/

#ifndef LIB_H
#define LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdint.h>

void	my_putchar(char c);
int		my_putstr(char* str);
void 	my_put_nbr(int n);
int		my_strcmp(char *s1, char *s2);
int		my_strlen(char *str);
char	*my_strcpy(char *dest, char *src);
int     my_strlen(char *str);
int		main(void);
void	my_printf(char *str, ...);
void	options();
void    verif_options(char options, va_list ap);
void 	opt_s(va_list ap);
void 	opt_d(va_list ap);
void 	opt_c(va_list ap);
void	my_put_nbr_base(int nbr, char* base);
void 	opt_o(va_list ap);
void    my_put_nbr_unsigned(unsigned int n);
void 	opt_u(va_list ap);
void 	opt_x(va_list ap);
void 	opt_X(va_list ap);
void	opt_modul();
void (*pt_tab[150])(va_list);

#endif /* LIB_H */
