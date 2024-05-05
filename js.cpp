#include<iostream>
using namespace std;
class job{
	int p[10],d[10],j[3]={0,0,0};
	int n;
public:
	void get()
	{
		int i;
		cout<<"Enter the capacity:"<<endl;
		cin>>n;
	    cout<<"Enter the profit:"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>p[i];
			}
		cout<<"Enter the deadline"<<endl;
		for(i=0;i<n;i++)
		{
			cin>>d[i];
				}		
	}
	void display()
	{
		int i,j,temp;
		cout<<"Decreasing order of profit:";
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				if(p[i]<p[j])
				{
				  temp=p[i];
				  p[i]=p[j];
				  p[j]=temp;
				  temp=d[i];
				  d[i]=d[j];
				  d[j]=temp;	
				}
			}
		}
		for(i=0;i<n;i++)
		{
			cout<<p[i]<<" ";
		}
		cout<<endl;
		cout<<"corresponding deadlines:";
		for(i=0;i<n;i++)
		{
			cout<<d[i]<<" ";
		}
}
void sequence()
{
	int i;
	for(i=0;i<n;i++)
	{
		i=d[i];
		j[i]=p[i];
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		cout<<j[i];
	}
}

        
};
int main()
{
	job j1;
	j1.get();
	j1.display();
	j1.sequence();
}
