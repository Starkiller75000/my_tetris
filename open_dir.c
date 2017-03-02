/*
** open_dir.c for open_dir in /home/Starkiller/PSU_2016_tetris
** 
** Made by Benoit Bouton
** Login   <Starkiller@epitech.net>
** 
** Started on  Tue Feb 28 15:17:51 2017 Benoit Bouton
** Last update Thu Mar  2 16:07:57 2017 Benoit Bouton
*/

#include "tetris.h"
#include "my.h"

#define SIZE 10000

void	open_dir()
{
  DIR	*dir;
  struct dirent	*file;
  int	ret;
  int	i;

  i = 0;
  dir = opendir("./tetriminos");
  if (dir == NULL)
    {
      perror("open");
      exit (1);
    }
  while ((file = readdir(dir)) != NULL)
    {
      if (file->d_name[0] != '.')
	{
	  if (ret = verif_tetrimino_ex(file->d_name, "tetrimino") == 1)
	    i++;
	}
    }
  if (closedir(dir) == -1)
    {
      perror("close");
      exit (-1);
    }
  my_printf("Tetriminos : %d\n", i);
}

static int	verif_tetrimino_ex(char *str, char *extension)
{
  int	i;
  char	*p;

  if (str != NULL && extension != NULL)
    {
      p = my_strrchr(str, '.');
      if (p != NULL)
	{
	  if (my_strcmp(++p, extension) == 0)
	    i = 1;
	}
    }
  return (i);
}

void	check_file_name()
{
  DIR	*dir;
  struct dirent	*file;
  int	ret;

  dir = opendir("./tetriminos");
  if (dir == NULL)
    {
      perror("open");
      exit(1);
    }
  while ((file = readdir(dir)) != NULL)
    {
      if (file->d_name[0] != '.')
	{
	  if (ret = verif_tetrimino_ex(file->d_name, "tetrimino") == 1)
	    {
	      check_first(file->d_name);
	      open_file(file->d_name);
	    }
	}
    }
  if (closedir(dir) == -1)
    {
      perror("close");
      exit(-1);
    }
}

void	check_first(char *str)
{
  int	i;

  i = 0;
  if (str[0] >= '0' && str[0] <= '9')
    my_printf("Tetriminos : Name %c : ", str[0]);
  else
    {
      my_printf("Tertiminos : Name ");
      while (str[i] != '.')
	{
	  my_printf("%c", str[i]);
	  i++;
	}
      my_printf(" : ");
    }
}

void	open_file(char *str)
{
  FILE	*fs;
  char	*buf;
  char	filepath[40];
  int	i;

  i = 5;
  my_strcpy(filepath, "./tetriminos/");
  my_strcat(filepath , str);
  buf = malloc(sizeof(char) * SIZE + 1);
  fs = fopen(filepath, "r");
  if (fs == NULL)
    {
      perror("fopen");
      exit(1);
    }
  else
    {
      fread((void*) buf, SIZE, 1, fs);
      buf[SIZE + 1] = '\0';
      if (buf[0] >= '0' && buf[0] <= '9' && buf[2] >= '0' && buf[2] <= '9')
	{
	  my_printf("Size : %c*%c : ", buf[0], buf[2]);
	  my_printf("Color %c :", buf[4]);
	  while (buf[i] != '\0')
	    {
	      my_printf("%c", buf[i]);
	      i++;
	    }
	}
      else
	my_printf("Error : \n");
    }
  fclose(fs);
}
