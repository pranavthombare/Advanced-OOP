#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <cstdlib>

using namespace std;

class Node
{
public:
    Node* next;
    int data;
};


class LinkedList
{
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();
    void add(int data);
    void print();
};
#endif
