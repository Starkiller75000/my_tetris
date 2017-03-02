/*
** debug_mode_base.c for debug_mode_base in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Feb 28 15:42:03 2017 Benoit Bouton
** Last update Thu Mar  2 15:07:39 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

void	debug_mode_base()
{
  my_printf("*** DEBUG MODE ***\n");
  my_printf("Key Left : ^EOD\n");
  my_printf("Key Right : ^EOC\n");
  my_printf("Key Turn : ^EOA\n");
  my_printf("Key Drop : ^EOB\n");
  my_printf("Key Quit : q\n");
  my_printf("Key Pause : (space)\n");
  my_printf("Level : 1\n");
  my_printf("Size : 20*10\n");
  open_dir();
  check_file_name();
  my_printf("Press any key to start Tetris\n");
}
