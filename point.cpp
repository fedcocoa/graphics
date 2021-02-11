#include <stdio.h>
#include <math.h>
#include "point.h"

Point2::Point2() {
	this->x = 0;
	this->y = 0;
}

Point2::Point2(double x, double y) {
	this->x = x;
	this->y = y;
}

Point3::Point3() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Point3::Point3(double x, double y, double z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Point2::print() {
	printf("x: %f\ny: %f",this->x,this->y);
}

void Point3::print() {
	printf("x: %f\ny: %f\nz: %f",x,y,z);
}

double Point2::distance(Point2 a, Point2 b) {
	return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2));
}

double Point2::distance_to(Point2 to) {
	return sqrt(pow(to.x-x,2)+pow(to.y-y,2));
}

double Point3::distance(Point3 a, Point3 b) {
	return sqrt(pow(b.x-a.x,2)+pow(b.y-a.y,2)+pow(b.z-a.z,2));
}

double Point3::distance_to(Point3 to) {
	return sqrt(pow(to.x-x,2)+pow(to.y-y,2)+pow(to.z-z,2));
}