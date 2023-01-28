#include <stdio.h>

typedef enum {
    January, February, March, April, May, June,
    July, August, September, October, November, December
} YEARMONTH;

int main(void) {
    YEARMONTH  month = December;

    switch (month) {
	case 0:
	    /*do something*/
	    printf("We're still in January\n");
	    break;
	case 1:
	    printf("More chocolate in February\n");
	    break;
	case 2:
	    printf("Independence Day in March\n");
	    break;
	case 3:
	    printf("Easter is celebrated in April\n");
 	    break;
	default:
	    printf("More months to come.\n");
	    break;
    }
}
