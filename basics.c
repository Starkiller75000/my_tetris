/*
** basics.c for basics in /home/Babonneau_A/PSU_2016_tetris
** 
** Made by Babonneau Alexandre
** Login   <Babonneau_A@epitech.net>
** 
** Started on  Mon Feb 27 17:50:06 2017 Babonneau Alexandre
** Last update Mon Feb 27 18:02:33 2017 Babonneau Alexandre
*/

#include "tetris.h"

void		my_swap(char *a, char *b)
{
  char		tmp;

  if (*a == '|' || *b == '|')
    return;
  if (*a == '-' || *b == '-')
    return;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}

int	my_high_strlen(char *str)
{
  int	i;
  int	b;
  int	tmp;

  i = 0;
  b = 0;
  tmp = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n' && b > tmp)
	{
	  tmp = b;
	  b = 0;
	}
      else if (str[i] == '\n')
	b = 0;
      b++;
      i++;
    }
  return (--tmp);
}

int	my_lines_strlen(char *str)
{
  int	i;
  int	c;

  i = 0;
  c = 0;
  while (str[i] != '\0')
    {
      if (str[i] == '\n')
	c++;
      i++;
    }
  return (c);
}
