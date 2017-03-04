/*
** my.h for my in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 13:11:27 2017 Benoit Bouton
** Last update Fri Mar  3 15:25:30 2017 Benoit Bouton
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses/curses.h>

/*libmyprintf.a*/
int	my_printf(const char *s, ...);

/*main.c*/
void	usage();

/*debug.c*/
void	debug_mode(char **av);
char	*print_left(char **av);
char	*print_right(char **av);
char	*print_turn(char **av);
char	*print_drop(char **av);

/*debug1.c*/
char	print_quit(char **av);
char	print_pause(char **av);
char	*print_next(char **av);
char	print_level(char **av);
char	*print_size(char **av);

/*debug2.c*/
void	check_equal(char *str);

/*lib/my_strcmp.c*/
int	my_strcmp(char *s1, char *s2);

/*lib/my_strcpy.c*/
char	*my_strcpy(char *dest, char *src);

/*open_dir.c*/
void	open_dir();
int	verif_tetrimino_ex(char *str, char *extension);
void	check_file_name();
void	check_first(char *str);
void	open_file(char *str);

/*debug_mode_base.c*/
void	debug_mode_base();

/*my_strrchr.c*/
char	*my_strrchr(const char *s, int c);

/*lib/my_strcat.c*/
char	*my_strcat(char *dest, char *src);

#endif /*MY_H_*/
