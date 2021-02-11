#include <stdio.h>
#include "point.h"
#include "vector.h"

int main() {
	printf("Hello world!\n");

	vector3 a = new_vector3(3,4,5);
	printf("%f",a.magnitude);
	return 0;
}