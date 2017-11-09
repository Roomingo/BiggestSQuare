/*
** check.c for check.c in /home/Romingo/clone/CPE_2016_BSQ
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Fri Dec 16 13:17:53 2016 romain rousseau
** Last update Sun Dec 18 22:09:59 2016 romain rousseau
*/

#include "include/macro.h"

int	check_my_buf(char *buf)
{
  int	err;
  int	i;

  err = 0;
  i = 0;
  while (buf[i] != '\0')
    {
      if (buf[i] != '.' && buf[i] != 'o' && buf[i] != '\n')
	{
	  my_printf("Error : File with some wrong char ");
	  my_printf("(need only : '.', 'o' and '%cn').\n", 92);
	  return (1);
	}
      else if (buf[i] == '\n' && buf[i + 1] == '\n')
	{
	  my_printf("Two or more '%cn' consecutively.\n", 92);
	  return (1);
	}
      i += 1;
    }
  return (err);
}

int	check_tab_size(char **tab)
{
  int	y;
  int	nb;

  y = 0;
  nb = my_strlen(tab[y]);
  while (tab[y] != '\0')
    {
      if (my_strlen(tab[y]) != nb)
	{
	  my_printf("Error : length of lines aren't all equal.\n");
	  return (1);
	}
      y += 1;
    }
  return (0);
}

int	check_first_line(char *buf)
{
  int	i;

  i = 0;
  if (buf[i] == '\0' || buf[i] == '\n')
    return (1);
  while (buf[i] != '\n' && buf[i] != '\0')
    i += 1;
  if (buf[i+1] == '\0' || (buf[i+1] == '\n' && buf[i+2] == '\0'))
    return (1);
  return (0);
}

char	*check_back_n(char *str)
{
  int	i;

  i = my_strlen(str) - 1;
  if (str[i] != '\n')
    my_strcat(str, "\n");
  return (str);
}

int	check_my_nbr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\n' && str[i] != '\0')
    {
      if (str[i] < '0' || str[i] > '9')
	return (1);
      i += 1;
    }
  return (0);
}
