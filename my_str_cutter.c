/*
** my_str_cutter.c for my_str_cutter.c in /home/Romingo/CPE/CPE_2016_BSQ
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Thu Dec  8 09:21:00 2016 romain rousseau
** Last update Sun Dec 18 17:17:14 2016 romain rousseau
*/

#include "include/macro.h"

char	*my_str_cutter(char *str)
{
  char	*new_str;
  int	i;
  int	j;

  i = 0;
  while (str[i] != '\n')
    i += 1;
  i += 1;
  j = 0;
  new_str = malloc(sizeof(char) * (my_strlen(str) + 1));
  while (str[i] != '\0')
    {
      new_str[j] = str[i];
      i += 1;
      j += 1;
    }
  return (new_str);
}
