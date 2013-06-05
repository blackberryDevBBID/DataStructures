#include "DynamicArrayList.h"
#include <iostream>

using namespace std;

namespace list {

DynamicArrayList::DynamicArrayList(int mSize) {
	maxSize = mSize;
	length = 0;
	m_list = new int[mSize];
}

DynamicArrayList::~DynamicArrayList() {
	if (m_list) {
		delete[] m_list;
		m_list = 0;
	}
}
DynamicArrayList::DynamicArrayList(const DynamicArrayList & _list) {
	this->length = _list.getLength();
	this->maxSize = _list.getMaxSize();

	m_list = new int[maxSize];

	cout<<endl<<"Length in equal oper "<<length;
		for (int i = 0; i < length ; i++){
			m_list[i] = _list.m_list[i];
			cout<<endl<<" length -> "<<i <<" value --> "<<m_list[i];
		}
}

bool DynamicArrayList::isEmpty() {
	return length <= 0;
}
bool DynamicArrayList::isFull() {
	return length == maxSize-1;
}
int DynamicArrayList::getMaxSize() const {
	return maxSize;
}
int DynamicArrayList::getLength() const {
	return length;
}
bool DynamicArrayList::itemEqualAtIndex(int item, int loc) {
	if (loc < 0 || loc > maxSize - 1) {
		cout << endl << "Location is out of bound";
		return false;
	}
	return m_list[loc] == item;
}
void DynamicArrayList::createAtEnd(int item) {
	if (!isFull()) {
		if (length > 0) {
			m_list[length] = item;
		}
		else{
			m_list[length - 1] = item;
		}
		length++;
	} else {
		cout << endl << "List is full";
	}
}
void DynamicArrayList::replaceItem(int item, int loc) {
	if (!isEmpty()) {
		m_list[loc] = item;
	} else {
		cout << endl << "List is empty";
	}
}

int DynamicArrayList::seqSearch(int item) {
	bool found = false;
	int index = 0;

	while (index < length - 1 && !found) {
		if (m_list[index] == item) {
			found = true;
			break;
		} else {
			index++;
		}
	}
	if (found) {
		return index;
	}
	return -1;
}
void DynamicArrayList::createAt(int item, int loc) {
	if (loc < 0 || loc > maxSize - 1) {
		cout << endl << "Location is out of bound";
	} else {
		if (isFull()) {
			cout << endl << "List is full";
		} else {
			//loop from length -1 to loc right to left
			for (int i = length - 1; i > loc; i--) {
				m_list[i + 1] = m_list[i];
			}
			//Add the item
			m_list[loc] = item;
			length++;
		}
	}
}
void DynamicArrayList::deleteEnd() {
	if (isEmpty()) {
		cout << endl << "List is empty nothing to delete";
	} else {
		length--;
	}
}
void DynamicArrayList::deleteItemAt(int loc) {
	if (loc < 0 || loc > maxSize - 1) {
		cout << endl << "Location is out of bound";
	} else {
		//loop from loc to length -1 and shift items to left
		for (int i = loc; i < length; i++) {
			m_list[i] = m_list[i + 1];
		}
		length--;
	}

}
bool DynamicArrayList::retreiveItem(int loc, int &item) {
	bool retValue = false;
	if (!isEmpty()) {
		if (loc < 0 || loc > maxSize - 1) {
			cout << endl << "Location is out of bound";
			retValue = false;
		} else {
			item = m_list[loc];
			retValue = true;
		}
	}
	cout << endl << "List is empty";
	return retValue;
}

void DynamicArrayList::clearList() {
	length = 0;
}

DynamicArrayList& DynamicArrayList::operator =(const DynamicArrayList& obj) {
	length = obj.length;
	maxSize = obj.maxSize;
	m_list = new int[maxSize];
	cout<<endl<<"Length in equal oper "<<length;
	for (int i = 0; i < length ; i++){
		m_list[i] = obj.m_list[i];
		cout<<endl<<" length -> "<<i <<" value --> "<<m_list[i];
	}
	return *this;
}
void DynamicArrayList::displayList() {
	cout << endl << "-------------------------------------";
	for (int i = 0; i < length; i++) {
		cout << endl << "\t Index-> " << i << "\t\t Value->" << m_list[i];
	}
}

} /* namespace List */
