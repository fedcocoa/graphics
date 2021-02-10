#include <stdio.h>
#include "point.h"

int main() {
	printf("Hello world!\n");

	point3 a = new_point3(0,0,0);
	point3 b = new_point3(5,5,5);
	printf("distance: %f",point3_distance(a,b));
	return 0;
}