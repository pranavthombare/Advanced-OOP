#ifndef HEADER_H_
#define HEADER_H_
#include <iostream>
#include <cstdlib>

using namespace std;
template<typename T>
class Node
{
public:
    Node<T>* next;
    T data;
};

template<typename T>
class LinkedList
{
public:
    int length;
    Node<T>* head;

    LinkedList();
    ~LinkedList();
    void add(T d);
    void print();
};

template<typename T>
LinkedList<T>::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

template<typename T>
LinkedList<T>::~LinkedList(){
    std::cout << "LIST DELETED";
}

template<typename T>
void LinkedList<T>::add(T data){
    Node<T>* node = new Node<T>();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}

template<typename T>
void LinkedList<T>::print(){
    Node<T>* head = this->head;
    int i = 1;
    float sum=0,mean=0;
    while(head){
        std::cout <<"[Index="<< i << ":Data=" << head->data<<"]->";
        sum=sum+(head->data);
        head = head->next;
        i++;
    }
    cout<<"\nThe sum of the list is "<<sum<<endl;
    cout<<"\nThe mean of the list is "<<sum/i;
    cout<<endl;
}
#endif
