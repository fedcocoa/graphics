#include <stdio.h>

typedef struct point2{
	double x;
	double y;
} point2;

typedef struct point3{
	double x;
	double y;
	double z;
} point3;

point2 new_point2(double x, double y);

point3 new_point3(double x, double y, double z);

void point2_print(point2 point);

void point3_print(point3 point);

double point2_distance(point2 a, point2 b);

double point3_distance(point3 a, point3 b);