#include<iostream>
#define SIZE 20

using namespace std;
class queue
{
	int a[SIZE]={0};
	int front;
	int rear;
public:
	queue();
	~queue();
  void print();
	void insert(int i);
	int remove();
	int isempty();
	int isfull();
};

queue::queue()
{
front=0;
rear=0;
}
queue::~queue()
{
}
void queue::print()
{
  for(int index=front;index<SIZE;index++)
  {
    if(index==front)
    cout<<a[index];
    else
    cout<<","<<a[index];
  }
}
void queue::insert(int i)
{
if(isfull())
{
	cout<<"\nQueue is Full!";
	return;
}
a[rear] = i;
rear++;
}
int queue::remove()
{
if(isempty())
{
	cout<<"\nQueue Empty!\n";
	return (-9999);
}

return(a[front++]);
}
int queue::isempty()
{
if(front == rear)
	return 1;
else
	return 0;
}
int queue::isfull()
{
if(rear == SIZE)
	return 1;
else
	return 0;
}

int main()
{
queue q;
int input;
int choice=0;

while(choice!=1)
{
cout<<"\nInsert the number to the queue:";
cin>>input;
q.insert(input);
cout<<"/nDo you want to insert again?? (0 for yes, 1 for no)";
cin>>choice;
}

choice=0;
while(choice!=1)
{
cout<<"\nRemove the number from the queue?? (0 for yes, 1 for no)";
cin>>choice;
if(choice==0)
cout<<""<<q.remove()<<endl;
q.print();
cout<<endl;
}


}
