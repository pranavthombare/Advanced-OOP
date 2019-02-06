#ifndef HEADER_H_
#define HEADER_H_
#include<iostream>
#define SIZE 20

using namespace std;

template<typename T>
class queue
{
	T a[SIZE];
	int front;
	int rear;
public:
	queue();
	~queue();
	void insert(T x);
  bool isfull();
	void dequeue();
	bool isempty();
//  void print();
};

template<typename T>
queue<T>::queue()
{
front=0;
rear=0;
}

template<class T>
queue<T>::~queue()
{
//delete []a;
}

template<class T>
void queue<T>::insert(T i)
{
	if(queue<T>::isfull())
	{
		cout<<"\nQueue is Full!";
	}
	else{
	a[rear] = i;
	rear++;
	}
}

template<class T>
void queue<T>::dequeue()
{
	if(queue<T>::isempty())
	{
		cout<<"\nQueue Empty!\n";
		cout<<"-9999";
	}
	else
	cout<< a[front++];
}

template<class T>
bool queue<T>::isempty()
{
	if(front == rear)
		return 1;
	else
		return 0;
}

template<class T>
bool queue<T>::isfull()
{
	if(rear == SIZE)
		return 1;
  else
		return 0;
}

/*template<class T>
void queue<T>::print()
{
  for(int index=front;index<SIZE;index++)
  {
    if(index==front)
    cout<<a[index];
    else
    cout<<","<<a[index];
  }
}*/

#endif
