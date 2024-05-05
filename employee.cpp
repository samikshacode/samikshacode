#include<iostream>
#include<iomanip>
using namespace std;
class employee{
	public:
		char name[50];
		char designation[10];
		char id[20];
		char salary[50];
		
		void getdata();
		void putdata();
};

void employee :: getdata()
{	
	cout<<"Enter the name of employee:";
	cin>>name;
	cout<<endl;
	
	cout<<"Enter the designation of employee:";
	cin>>designation;
	cout<<endl;
	
	cout<<"Enter the employee id:";
	cin>>id;
	cout<<endl;
	
	cout<<"Enter the salary of employee:";
	cin>>salary;
	cout<<endl;
}

void employee :: putdata()
{
	cout<<"Details of employee:"<<endl;
	cout<<"Name"<<setw(20);cout<<"Designation:"<<setw(20);cout<<"ID"<<setw(20);cout<<"Salary"<<endl;
	cout<<name<<setw(15);cout<<designation<<setw(20);cout<<id<<setw(25);cout<<salary<<endl;
}

int main()

{
	int i,n;
	cout<<"Enter the no of employee:";
	cin>>n;
	
	employee emp;
	for(i=0;i<n;i++)
	{
		emp.getdata();
	}
	
	for(i=0;i<n;i++)
	{
		emp.putdata();
	}
}
