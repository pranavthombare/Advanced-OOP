#include <iostream>
using namespace std;

class ArrayStack {
	public: 
void push (int x) {
  data[size] = x;
  size++;
}

int top () {
  return data[size - 1];
}

void pop() {
  size--;
}
	private:
		int data[500];
		int size = 0;
};

int main() {
	ArrayStack as;
	as.push(1);
	cout << "pushed 1" << endl;
	as.push(2);
	cout << "pushed 2" << endl;
	as.push(3);
	cout << "pushed 3" << endl;
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	cout << "top is " << as.top() << endl;
	as.pop();
	return 0;
}	
