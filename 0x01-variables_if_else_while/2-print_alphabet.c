
#include <stdio.h>


int main()
{
  int c;
  c=97;
  
  while(c > 96 && c < 123)
    {
      putchar((char)c);
      c++;      
    }
  putchar('\n');
  return (0);
}
