#include <stdio.h>

int main(void) {
    struct person {
	int age;
	char *name;
    };

    struct person  details = {29, "Joana Lawer"};
    printf("%s, age %u \n", details.name, details.age);
}
