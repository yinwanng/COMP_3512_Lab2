#include <string>
constexpr int array_size = 10;
class Stack
{
public:
	Stack();
	void push(int);
	void pop();
	int top() const;
	bool empty() const;
private:
	int stack[array_size];
	int topIndex;
};




