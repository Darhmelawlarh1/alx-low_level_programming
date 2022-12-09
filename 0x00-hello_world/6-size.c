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
printf("Size of a char: %zu byte(S)\n", sizeof(a));
printf("Size of an int: %zu byte(S)\n", sizeof(b));
printf("Size of a long  int: %zu byte(S)\n", sizeof(c));
printf("Size of a long long  int: %zu byte(S)\n", sizeof(d));
printf("Size of a float: %zi byte(S)\n", sizeof(f));
return (0);
}
