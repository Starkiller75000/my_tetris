/*
** debug.c for debug.c in /home/Babonneau_A/PSU_2016_tetris
** 
** Made by Babonneau Alexandre
** Login   <Babonneau_A@epitech.net>
** 
** Started on  Mon Feb 27 15:20:29 2017 Babonneau Alexandre
** Last update Thu Mar  2 16:33:00 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	debug_mode(char **av)
{
  char	*left;
  char	*right;
  char	*turn;
  char	*drop;
  char	quit;
  char	pause;
  char	*next;
  char	level;
  char	*size;

  my_printf("*** DEBUG MODE ***\n");
  left = print_left(av);
  my_printf("Key Left : %s\n", left);
  right = print_right(av);
  my_printf("Key Right : %s\n", right);
  turn = print_turn(av);
  my_printf("Key Turn : %s\n", turn);
  drop = print_drop(av);
  my_printf("Key Drop : %s\n", drop);
  quit = print_quit(av);
  my_printf("Key Quit : %c\n", quit);
  pause = print_pause(av);
  my_printf("Key Pause : %c\n", pause);
  next = print_next(av);
  my_printf("%s", next);
  level = print_level(av);
  my_printf("Level : %c\n", level);
  size = print_size(av);
  printf("Size : %s\n", size);
  open_dir();
  check_file_name();
  my_printf("Press any key to start Tetris\n");
}

char	*print_left(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kl") == 0)
	return (av[i + 1]);
      i++;
    }
  return ("^EOD");
}

char	*print_right(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kr") == 0)
	return (av[i + 1]);
      i++;
    }
  return ("^EOC");
}

char	*print_turn(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kt") == 0)
	{
	  if (my_strcmp(av[i + 1], " ") == 0)
	    return ("(space)");
	  else
	    return (av[i + 1]);
	}
      i++;
    }
  return ("^EOA");
}

char	*print_drop(char **av)
{
  int	i;

  i = 1;
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], "-kd") == 0)
	return (av[i + 1]);
      i++;
    }
  return ("^EOB");
}
