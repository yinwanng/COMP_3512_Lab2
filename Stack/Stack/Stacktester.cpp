#include <iostream>
#include "Stack.hpp"

using std::cout;
using std::endl;

int main()
{
	Stack s1;
	Stack s2;

	s1.print();
	s1.push(1);
	s1.print();
	s1.pop();
	s1.print();



	system("pause");
	return 0;
}

