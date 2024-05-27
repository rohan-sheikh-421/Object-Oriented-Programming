class Shape {
protected:
	int length;
	int breadth;
	int height;
public:
	Shape();
	Shape(int a, int b,int c);
	
};

class Painting{
public:
	int getcost(int area);
};

class Square:public Shape, public Painting{
public:
	int getarea();
};

class Rectangle:public Shape, public Painting{
public:
	int getarea();
};

class Triangle:public Shape, public Painting{
public:int getarea();
};