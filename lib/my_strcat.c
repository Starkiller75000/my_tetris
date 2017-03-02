/*
** my_strcat.c for my_strcat in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Thu Mar  2 16:05:50 2017 Benoit Bouton
** Last update Thu Mar  2 16:13:45 2017 Benoit Bouton
*/

#include "../tetris.h"
#include "../my.h"

char	*my_strcat(char *dest, char *src)
{
  int	len;
  int	i;

  len = my_strlen(dest);
  i = 0;
  while (src[i])
    {
      dest[len + i] = src[i];
      i = i + 1;
    }
  dest[len + i] = '\0';
  return (dest);
}
