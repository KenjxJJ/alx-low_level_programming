
#include <stdio.h>


int main()
{
  int c;
  c=122;
  
  /* Check character numbers from 123 descending */
  while(c > 96 && c < 123)
  {
    putchar((char)c);
    c--;      
  }
  putchar('\n');
  return (0);
}
