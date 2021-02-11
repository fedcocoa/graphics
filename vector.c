#include <stdio.h>
#include <math.h>
#include "point.h"
#include "vector.h"


double vector3_magnitude(vector3 vector) {
	return sqrt(pow(vector.x,2)+pow(vector.y,2)+pow(vector.z,2));
}

double vector2_magnitude(vector2 vector) {
	return sqrt(pow(vector.x,2)+pow(vector.y,2));
}

vector2 new_vector2(double x, double y) {
	vector2 return_vector;
	return_vector.x = x;
	return_vector.y = y;
	return_vector.magnitude = vector2_magnitude(return_vector);
	return return_vector;
}

vector3 new_vector3(double x, double y, double z) {
	vector3 return_vector;
	return_vector.x = x;
	return_vector.y = y;
	return_vector.z = z;
	return_vector.magnitude = vector3_magnitude(return_vector);
	return return_vector;
}

void vector2_print(vector2 vector) {
	printf("x: %f\ny: %f",vector.x,vector.y);
}

void vector3_print(vector3 vector) {
	printf("x: %f\ny: %f\nz: %f",vector.x,vector.y,vector.z);
}

