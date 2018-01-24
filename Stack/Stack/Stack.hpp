#include <string>
constexpr int array_size = 10;
class Stack
{
public:
	Stack();
	void push(int);
private:
	int stack[array_size];
	int top;
};




