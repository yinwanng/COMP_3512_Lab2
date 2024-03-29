#include <string>
//constexpr int array_size = 10;
#define SIZE 10
class Stack
{
public:
	Stack();
	void push(int);
	void pop();
	int top() const;
	bool empty() const;
	bool full() const;
	void print() const;
private:
	int stack[SIZE];
	int topIndex;
};