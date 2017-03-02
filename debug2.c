/*
** debug2.c for debug2 in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Feb 28 14:26:28 2017 Benoit Bouton
** Last update Thu Mar  2 16:33:14 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	check_equal(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '=')
	my_printf("%s\n", str);
      i++;
    }
}
