/*
** my_put_nbr.c for my_put_nbr.c in /home/smida_h/piscine_c/Jour05/smida_h
** 
** Made by SMIDA Haikel
** Login   <smida_h@etna-alternance.net>
** 
** Started on  Sat Oct  3 15:59:36 2015 SMIDA Haikel
** Last update Fri Apr  8 09:38:35 2016 SMIDA
*/

void    my_putchar(char c);

void    my_putstr(char *str);

void    my_put_nbr(int n)
{
  int   dvs;
  int   rslt;

  dvs = 1;
  if (n == -2147483648)
    my_putstr("-2147483648");
  else
    {
      if (n < 0)
        {
          my_putchar('-');
          n *= -1;
        }
      while ((n / dvs) >= 10)
        {
          dvs *= 10;
        }
      while (dvs > 0)
        {
          rslt = (n / dvs) % 10;
          my_putchar(rslt + '0');
          dvs /= 10;
        }
    }
}


