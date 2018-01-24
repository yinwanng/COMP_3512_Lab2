#include <iostream>
#include "Stack.hpp"

using std::cout;
using std::endl;

int main()
{
	Stack s1;
	cout << "Stack object created." << endl;
	s1.print();
	s1.push(1);
	cout << "The value of 1 has been pushed to the stack." << endl;
	s1.print();
	s1.pop();
	cout << "The pop function has been invoked." << endl;
	s1.print();
	s1.push(9);
	s1.push(4);
	s1.push(7);
	cout << "The value of 9 has been pushed to the stack." << endl;
	cout << "The value of 4 has been pushed to the stack." << endl;
	cout << "The value of 7 has been pushed to the stack." << endl;
	s1.print();
	s1.pop();
	cout << "The pop function has been invoked." << endl;
	s1.push(10);
	s1.print();

	system("pause");
	return 0;
}

