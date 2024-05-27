#include<iostream>
using namespace std;

class Point{
	int x,y;
public:
	Point(int a=0,int b=0){
		x=a;
		y=b;
		cout<<"Point() called\n";
	}
	void print()
	{
		cout<<"( "<<x<<" , "<<y<<" )"<<endl;
	}
	~Point()
	{
		cout<<"~Point() called\n";
	}


};

class Circle{
	//int a,b;
	Point centre;
	float radius;
public:
	
	Circle(int x,int y,float r):centre(x,y)
	{
	Point centre(x,y);
	radius=r;
	cout<<"Circle() called\n";
	}
	~Circle()
	{
		cout<<"~Circle() called/n";
	}
	void print()
	{
		cout<<"centre of circle ";
		centre.print();
		cout<<endl;
		cout<<"radius"<<radius<<endl;
	}
		

};

class Quadrilateral{
	Point w,x,y,z;
public:
	Quadrilateral(int a,int b,int c,int d, int f, int g,int h,int i):w(a,b),x(c,d),y(f,g),z(h,i)
	{
		Point w(a,b);
		Point x(c,d);
		Point y(f,g);
		Point z(h,i);
		cout<<"Quadrilateral() called\n";
		
	}
	~Quadrilateral()
	{
		cout<<"~Quadrilateral() called\n";
	}
	void print()
	{
		cout<<"point 1";w.print();cout<<endl;
		cout<<"point 2";x.print();cout<<endl;
		cout<<"point 3";y.print();cout<<endl;
		cout<<"point 4";z.print();cout<<endl;
	}
};

int main()
{
	Circle c (3,4,2.5);
c.print();
Quadrilateral d(1,0,0,1,1,1,0,0);
d.print();
system("pause");
return 0;
}
