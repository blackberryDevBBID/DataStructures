
#pragma once

#define DEFAULT_SIZE 10
namespace list {

class StaticArrayList {

public:
	StaticArrayList();
	virtual ~StaticArrayList();
	int getSize();
	void updateItem(int,int);
	void createItem(int item);
	void deleteItem();
	int retrieveItem(int);
	bool isEmpty();
	bool isFull();
	void createItemAt(int loc, int item);
	void deleteItemAt(int loc);
	int getCapacity();
private:
	int size;
	int capacity;
	int arr[DEFAULT_SIZE];



};
} /* namespace List */
