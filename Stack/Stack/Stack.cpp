#include <iostream>
#include <string>
#include "Stack.hpp"

Stack::Stack()
{
	topIndex = -1;
}

void Stack::push(int value)
{
	stack[++topIndex] = value;
}

void Stack::pop() 
{
	stack[topIndex--];
}

int Stack::top() const
{
	return stack[topIndex];
}

bool Stack::empty() const
{
	if (topIndex == -1) {
		return true;
	}
	return false;
}
