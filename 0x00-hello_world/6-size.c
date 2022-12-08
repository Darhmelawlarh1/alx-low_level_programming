#include <stdio.h>
/**
* main - print out sizes od data types in C
* code by Opadiran
* Return: 0
*/
int main(void)
{
int a;
char b;
long int c;
long long int d;
float f;
printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(b));
printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(S)\n", (unsigned long)sizeof(f));
return (0);
}
