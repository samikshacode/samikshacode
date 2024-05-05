#include<iostream>
#include<string>
using namespace std;

class date{
	private:
		int day;
		string month;
		string year;
    public:
    	
		void getdata()
		{
			cout<<"Enter the day:";
			cin>>day;
			cout<<endl;
			
			cout<<"Enter the month:";
			cin>>month;
			cout<<endl;
			
			cout<<"Enter the year:";
			cin>>year;
			cout<<endl;
		}
		
		void display()
		{
			cout<<"date:-"<<day;cout<<"/"<<month;cout<<"/"<<year<<endl;
		}
};

int main()
{
	date d1;
	d1.getdata();
	d1.display();
	return 0;
}
