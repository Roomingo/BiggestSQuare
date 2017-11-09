/*
** my_str_to_wordtab.c for my_str_to_wordtab.c in /home/Romingo/PSU/PSU_2016_my_sokoban
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Wed Dec 14 17:55:58 2016 romain rousseau
** Last update Thu Dec 15 12:54:02 2016 romain rousseau
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	nb_lines(char *str)
{
  int	i;
  int	nb;

  i = 0;
  nb = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	nb += 1;
      i += 1;
    }
  return (nb);
}

int	nb_char(char *str, int i)
{
  int	i_stock;

  i_stock = i;
  while (str[i] != '\n' && str[i] != '\0')
    i += 1;
  i = i - i_stock;
  return (i);
}

char	**my_str_to_wordtab(char *str, char **tab)
{
  int	i;
  int	x;
  int	y;

  i = 0;
  y = 0;
  tab = malloc(sizeof(char *) * (nb_lines(str) + 1));
  while (str[i] != '\0')
    {
      tab[y] = malloc(sizeof(char) * (nb_char(str, i) + 1));
      x = 0;
      while (str[i] != '\n' && str[i] != '\0')
	{
	  tab[y][x] = str[i];
	  i += 1;
	  x += 1;
	}
      if (str[i] == '\n')
	{
	  y += 1;
	  i += 1;
	}
    }
  return (tab);
}
