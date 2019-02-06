#include<iostream>
#define SIZE 20

#include "header.h"
using namespace std;

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
