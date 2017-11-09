/*
** macro.h for macro.h in /home/Romingo/PSU/PSU_2016_my_ls/include
** 
** Made by romain rousseau
** Login   <Romingo@epitech.net>
** 
** Started on  Mon Nov 28 17:39:44 2016 romain rousseau
** Last update Sun Dec 18 22:19:05 2016 romain rousseau
*/

#ifndef MACRO_H_
# define MACRO_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>


int	my_getnbr(char *);
int	my_printf(char *, ...);
void	my_putchar(char);
void	my_put_nbr(int);
void	my_puttab(char **);
void	my_putstr(char *);
char	*my_revstr(char *);
char	*my_strcat(char *, char *);
int	my_strcmp(char *, char *);
char	*my_strcpy(char *, char *);
char	*my_strdup(char *);
int	my_strlen(char *);
char	*my_strncpy(char *, char *, int);
char	*my_strncat(char *, char *, int);
char	*my_str_cutter(char *);
int	my_tablen(char **);
void	my_str_custom(char *);
void	my_nbr_custom(long int);
int	check_my_buf(char *);
char	**my_str_to_wordtab(char *);
int	algo(char *);
char	**set_my_tab(char **);
char	**add_zero_tab(char **);
char	**check_my_square(char **);
char	**put_my_crosses(char **, int, int, int);
char	**set_my_crosses(char **, char **);
int	check_tab_size(char **);
int	check_my_punto(char *);
int	check_my_nbr(char *);
int	check_first_line(char *);
char	*check_back_n(char *);
void	write_func(char *);
#endif /* !MACRO_H_ */
