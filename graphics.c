#include <stdio.h>
#include "point.h"

int main() {
	printf("Hello world!\n");

	point2 a = new_point2(0,0);
	point2 b = new_point2(5,5);
	printf("distance: %f",point2_distance(a,b));
	return 0;
}