/*
** algo.c for algo.c in /home/Romingo/clone/CPE_2016_BSQ
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Fri Dec  9 15:11:13 2016 romain rousseau
** Last update Sun Dec 18 20:02:08 2016 romain rousseau
*/

#include "include/macro.h"

int	algo(char *buf)
{
  char	**tab;
  char	**new_tab;
  int	err;
  int	y;

  y = 0;
  tab = my_str_to_wordtab(buf);
  new_tab = my_str_to_wordtab(buf);
  err = check_tab_size(tab);
  if (err == 1)
    return (84);
  tab = set_my_tab(tab);
  tab = add_zero_tab(tab);
  tab = check_my_square(tab);
  new_tab = set_my_crosses(new_tab, tab);
  while (new_tab[y] != '\0')
    {
      write_func(new_tab[y]);
      my_putchar('\n');
      y += 1;
    }
  return (0);
}
