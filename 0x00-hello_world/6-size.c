#include <stdio.h>
/**
* main - print out sizes od data types in C
* code by Opadiran
* Return: 0
*/
int main(void)
{
char a;
int b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(s)\n", sizeof(a));
printf("Size of an int: %lu byte(s)\n", sizeof(b));
printf("Size of a long  int: %lu byte(s)\n", sizeof(c));
printf("Size of a long long  int: %lu byte(s)\n", sizeof(d));
printf("Size of a float: %lu byte(s)\n", sizeof(f));
return (0);
}
