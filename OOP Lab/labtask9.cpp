#include<iostream>
using namespace std;
#include"Header.h"

Shape::Shape()
{
}
	Shape::Shape(int l=10,int b=5,int h=8)
	{
		length=l;
		breadth=b;
		height=h;
	}

int Painting::getcost(int area)
{
	int cost=10;
	int price;
	price=cost*area;

	cout<<"Total Cost: "<<price<<endl;

}

 int Square::getarea()
	{
		int area;
		area=length*length;
		return area;
		cout<<"Area of Square: "<<area<<endl;
	}

int Rectangle::getarea()
	{
		int area;
		area=length*breadth;
		return area;
		cout<<"Area of Rectangle: "<<area<<endl;
	}
			
int Triangle::getarea()
	{
		int area;
		area=(length*breadth)/2;
		return area;
		cout<<"Area of Triangle: "<<area<<endl;
	}

int main()
{
	Shape obj(10,5,15);

	Painting obj5;

	Square obj2;
	obj2.getarea();
	obj5.getcost(obj2.getarea());

	Rectangle obj3;
	obj3.getarea();
	obj5.getcost(obj3.getarea());

	Triangle obj4;
	obj4.getarea();
	obj5.getcost(obj4.getarea());

	system("pause");
	return 0;
}