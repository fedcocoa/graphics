#ifndef POINT_HEADER
#define POINT_HEADER

class Point2 {
	public:
		Point2();
		Point2(double x, double y);
		void print();
		static double distance(Point2 a, Point2 b);
		double distance_to(Point2 to);
		double x,y;
	
};

class Point3 {
	public:
		Point3();
		Point3(double x, double y, double z);
		void print();
		static double distance(Point3 a, Point3 b);
		double distance_to(Point3 to);
		double x,y,z;
};

#endif