#include <stdio.h>
typedef enum {
   Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
   } WEEKDAY;


int main(void) {
   WEEKDAY day = Monday;

    if (day == 0) {
	printf("Thank God It's Monday!");
