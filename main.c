/*
** main.c for main in /home/Starkiller/tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Feb 27 12:35:20 2017 Benoit Bouton
** Last update Thu Mar  2 16:29:04 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	usage()
{
  my_printf("Usage: ./tetris [options]\n");
  my_printf("Options:\n");
  my_printf("--help\t\tDisplay this help\n");
  my_printf("  -l --level={num}\tStrat Tetris at level num (def: 1)\n");
  my_printf("  -kl --key-left={K}\tMove the tetrimino LEFT using the ");
  my_printf("K key (def: left arrow)\n");
  my_printf("  -kr --key-right={K}\tMove the tetrimino RIGHT using the ");
  my_printf("K key (def: right arrow)\n");
  my_printf("  -kt --key-turn={K}\tTURN the tetrimino clockwise 90d ");
  my_printf("using the K key (def: top arrow)\n");
  my_printf("  -kd --key-drop={K}\tDROP the tetrimino using the K ");
  my_printf("key (def: down arrow)\n");
  my_printf("  -kq --key-quit={K}\tQUIT the game using the K ");
  my_printf("key (def: 'Q' key)\n");
  my_printf("  -kp --key-pause={K}\tPAUSE/RESTART the game using ");
  my_printf("the K key (def: space bar)\n");
  my_printf("  --map-size={row,col}\tSet the numbers of rows and columns ");
  my_printf("of the map (def: 20,10)\n");
  my_printf("  -w --without-next\tHide next tetrimino (def: false)\n");
  my_printf("  -d --debug\t\tDebug mode (def: false)\n");
}

int	main(int ac, char **av)
{
  int	i;
  int	j;

  i = 1;
  j = 0;
  if (ac < 1)
    return (84);
  else
    {
      if (ac == 2)
	{
	  if (my_strcmp(av[1], "--help") == 0)
	    usage();
	  else if (my_strcmp(av[i], "-d") == 0 ||
		   my_strcmp(av[i], "--debug") == 0)
	    debug_mode_base();
	}
      else
	{
	  while (av[i] != '\0')
	    {
	      if (my_strcmp(av[i], "-d") == 0
		  || my_strcmp(av[i], "--debug") == 0)
		{
		  j++;
		  if (j == 1)
		    debug_mode(av);
		}
	      i++;
	    }
	}
    }
  return (0);
}
