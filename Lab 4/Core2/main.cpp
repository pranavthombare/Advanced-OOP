#include <iostream>
#include <cstdlib>
#include "header.h"

using namespace std;

int main()
{
    LinkedList* list = new LinkedList();
    for (int i = 0; i < 10; ++i)
    {
        list->add(rand() % 100);
    }
    list->print();
    cout << "List Length: " << list->length << std::endl;
    delete list;
    return 0;
}
