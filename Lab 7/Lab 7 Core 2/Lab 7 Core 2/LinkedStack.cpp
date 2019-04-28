#include <iostream>
#include <utility>
using namespace std;

class LinkedStack {
	public:
void push(int x) {
 LinkedStack* newNode = new LinkedStack();
 newNode->value = x;
 newNode->next = this->next;
 this->next =  newNode;
}
int top() {
 return this->next->value;
}
void pop() {
 LinkedStack* temp = this->next;
 this->next = this->next->next;
 delete(temp);
}


 int value = 0;
private:
 LinkedStack* next = NULL;
};


int main() {
	LinkedStack ls;
	ls.push(1);
	cout << "pushed 1" << endl;
	ls.push(2);
	cout << "pushed 2" << endl;
	ls.push(3);
	cout << "pushed 3" << endl;
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	cout << "top is " << ls.top() << endl;
	ls.pop();
	return 0;
}	
