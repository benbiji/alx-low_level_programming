#include <stdio.h>
/**
 * main - A program that prints the size of various computer types
 * Return: Always 0
 */
int main(void)
{
printf("Size of a char: %i byte(s)\n", sizeoff(char));
printf("Size of an int: %i byte(s)\n", sizeoff(int));
printf("Size of a long int: %i byte(s)\n", sizeoff(long int));
printf("Size of a long long int: %i byte(s)\n", sizeoff(long long int));
printf("Size of a float: %i byte(s)\n", sizeoff(float));
return (0);
}




