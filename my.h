/*
** my.h for my in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 13:11:27 2017 Benoit Bouton
** Last update Thu Mar  2 15:36:51 2017 Benoit Bouton
*/

#ifndef MY_H_
#define MY_H_

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
void	print_quit(char **av);
void	print_pause(char **av);
void	print_next(char **av);
void	print_level(char **av);
void	print_size(char **av);

/*debug2.c*/
void	check_equal(char *str);

/*lib/my_strcmp.c*/
int	my_strcmp(char *s1, char *s2);

/*lib/my_strcpy.c*/
char	*my_strcpy(char *dest, char *src);

/*open_dir.c*/
void	open_dir();
static int	verif_tetrimino_ex(char *str, char *extension);
void	check_file_name();
void	check_first(char *str);
void	open_file(char *str);

/*debug_mode_base.c*/
void	debug_mode_base();

/*my_strrchr.c*/
char	*my_strrchr(const char *s, int c);

#endif /*MY_H_*/
