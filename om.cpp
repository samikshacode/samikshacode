#include<iostream>
#include<stdlib.h>
#define MAX 2
using namespace std;
class matrix{
		int rows,cols,m[MAX][MAX];
	public:
		matrix()
		{
			int i,j;
			rows=0;
			cols=0;
			for(i=0;i<MAX;i++)
			{
				for(j=0;j<MAX;j++)
				{
					m[i][j]=0;
				}
			}
		}
		friend istream& operator >>(istream& in,matrix& c);
		friend ostream& operator <<(ostream& out,matrix& c);
	    matrix operator+(matrix& c);
		matrix operator-(matrix& c);	
};

istream & operator >>(std::istream& in, matrix& c)
{
	int i,j;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			in>>c.m[i][j];
		}
	}
	return in;
}
ostream & operator <<(std::ostream& out, matrix& c)
{
	int i,j;
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			out<<c.m[i][j]<<"\t";
		}
		out<<endl;
	}
	return out;
}
matrix matrix::operator +(matrix& c2)
{
	int i,j;
  matrix c3;
  
  cols=rows;
  for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
            c3.m[i][j]=m[i][j]+c2.m[i][j];
		}
	}
	return c3;
}
matrix matrix::operator -(matrix& c2)
{
	int i,j;
	matrix c3;
    cols=rows;
  for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
            c3.m[i][j]=m[i][j]-c2.m[i][j];
		}
	}
	return c3;
}
int main()
{
	matrix c1,c2,c3,c4;
cout<<"matrix1\n";
cin>>c1;
cout<<"\n matrix2\n";
cin>>c2;
cout<<"\naddition\n";
c3=c1+c2;
cout<<c3<<endl;

	
}


