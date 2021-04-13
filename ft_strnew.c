#include "libft.h"

char    *ft_strnew(size_t size)
{
  char  *str;
  
  if (!(str = (char *)malloc(sizeof(char) * size + 1)))
    return (NULL);
  str[size] = '\0';
  while (size--)
    str[size] = '\0';
  return (str);
}
