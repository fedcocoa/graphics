#include <stdio.h>
#include "point.h"
#include "vector.h"

int main() {
	printf("Hello world!\n");

	Vector2 a = Vector2(3,4);
	printf("%f",a.magnitude());
	return 0;
}