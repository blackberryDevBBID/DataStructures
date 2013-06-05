
#include "StaticArrayList.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void showMenu() {
	int opt;

	do {
		cout <<"\t 1. Add Item " << endl;
		cout <<"\t 2. Delete Item"<<endl;
		cout <<"\t 3. Update List"<<endl;
		cout <<"\t 4 Retrieve Item"<<endl;
		cout <<"\t 5. Add Item at Index"<<endl;
		cout <<"\t 6. Delete Item at Index"<<endl;
		cout <<"\t 7. Exit"<<endl;
		cout <<"\t > ";
		cin>> opt;
	}
	while (opt >= 1 && opt <= 7);
}

int main() {
	list::StaticArrayList m_list;
	m_list.createItem(23);
	m_list.createItem(233);
	m_list.createItem(213);
	m_list.createItem(423);
	m_list.createItem(523);
	m_list.createItem(623);
	m_list.createItem(223);
	m_list.displayList();

	m_list.createItemAt(3,1000);
	cout<<endl<<"CreateItemAt -> index 3 and value";
	m_list.displayList();
	m_list.deleteItem();
	cout<<endl<<"Deleted Item at End";

	m_list.displayList();
	m_list.deleteItemAt(3);
	cout<<endl<<"Deleted Item at location 3";
	m_list.updateItem(100,4);
	cout<<endl<<"Updated Item at location 4";

	cout<<endl<<"Item Retrieve -> "<<m_list.retrieveItem(4);
	m_list.displayList();

	return 0;
}
