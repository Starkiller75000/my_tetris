/*
** displayer.c for displayer in /home/Babonneau_A/PSU_2016_tetris
** 
** Made by Babonneau Alexandre
** Login   <Babonneau_A@epitech.net>
** 
** Started on  Mon Feb 27 16:26:00 2017 Babonneau Alexandre
** Last update Fri Mar  3 15:34:24 2017 Benoit Bouton
*/

#include "my.h"
#include "tetris.h"

int	display()
{
  WINDOW	*box;

  initscr();
  noecho();
  curs_set(FALSE);
  while (1)
    {
      clear();
      usleep(DELAY);
    }
  endwin();
  free(box);
  return (0);
}

/* int     display() */
/* { */
/*   //int   high; */
/*   //int   size_up; */
/*   //int   i; */

/*   //i = -1; */
/*   //high = my_lines_strlen(str); */
/*   //size_up = my_high_strlen(str); */
/*   initscr(); */
/*   keypad(stdscr, TRUE); */
/*   clear(); */
/*   curs_set(0); */
/*   refresh(); */
/*   //if (LINES > high && COLS > size_up) */
/*   //{ */
/*       //if (player_moves(tab, j) == 0) */
/*       //return (0); */
/*       //while (tab[++i]) */
/*       //mvprintw(i, 0, "%s\n", tab[i]); */
/*     } */
/* //else */
/* //printw("Veuillez agrandir le terminal"); */
/*   return (0); */
/* } */
