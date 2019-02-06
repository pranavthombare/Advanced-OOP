#include<iostream>
#define SIZE 20

#include "header.h"

using namespace std;

queue::queue()
{
front=0;
rear=0;
}
queue::~queue()
{
	//destructor
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
