
#include <iostream>
using namespace std;


class MyStack
{
private:
	int maxStackSize;
	int StackTop;
	MyStack*StackPtr;

public:
	const MyStack& operator=(const MyStack&);
	void initializeStack();
	bool isEmpty() const;
	bool isFull() const;
	void push(const MyStack& newItem);
	MyStack peek() const;
	void pop();
	MyStack(int stackSize = 100);
	MyStack(const MyStack& otherStack);
	~MyStack();
};


void MyStack::initializeStack()
{
	StackTop = 0;
}//end initializeStack


bool MyStack::isEmpty()const
{
	return(StackTop == 0);
}//end isEmpty


bool MyStack::isFull() const
{
	return(StackTop == maxStackSize);
}//end isFull

void MyStack::push(const MyStack& newItem)
{
	if (!isFull())
	{
		StackPtr[StackTop] = newItem;//add newItem to the top of the stack
		StackTop++;//increment stackTop
	}
	else
		cout << "cannot add to a full stack." << endl;
}//end push


MyStack  MyStack::peek()const
{
	(StackTop != 0);
	return StackPtr[StackTop - 1];
}//end peek


void MyStack::pop()
{
	if (isEmpty())
		StackTop--;
	else
		cout << "cannot remove from an empty stack." << endl;
}//end pop

MyStack::MyStack(int stackSize)
{
	if (stackSize <= 0)
	{
		cout << "size of the array to hold the stack must "
			<< "be positive." << endl;
		cout << " Creating an array of size 100.:<<endl";
			maxStackSize = 100;
	}
	else
		maxStackSize = stackSize;//set the stack size to the value specified by the parameter stackSize

	StackTop = 0;
	StackPtr = new MyStack[maxStackSize];//create the array to hold the stack elements
}//end constructor
