/* Write a program to print the value of EOF. */
#include <stdio.h>

main()
{
int c;
while ((c = getchar()) != EOF)
   putchar(c);
   printf(%EOF\n);
}
