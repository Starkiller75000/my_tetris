/*
** tetris.h for tetris in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 12:50:10 2017 Benoit Bouton
** Last update Fri Mar  3 15:31:46 2017 Benoit Bouton
*/

#ifndef TETRIS_H_
#define TETRIS_H_

#define DELAY 300000
#define SIZE 10000

void	my_swap(char *a, char *b);
int	my_strlen(char *str);
int	my_high_strlen(char *str);
int	my_lines_strlen(char *str);
int	display();

#endif /*TETRIS_H_*/
