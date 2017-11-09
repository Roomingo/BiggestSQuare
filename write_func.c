/*
** write_func.c for write_func.c in /home/Romingo/jeu_de_test
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Thu Dec 15 12:25:38 2016 romain rousseau
** Last update Thu Dec 15 12:36:43 2016 romain rousseau
*/

#include <unistd.h>
#include "include/macro.h"

void	write_func(char *str)
{
  int	nb;

  nb = my_strlen(str);
  write(1,str, nb);
}
