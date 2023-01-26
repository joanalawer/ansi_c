#include <stdio.h>
#include <string.h>
/* get the value of he variable an addres is pointing to */
int main(void) {
   /* int age = 37;
    int  *address = &age;
   printf("%u", *address);
}*/

/* dclare an age variable and use a pointer to initialize the value */
   /* int age;
    int *address = &age;
    *address = 37;
    printf("%u", *address);
}*/

/* get value of items in an array */
    char name[7] = "String";
    printf("The address value of the first element S is: %p \n", &name);
    printf("%c \n", *(name + 1));
    printf("The element at index 2 is: %c \n", *(name + 2));
    printf("%c \n", *(name + 3));
    printf("%c \n", *(name + 4));
    printf("%c \n", *(name + 5));
}
