#include<iostream>
#include<math.h>
using namespace std;
int pi=3.14;
class line
{
	int x1,y1,x2,y2;
	float slope,intercept,xintr,yintr;
	public:
	line();
	line(int a,int b,int c,int d);
	void calSlope();
	void calInter();
	float getSlope();
	float getInter();

};

class circle
{
	int centerx,centery,rad;
	float cir,area;
	public:
	circle();
	circle(int cx,int cy);
	circle(int cx,int cy,int r);
	void calcArea();
	float getArea();
	void calCircume();
	float getCircume();
	int isTangent(int x1,int x2,int y1,int y2);
	int isTangent(int slope, int intercept);
	int isTangent(line tl);	
};
circle ::circle()
{
	centerx=0;
	centery=0;
	rad=0;
	cir=0;
	area=0;
}
circle::circle(int cx,int cy)
{
	centerx=cx;
	centery=cy;
	rad=4;
	

}
circle::circle(int cx,int cy,int r)
{
	centerx=cx;
	centery=cy;
	rad=r;
}
void circle:: calcArea()
{
	area=pi*rad*rad;

}
float circle::getArea()
{
	return area;

}
void circle::calCircume()
{
	cir=2*pi*rad;
}
float circle::getCircume()
{
	return cir;

}
int circle::isTangent(int x1,int x2,int y1,int y2)
{
	int d;
	d=(x2-x1)^2+(y2-y1)^2;
	d=sqrt(d);
	if(d==rad)
	{
	return 0;
	}
	else if(rad<d)
	{
		return -1;
	}
	else 
	{
		return 1;
	}
	
}
int circle::isTangent(int slope, int intercept)
{

}
int circle::isTangent(line tl)
{

}

line::line()
{
	x1=y1=x2=y2=slope=intercept=0;
}
line::line(int a,int b,int c,int d)
{
	x1=a;
	y1=b;
	x2=c;
	y2=d;

}
void line::calSlope()
{
	slope=(y2-y1)/(x2-x1);
}
float line:: getSlope()
{
	return slope;
}
void line::calInter()
{
	yintr=(y1)/slope*x1;
	xintr=(-(yintr))/slope;

}
float getInter();
int main()
{
	circle c1;
	circle c2(2,3);
	circle c3(3,4,5);
	c2.calcArea();
	c3.calCircume();
	cout<<"Area= "<<c2.getArea()<<endl;
	cout<<"Circumference= "<<c3.getCircume()<<endl;
	cout<<"isTangent: "<<c3.isTangent(2,3,4,5)<<endl;
	
	return 0;
}
