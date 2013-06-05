
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

	int opt;

	list::StaticArrayList m_list;

	cout << "\t 1. Add Item " << endl;
	cout << "\t 2. Delete Item" << endl;
	cout << "\t 3. Update List" << endl;
	cout << "\t 4 Retrieve Item" << endl;
	cout << "\t 5. Add Item at Index" << endl;
	cout << "\t 6. Delete Item at Index" << endl;
	cout << "\t 7. Exit" << endl;
	cout << "\t > ";
	cin >> opt;

	int item;
	int loc;

	switch (opt) {
	case 1:
		cout <<"\n Enter the Item";
		cin>> item;
		m_list.createItem(item);

		break;
	case 2:
		m_list.deleteItem();
			break;
	case 3:
		cout <<"\n Enter the Item";
		cin>>item;
		cout <<"\n Enter the location";
		cin>>loc;
		m_list.updateItem(item,loc);
			break;
	case 4:
		cout <<"\n Enter the location";
		cin>>loc;
		cout <<"\n Item retrieved is " << m_list.retrieveItem(loc);
			break;
	case 5:
		cout<<"\n Enter the item to be inserted and specify the location";
		cin>>item;
		cin>>loc;
		m_list.createItemAt(item,loc);
			break;
	case 6:
		cout<<"\n Specify the location at which item has to be deleted";
				cin>>loc;
				m_list.deleteItemAt(loc);
			break;
	case 7:
			return -1;
			break;
	default:
		cout <<"\n Undefined Option"<<endl;
		break;
	}
	return 0;
}
