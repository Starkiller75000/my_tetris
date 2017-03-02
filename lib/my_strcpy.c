/*
** my_strcpy.c for my_strcpy in /home/Starkiller/CPool_Day06
** 
** Made by Bouton Benoit
** Login   <Starkiller@epitech.net>
** 
** Started on  Mon Oct 10 08:52:55 2016 Bouton Benoit
** Last update Thu Mar  2 17:28:26 2017 Benoit Bouton
*/

#include "../my.h"
#include "../tetris.h"

char	 *my_strcpy(char *dest, char *src)
{
  int	 i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
