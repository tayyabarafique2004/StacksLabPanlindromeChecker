#include<iostream>
using namespace std;
typedef int itemType;
class Stack {
private:
	int max = 5;
	int top ;
	itemType* arr = new itemType[max];
public:

	Stack()
	{
		top = -1;	
	}
	bool isEmpty() const;
	bool isFull() const;
	void push(itemType);
	void pop();
};



bool Stack::isEmpty() const
{
	return (top==-1);
}

bool Stack::isFull() const
{
	return (top == max-1);
}

void Stack::push(itemType num)
{
	if (isFull()) {
		cout << "Stack Overflow";
		return;
	}
	top++;
	arr[top] = num;
}

void Stack::pop()
{
	if (isEmpty())
	{
		cout << "Stack Underflow";
		return;
	}
	top--; //removed
}


int main()
{
	Stack stack;
	stack.push(2);
	stack.push(3);
	cout << "Pop both items: ";
	 stack.pop();
	 if (stack.isEmpty())
		 cout << "empty ";
	 else
		 cout << "Not Empty";
	 stack.pop();
	 if (stack.isEmpty())
		 cout << "empty ";
	return 0;
}
