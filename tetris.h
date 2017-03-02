/*
** tetris.h for tetris in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 12:50:10 2017 Benoit Bouton
** Last update Thu Mar  2 16:32:36 2017 Benoit Bouton
*/

#ifndef TETRIS_H_
#define TETRIS_H_

void	my_swap(char *a, char *b);
int	my_strlen(char *str);
int	my_high_strlen(char *str);
int	my_lines_strlen(char *str);
int	display(char *str, char **tab, int j);

#endif /*TETRIS_H_*/
