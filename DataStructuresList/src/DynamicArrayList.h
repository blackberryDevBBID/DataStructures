#pragma once
namespace list {

class DynamicArrayList {
public:
	DynamicArrayList(int mSize = 100);
	DynamicArrayList& operator = (const DynamicArrayList & obj);
	virtual ~DynamicArrayList();
	DynamicArrayList(const DynamicArrayList & list);

	bool isEmpty();
	bool isFull();
	int getMaxSize() const;
	int getLength() const;
	bool itemEqualAtIndex(int item, int loc);
	void createAtEnd (int item);
	void replaceItem (int item, int loc);
	int seqSearch (int item);
	void createAt (int item, int loc);
	void deleteEnd();
	void deleteItemAt(int loc);
	bool retreiveItem (int loc, int& item);
	void clearList();
	void displayList();

private:
	int *m_list;
	int length;
	int maxSize;
};

} /* namespace List */
