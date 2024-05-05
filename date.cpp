#include<iostream>
using namespace std;
class date{

public:
        int day;
        int month;
        int year;
public:
date()
{

cout<<"Enter the day:"<<endl;
cin>>day;

cout<<"Enter the month"<<endl;
cin>>month;

cout<<"ENter the year"<<endl;
cin>>year;

cout<<"Date1:";
cout<<day;
cout<<"/"<<month;
cout<<"/"<<year<<endl;;
}

 date(int dd, int mm, int yy)
{
 
 cout<<"Date2:"<<dd;
 cout<<"/"<<mm;
 cout<<"/"<<yy;
}

void increment()
{
 
  cout<<"\nDate after increment :"<<day+1;
  cout<<"/"<<month+1;
  cout<<"/"<<year;
}

void days_in_month(){
int days;

if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
{
  days=31;
}
else if(month==4 || month==6 || month==9 || month==11)
{
  days=30;
}
else if(month==2)
{
   if(year%4==0)
{
  days=29;
}
}
else
{
 days=28;
}
cout<<"\ndays in month\n"<<days;
}



};

int main()
{
date a;
date d(12,3,2024);
a.increment();

a.days_in_month();
d.days_in_month();


return 0;

}
