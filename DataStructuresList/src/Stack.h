/*
 * Stack.h
 *
 *  Created on: Jun 14, 2013
 *      Author: luqman
 */

#ifndef STACK_H_
#define STACK_H_

class Stack {
private:
	int top;
	int *p;
	int size;
	int length;
public:
	Stack(int size = 10);
	Stack (const Stack& otherStack);
	Stack& operator = (const Stack& otherStack);
	virtual ~Stack();
	void push(int item);
	int pop();
	void display();
	void clear();
	int getTop();

private:
	Stack& copyStack(const Stack& originalStack);
};




#endif /* STACK_H_ */
