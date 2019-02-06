#ifndef HEADER_H_
#define HEADER_H_
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
	void insert(int i);
  int isfull();
	int dequeue();
	int isempty();
  void print();
};
#endif
