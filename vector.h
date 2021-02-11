#include "point.h"
#ifndef VECTOR_HEADER
#define VECTOR_HEADER

class Vector2 {
	public:
		double x,y;
		Vector2();
		Vector2(double x, double y);
		void print();
		double magnitude();
};

class Vector3 {
	public:
		double x,y,z;
		Vector3();
		Vector3(double x, double y, double z);
		void print();
		double magnitude();
};

#endif