#include <stdio.h>
/**
 * main - entry point
 *
 * retutn - always 0(success0
 */
int main(void)
{
int a;
long int b;
unsigned int c;
char d;
float f;
printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of a unsigned int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
