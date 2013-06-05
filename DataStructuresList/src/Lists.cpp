
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

//
//	cout << "\t 1. Add Item " << endl;
//	cout << "\t 2. Delete Item" << endl;
//	cout << "\t 3. Update List" << endl;
//	cout << "\t 4 Retrieve Item" << endl;
//	cout << "\t 5. Add Item at Index" << endl;
//	cout << "\t 6. Delete Item at Index" << endl;
//	cout << "\t 7. Exit" << endl;
//	cout << "\t > ";
//	cin >> opt;
//
//	int item;
//	int loc;
//
//	switch (opt) {
//	case 1:
//		cout <<"\n Enter the Item";
//		cin>> item;
//		m_list.createItem(item);
//
//		break;
//	case 2:
//		m_list.deleteItem();
//			break;
//	case 3:
//		cout <<"\n Enter the Item";
//		cin>>item;
//		cout <<"\n Enter the location";
//		cin>>loc;
//		m_list.updateItem(item,loc);
//			break;
//	case 4:
//		cout <<"\n Enter the location";
//		cin>>loc;
//		cout <<"\n Item retrieved is " << m_list.retrieveItem(loc);
//			break;
//	case 5:
//		cout<<"\n Enter the item to be inserted and specify the location";
//		cin>>item;
//		cin>>loc;
//		m_list.createItemAt(item,loc);
//			break;
//	case 6:
//		cout<<"\n Specify the location at which item has to be deleted";
//				cin>>loc;
//				m_list.deleteItemAt(loc);
//			break;
//	case 7:
//			return -1;
//			break;
//	default:
//		cout <<"\n Undefined Option"<<endl;
//		break;
//	}
	return 0;
}