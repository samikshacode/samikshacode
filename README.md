#include<iostream>
using namespace std;
#define max_size 5
class stack{

    private:
          int item;
          int s[max_size];
int top;
public:

    stack()
{
   top=0;
}
      int push(int item)
{
     if(top==max_size)
{
   cout<<"overflow!";
}
else{
      top=top+1;
     s[top]=item;
}
}

int pop()
{
  if(top==-1)
{
  cout<<"underflow";
}
else
{
  top=top-1;
}
}

void show()
{
  int i;
    for(i=1;i<=top;i++)
{
  cout<<s[i]<<endl;
}
}

};

class queue{
private:	
	int element;
	int q[max_size];
	int rear;
	int front;
public:
    queue()
	{
		rear=0;
		front=0;
		}
void enqueue(int element)
{
	if(rear==max_size)
	{
		cout<<"overflow!";
	}
	else
	{
		q[rear++]=element;
	}
			}
			
void dequeue()
{
	if(front==rear)
	{
		cout<<"underflow";
	}
	else
	{
		front++;
	}
				}				
void display(){
	int i;
	for(i=front;i<rear;i++)
	{
		cout<<q[i]<<endl;
	}
}					
	
};

int main()
{
   
  stack st;
  queue qu;
cout<<"after pushing:";
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);

st.show();
cout<<endl;

cout<<"after pop:";
st.pop();
st.pop();
st.show();
cout<<endl;

cout<<"Enqueue:";
qu.enqueue(1);
qu.enqueue(2);
qu.enqueue(3);
qu.enqueue(4);


qu.display();
cout<<endl;
cout<<"dequeue:";
qu.dequeue();
qu.dequeue();
qu.display();




}
  
