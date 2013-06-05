
#include "StaticArrayList.h"
#include <iostream>

using namespace std;
namespace list {

StaticArrayList::StaticArrayList() {
	size = 0;
	capacity = DEFAULT_SIZE;
}

StaticArrayList::~StaticArrayList() {
}

int StaticArrayList::getSize() {
	return size;
}
void StaticArrayList::updateItem(int item, int loc) {
	if(!isEmpty())
		arr[loc]=item;
	else
		cout<<"Array is Empty";

}
void StaticArrayList::createItem(int item)
{
	if(!isFull())
	{
		arr[size-1]=item;
		size++;
	}
	else
		cout<<"Array is Full";
}
void StaticArrayList::deleteItem () {
	if(!isEmpty())
	{
			size--;
	}
	else
		cout<<"Array is Empty";

}

int StaticArrayList::retrieveItem(int loc)
{
	if(!isEmpty())
		{
			if(loc<0 && loc>size-1)
				cout<<"Location is out of bound";
			else
				return arr[loc];
		}
	else
		cout<<"Array is Empty";

	return 0;

}
bool StaticArrayList::isEmpty(){
	return size <= 0;
}
bool StaticArrayList::isFull(){
	return size>= DEFAULT_SIZE;
}

void StaticArrayList::createItemAt(int loc, int item) {

	//If not full
	if (!isFull()) {
		if (loc < 0 || loc >= size -1) {
			cout <<"\n Location is out of bound";
		} else {
			int i = size -1;
			for ( ;i > loc; i--) {
				arr[i+1] = arr[i];
			}
			arr[loc] = item;
			size++;
		}
	} else {
		cout <<"\n List is full";
	}
}
void StaticArrayList::deleteItemAt(int loc) {
	//If not Empty
	if (!isEmpty()) {
		if (loc < 0 || loc >= size -1) {
			cout <<"\n Location is out of bound";
		} else {
			int i = loc;
			for ( ;i < size;  i++) {
				arr[i] = arr[i+1];
			}
			size--;
		}
	} else {
		cout <<"\n List is Empty";
	}
}

int StaticArrayList::getCapacity() {
	return this->capacity;
}
void StaticArrayList::displayList() {

	cout <<endl<<"-------------------------------------------------";
	for (int i = 0; i < size - 1; i++) {
		cout<<endl<<"Index -> "<<i << "\t :: Value-> "<<arr[i];
	}
}

int StaticArrayList::seqSearch(int item) {

	bool found = false;
	int index = 0;

	while (index < size -1 && !found) {
		if (arr[index] == item){
			found = true;
			break;
		} else {
			index++;
		}
	}
	if (found){
		return index;
	}
return -1;
}
void StaticArrayList::deleteItem(int item) {
	int pos = seqSearch(item);
	if (pos >= 0) {
		deleteItemAt(pos);
	} else{
		cout<<endl<<"Item does not exist";
	}
}
} /* namespace List */
