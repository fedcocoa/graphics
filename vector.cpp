#include <stdio.h>
#include <math.h>
#include "point.h"
#include "vector.h"


double Vector3::magnitude() {
	return sqrt(x*x + y*y + z*z);
}

double Vector2::magnitude() {
	return sqrt(x*x + y*y);
}

Vector2::Vector2() {
	this->x = 0;
	this->y = 0;
}

Vector2::Vector2(double x, double y) {
	this->x = x;
	this->y = y;
}

Vector3::Vector3() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Vector3::Vector3(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Vector2::print() {
	printf("x: %f\ny: %f",x,y);
}

void Vector3::print() {
	printf("x: %f\ny: %f\nz: %f",x,y,z);
}

