#include<iostream>
#include<string>
typedef char itemType;
using namespace std;
class Stack 
{
private:
	itemType *word = new itemType[MaxSize];
	int top;

public:
	int MaxSize;
	Stack() {
		top = -1;
		MaxSize= 0;
		
	}
	bool isEmpty() const
	{
		return(top==-1);
	}
	bool isFull() const
	{
		return(MaxSize == 6);
	}
	void push(char item)
	{
		if (isFull())
		{
			cout << "Full" << endl;
			exit(1);
		}
		top++;
		MaxSize++;
		word[top] = item;
	}
	char pop(itemType item)
	{
		if (isEmpty())
		{
			exit(1);
		}
		item = word[top];
		top--;
		return item;

	}
};
int main()
{
	Stack stack;
	char ch;
	string userInput;
	cout << "Enter a string to check: ";
	getline(cin, userInput);
	for (int i = 0; i < userInput.size(); i++)
	{
		stack.push(userInput[i]);
	}

	string afterPop;
	for (int i = 0; i < userInput.size(); i++)
	{
		ch = stack.pop(userInput[i]);
		afterPop += ch;
	}
	if (afterPop == userInput)
		cout << "it is a palindrome";
	else
		cout << "Not a palindrome";
	
	return 0;
}
