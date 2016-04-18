/*
** my_putstr.c for my_putstr.c in /home/smida_h/piscine_c/Jour03/smida_h
** 
** Made by SMIDA Haikel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Wed Sep 30 10:17:18 2015 SMIDA Haikel
** Last update Fri Apr  8 09:36:28 2016 SMIDA
*/

void    my_putchar(char c);

void    my_putstr(char *str)
{
  while (*str != '\0')
    {
      my_putchar (*str);
      str++;
    }
}
