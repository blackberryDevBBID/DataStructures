/*
 * Stack.cpp
 *
 *  Created on: Jun 14, 2013
 *      Author: luqman
 */

#include "Stack.h"
#include <unistd.h>
#include <iostream>

using namespace std;

Stack::Stack(int m_size)
: top(-1),
  size(m_size),
  p(new int[size]),
  length(0)

{}


Stack::~Stack()
{
	clear();
}
void Stack::push(int elem)
{
	//Check stack is not full
	if (top >= size -1) {
		cout <<endl<<"Stack is full";
	} else {
		p[top + 1] = elem;
		top++;
	}
}

int Stack::pop()
{
	//Check stack is not empty
	if (top < 0) {
		cout <<endl<<"Stack is empty";
		return -1;
	}

	int retVal = p[top];
	top --;
	return retVal;
}

void Stack::display()
{
	for(int i=0;i<=top;i++)
	{
		cout<<p[i];
		cout<< endl;
	}
}

Stack::Stack(const Stack& otherStack) {
	this->size = otherStack.size;
	this->top = otherStack.top;
	this->length = otherStack.length;

	//initialize the dynamic array
	p = new int[size];
	copyStack(otherStack);
}

Stack& Stack::operator =(const Stack& otherStack) {
	return copyStack(otherStack);
}

void Stack::clear() {
	top = -1;
	if (p) {
		delete [] p;
		p = 0;
	}
}

int Stack::getTop() {
	return this->top;
}

Stack& Stack::copyStack(const Stack& originalStack) {
	for (int i =0 ; i < originalStack.length; i++) {
		p[i] = originalStack.p[i];
	}
	return *this;
}




