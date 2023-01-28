#include <stdio.h>
//coditionals: check if the DEBUG constant is 0
/*const int DEBUG = 0;

int main(void) {
#if DEBUG == 0
    printf("I am NOT debugging\n");
#else
    printf("I am debugging\n");
#endif
}*/

// sympolic constants
/*#define VALUE 1
#define PI 3.14
#define NAME "Joana"*/

//macro
/*#define POWER(x) ((x) * (x))
printf("%u\n", POWER(4));*/

//if defined
#define VALUE 1

int main(void) {
#ifdef VALUE
    printf("Value is defined\n");
#else
    printf("Value is not defined\n");
#endif
}
