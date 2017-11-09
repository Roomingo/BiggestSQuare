/*
** check_my_punto.c for check_my_punto.c in /home/Romingo/clone/CPE_2016_BSQ
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Mon Dec 12 17:09:28 2016 romain rousseau
** Last update Sun Dec 18 17:16:58 2016 romain rousseau
*/

#include "include/macro.h"

char	**put_my_crosses_punto(int size, char **tab)
{
  int	y;
  int	x;

  y = 0;
  while (y <= size)
    {
      x = 0;
      while (x <= size)
	{
	  tab[y][x] = 'x';
	  x += 1;
	}
      y += 1;
    }
  return (tab);
}

int	check_size_punto(char **tab)
{
  int	x;
  int	y;
  int	size;

  y = my_tablen(tab) - 1;
  x = my_strlen(tab[0]) - 1;
  if (y < x)
    size = y;
  else
    size = x;
  tab = put_my_crosses_punto(size, tab);
  my_printf("%y", tab);
  return (0);
}

int	check_my_punto(char *str)
{
  int	i;
  char	**tab;

  i = 0;
  while (str[i] != '\0' && (str[i] == '.' || str[i] == '\n'))
    i += 1;
  if (str[i] == '\0')
    {
      tab = my_str_to_wordtab(str);
      check_size_punto(tab);
      return (1);
    }
  else
    return (0);
}
