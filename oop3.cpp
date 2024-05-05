#include<iostream>
#include<string>
using namespace std;
class syai_s2{

private:
string student_name;
string prn;
string course_name;
float grade;
int grace_marks;

public:
void getdata()
{

 //cout<<"Enter the number of student:"<<endl;
 //cin>>no_of_student;
cout<<"Enter the name of student:"<<endl;
cin>>student_name;

cout<<"Enter the prn of student:"<<endl;
cin>>prn;

cout<<"Enter the course name :"<<endl;
cin>>course_name;

cout<<"ENter the grade of student:"<<endl;
cin>>grade;



}

void calculate_gracemarks(){

if(grade>9)
{
  grace_marks=5;
}
else if(grade>8 && grade<9)
{
  grace_marks=4;
}

else if(grade>7 && grade<8)
{
  grace_marks=3;
}
else if(grade>6 && grade<7)
{
 grace_marks=2;
}
else 
{
grace_marks=0;
}
}

void displaydata()
{
//cout<<"Number of student:"<<no_of_student<<endl;
cout<<"Student name:"<<student_name<<endl;
 cout<<"student prn:"<<prn<<endl;
 cout<<"Course name:"<<course_name<<endl;
 cout<<"Grade:"<<grade<<endl;
 cout<<"Grace marks:"<<grace_marks<<endl;
 
}
};

int main()
{
  syai_s2 s35;
int i,n;
cout<<"No of students:";
cin>>n;
for(i=0;i<n;i++)
{
s35.getdata();
s35.calculate_gracemarks();
s35.displaydata();
}
}
