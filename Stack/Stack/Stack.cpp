#include <iostream>
#include <string>
#include "Stack.hpp"

Stack::Stack()
{
	top = -1;
}

void Stack::push(int value)
{
	stack[++top] = value;
}
