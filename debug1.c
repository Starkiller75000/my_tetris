/*
** debug1.c for debug1 in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 16:35:11 2017 Benoit Bouton
** Last update Thu Mar  2 16:08:45 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

char	print_quit(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kq") == 0)
	return (av[i + 1][0]);
      i++;
    }
  return ('q');
}

char	print_pause(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kp") == 0)
	return (av[i + 1][0]);
      i++;
    }
  return ('p');
}

char	*print_next(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-w") == 0 ||
	  my_strcmp(av[i], "--without-next") == 0)
	return ("Next : No\n");
      i++;
    }
  return ("Next : yes\n");
}

char	print_level(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-l") == 0)
	return (av[i + 1][0]);
      i++;
    }
  return ('1');
}

char	*print_size(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "--map-size=") == 0)
	check_equal(av[i]);
      i++;
    }
  return ("20*10");
}
