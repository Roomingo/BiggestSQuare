/*
** algo.c for algo.c in /home/Romingo/CPE/CPE_2016_BSQ
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Thu Dec  8 15:00:18 2016 romain rousseau
** Last update Sun Dec 18 18:15:54 2016 romain rousseau
*/

#include "include/macro.h"

char	**set_my_tab(char **tab)
{
  int	x;
  int	y;

  y = 0;
  x = my_strlen(tab[y]) - 3;
  while (tab[y])
    {
      x = 0;
      while (tab[y][x])
	{
	  if (tab[y][x] != 'o')
	    tab[y][x] = '1';
	  x = x + 1;
	}
      if (tab[y][x] != 'o')
	tab[y][x] = '1';
      y = y + 1;
    }
  return (tab);
}

char	**add_zero_tab(char **tab)
{
  int	x;
  int	y;

  y = 0;
  while (tab[y] != '\0')
    {
      x = 0;
      while (tab[y][x] != '\0')
	{
	  if (tab[y][x] == 'o')
	    tab[y][x] = '0';
	  x += 1;
	}
      y += 1;
    }
  return (tab);
}

char	**check_my_square(char **tab)
{
  int	x;
  int	y;
  int	val;

  y = my_tablen(tab) - 2;
  while (y >= 0)
    {
      x = my_strlen(tab[y]) - 3;
      while (x >= 0)
	{
	  if (tab[y][x] != '0')
	    {
	      val = tab[y][x+1];
	      if (tab[y+1][x] < val)
		val = tab[y+1][x];
	      if (tab[y+1][x+1] < val)
		val = tab[y+1][x+1];
	      tab[y][x] = val + 1;
	    }
	  x -= 1;
	}
      y -= 1;
    }
  return (tab);
}

char	**put_my_crosses(char **new_tab, int xmark, int ymark, int size)
{
  int	x;
  int	y;

  y = ymark;
  while (y < (ymark + size))
    {
      x = xmark;
      while (x < (xmark + size))
	{
	  new_tab[y][x] = 'x';
	  x += 1;
	}
      y += 1;
    }
  return (new_tab);
}

char	**set_my_crosses(char **new_tab, char **tab)
{
  int	x;
  int	xmark;
  int	y;
  int	ymark;
  int	size;

  y = 0;
  size = 0;
  while (tab[y] != '\0')
    {
      x = 0;
      while (tab[y][x+1] != '\0')
	{
	  if ((tab[y][x] - 48) > size)
	    {
	      size = (tab[y][x]) - 48;
	      ymark = y;
	      xmark = x;
	    }
	  x += 1;
	}
      y += 1;
    }
  new_tab = put_my_crosses(new_tab, xmark, ymark, size);
  return (new_tab);
}
