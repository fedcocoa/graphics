#include <stdio.h>
#include <math.h>
#include "point.h"

point2 new_point2(double x, double y) {
	point2 return_point;
	return_point.x = x;
	return_point.y = y;
	return return_point;
}

point3 new_point3(double x, double y, double z) {
	point3 return_point;
	return_point.x = x;
	return_point.y = y;
	return_point.z = z;
	return return_point;
}

void point2_print(point2 point) {
	printf("x: %f\ny: %f",point.x,point.y);
}

void point3_print(point3 point) {
	printf("x: %f\ny: %f\nz: %f",point.x,point.y,point.z);
}

double point2_distance(point2 a, point2 b) {
	return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}

double point3_distance(point3 a, point3 b) {
	return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)+pow(b.z-a.z,2));
}