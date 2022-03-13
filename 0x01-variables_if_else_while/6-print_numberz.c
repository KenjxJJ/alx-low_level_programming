#include <stdio.h>

int main()
{
  int digit;
  digit=48;

  /* Check digit below 10 */
  while(digit < 58)
  {
    putchar((char)digit);
    digit++;
  }
  putchar('\n');
  return (0);
}
