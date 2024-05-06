#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
const float pi=3.14;
class calculate{

public:
     float ans;
     
          
public:
 float area(float rad)
{

cout<<"Enter the radius:"<<endl;
   cin>>rad;

   ans=pi*rad*rad;
  cout<<"Area of circle:"<<endl;
  cout<<ans;
}

int area (int side)
{
   cout<<"Enter the side of square:";
   cin>>side;
   ans=side*side;
   cout<<"Area of square:"<<endl;;
  cout<<ans;
}
int area (int l, int b)
{
   cout<<"Enter the length  of rectangle:"<<endl;
   cin>>l;
cout<<"Enter the breadth of rectangle:"<<endl;
   cin>>b;
   ans=l*b;
  cout<<"Area of rectangle:"<<endl;
  cout<<ans;
}
float area (float ba, int h)
{
   cout<<"Enter the base of triangle:"<<endl;
   cin>>ba;
cout<<"Enter the height of riangle:"<<endl;
   cin>>h;
   
   ans=ba*h;
cout<<"Area of triangle:";
  cout<<ans;
}
};
int main()
{

calculate c;
int side,l,b,h;
float rad,ba;
c.area(rad);
c.area(side);
c.area(l,b);
c.area(ba,h);
}
