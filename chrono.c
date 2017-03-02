/*
** chrono.c for chrono in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Mar  1 14:40:36 2017 Benoit Bouton
** Last update Thu Mar  2 17:26:33 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	chrono()
{
  int s;
  int m;

  s = 0;
  m = 0;
  while (1)
    {
      s++;
      if (s < 10)
	my_printf("Time : 0%dm : 0%ds\n", m, s);
      if (s >= 10)
	my_printf("Time : 0%dm : %ds\n", m, s);
      if (s > 58)
	{
	  m++;
	  s = -1;
	}
      sleep(1);
    }
}
