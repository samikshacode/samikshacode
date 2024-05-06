#include<iostream>
using namespace std;
class complex{
    private:
        int a,b;
  public:

void get();
void show();
complex operator+(complex c);
complex operator-(complex c);
  
};


     void complex:: get()
{
   cout<<"Enter the complex number a,b:";
   cin>>a>>b;
  }
 void complex::show()
{
  cout<<a<<"+"<<"i"<<b;
}


complex complex::operator+(complex c)
{
  complex o;
  o.a=a+c.a;
  o.b=b+c.b;
return (o);
  
}

complex complex::operator-(complex c)
{
   complex o;
   o.a=a-c.a;
   o.b=b-c.b;
return (o);
}
int main()
{
  complex c1,c2,r1,r2;
  
  cout<<"get values"<<endl;
  c1.get();
  c2.get();
  cout<<"first complex number:"<<endl;
  c1.show();
  cout<<"second complex number:"<<endl;
   c2.show();
 cout<<"answer:";
     r1=c1+c2;
r1.show();
  r2=c1-c2;
  r2.show();
  }

  

