
#pragma once

#define DEFAULT_SIZE 10
namespace list {

class StaticArrayList {

public:
	StaticArrayList();
	virtual ~StaticArrayList();
	int getSize();
	void updateItem(int item,int loc);
	void createItem(int item);
	void deleteItem();
	int retrieveItem(int loc);
	bool isEmpty();
	bool isFull();
	void createItemAt(int loc, int item);
	void deleteItemAt(int loc);
	int getCapacity();
	void displayList();
	int seqSearch(int item);
	void deleteItem (int item);
private:
	int size;
	int capacity;
	int arr[DEFAULT_SIZE];



};
} /* namespace List */
