/*
** BSQ.c for BSQ.c in /home/Romingo/CPE/CPE_2016_BSQ
**
** Made by romain rousseau
** Login   <Romingo@epitech.net>
**
** Started on  Mon Dec  5 11:40:41 2016 romain rousseau
** Last update Sun Dec 18 22:10:53 2016 romain rousseau
*/

#include "include/macro.h"

int	main2(char *buf)
{
  int	err;

  err = check_first_line(buf);
  if (err == 1)
    {
      my_printf("Error : Something is empty.\n");
      return (84);
    }
  buf = check_back_n(buf);
  err = check_my_nbr(buf);
  if (err == 1)
    {
      my_printf("Error : No number given at the beginning of the string.\n");
      return (84);
    }
  buf = my_str_cutter(buf);
  err = check_my_buf(buf);
  if (err == 1)
    return (84);
  err = check_my_punto(buf);
  if (err == 0)
    algo(buf);
  return (0);
}

int	main(int ac, char **av)
{
  struct stat	sb;
  int		file;
  char		*buf;

  if (ac != 2)
    {
      my_printf("Error : Two arguments are needed.\n");
      return (84);
    }
  stat(av[1], &sb);
  if ((file = open(av[1], O_RDONLY)) == -1)
    {
      my_printf("Error : Open failled.\n");
      return (84);
    }
  buf = malloc(sizeof(char) * sb.st_size + 1);
  if ((read(file, buf, sb.st_size)) == -1)
    {
      my_printf("Error : Read failled.\n");
      return (84);
    }
  main2(buf);
  close(file);
  return (0);
}
