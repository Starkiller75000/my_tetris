/*
** tetris.h for tetris in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 12:50:10 2017 Benoit Bouton
** Last update Thu Mar  2 15:21:58 2017 Benoit Bouton
*/

#ifndef TETRIS_H_
#define TETRIS_H_

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ncurses.h>
#include <dirent.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

void	my_swap(char *a, char *b);
int	my_strlen(char *str);
int	my_high_strlen(char *str);
int	my_lines_strlen(char *str);
int	display(char *str, char **tab, int j);

#endif /*TETRIS_H_*/
