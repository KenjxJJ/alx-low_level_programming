#include <stdio.h>

/**
 * main - First function to be executed
 * @void - Null object params
 *
 * Description: Prints the size of inbuilt data types
 * based on the systems architectures.
 * Return: Null
 */
int main(void)
{
printf("Size of a %s: %d byte(s)\n", "char", sizeof(char));
printf("Size of an %s: %d byte(s)\n", "int", sizeof(int));
printf("Size of a %s: %d byte(s)\n", "long int", sizeof(long int));
printf("Size of a %s: %d byte(s)\n", "long long int", sizeof(long long));
printf("Size of a %s: %d byte(s) \n", "float", sizeof(float));
return (0);
}
