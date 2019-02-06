#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

void LinkedList::add(int data){
    Node* node = new Node();
    node->data = data;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void LinkedList::print(){
    Node* head = this->head;
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
