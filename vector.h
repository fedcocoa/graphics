#include "point.h"
#ifndef VECTOR_HEADER
#define VECTOR_HEADER

typedef struct vector2{
	double x;
	double y;
	double magnitude;
} vector2;

typedef struct vector3{
	double x;
	double y;
	double z;
	double magnitude;
} vector3;

vector2 new_vector2(double x, double y);

vector3 new_vector3(double x, double y, double z);

void vector2_print(vector2 vector);

void vector3_print(vector3 vector);

double magnitude(vector3 vector);

#endif