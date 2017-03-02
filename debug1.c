/*
** debug1.c for debug1 in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 16:35:11 2017 Benoit Bouton
** Last update Wed Mar  1 14:59:37 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	print_quit(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kq") == 0)
	my_printf("Key Quit : %s\n", av[i + 1]);
      i++;
    }
}

void	print_pause(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kp") == 0)
	my_printf("Key Pause : %s\n", av[i + 1]);
      i++;
    }
}

void	print_next(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-w") == 0 ||
	  my_strcmp(av[i], "--without-next") == 0)
	my_printf("Next : No\n");
      i++;
    }
}

void	print_level(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-l") == 0)
	my_printf("Level : %s\n", av[i + 1]);
      i++;
    }
}

void	print_size(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (strcmp(av[i], "--map-size=") == 0)
	check_equal(av[i]);
      i++;
    }
}
