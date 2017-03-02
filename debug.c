/*
** debug.c for debug.c in /home/Babonneau_A/PSU_2016_tetris
** 
** Made by Babonneau Alexandre
** Login   <Babonneau_A@epitech.net>
** 
** Started on  Mon Feb 27 15:20:29 2017 Babonneau Alexandre
** Last update Thu Mar  2 11:35:33 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	debug_mode(char **av)
{
  my_printf("*** DEBUG MODE ***\n");
  print_left(av);
  print_right(av);
  print_turn(av);
  print_drop(av);
  print_quit(av);
  print_pause(av);
  print_next(av);
  print_level(av);
  print_size(av);
  open_dir();
  check_file_name();
  my_printf("Press any key to start Tetris\n");
}

void	print_left(char **av)
{
  int	i;
  int	j;

  i = 1;
  j = 0;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kl") == 0)
	my_printf("Key Left : %s\n", av[i + 1]);
      i++;
    }
}

void	print_right(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kr") == 0)
	my_printf("Key Right : %s\n", av[i + 1]);
      i++;
    }
}

void	print_turn(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kt") == 0)
	{
	  if (my_strcmp(av[i + 1], " ") == 0)
	    my_printf("Key Turn : (space)\n");
	  else
	    my_printf("Key Turn : %s\n", av[i + 1]);
	}
      i++;
    }
}

void	print_drop(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kd") == 0)
	my_printf("Key Drop : %s\n", av[i + 1]);
      i++;
    }
}
