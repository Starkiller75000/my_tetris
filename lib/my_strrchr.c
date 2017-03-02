/*
** my_strrchr.c for my_strrchr in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Wed Mar  1 16:49:41 2017 Benoit Bouton
** Last update Wed Mar  1 16:54:23 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

char	*my_strrchr(const char *s, int c)
{
  int	len;

  len = my_strlen((char *)s);
  while (0 != len && s[len] != (char)c)
    len--;
  if (s[len] == (char)c)
    return ((char *)&s[len]);
  return (NULL);
}
