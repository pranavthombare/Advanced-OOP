#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

int main()
{
    LinkedList<int>* list= new LinkedList<int>();
    for (int i = 0; i < 10; ++i)
    {
        list->add(rand() % 101);
    }
    list->print();
    cout << "List Length: " << list->length << std::endl;
    return 0;
}
