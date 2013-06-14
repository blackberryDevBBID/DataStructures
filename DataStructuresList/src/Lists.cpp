#include "StaticArrayList.h"
#include "DynamicArrayList.h"
#include "Stack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

void showMenu() {
	int opt;

	do {
		cout << "\t 1. Add Item " << endl;
		cout << "\t 2. Delete Item" << endl;
		cout << "\t 3. Update List" << endl;
		cout << "\t 4 Retrieve Item" << endl;
		cout << "\t 5. Add Item at Index" << endl;
		cout << "\t 6. Delete Item at Index" << endl;
		cout << "\t 7. Exit" << endl;
		cout << "\t > ";
		cin >> opt;
	} while (opt >= 1 && opt <= 7);
}

int main() {

	Stack s1;
	s1.push(10);
	s1.push(20);
	s1.push(30);
	cout << endl << "Value " << s1.pop();
	cout << endl << "Top " <<s1.getTop();


	cout << endl << "Value " << s1.pop();
	cout << endl << "Top " <<s1.getTop();


	cout << endl << "Value " << s1.pop();
	cout << endl << "Top " <<s1.getTop();


	cout << endl << "Value " << s1.pop();
	cout << endl << "Top " <<s1.getTop();


//	list::StaticArrayList m_list;
//	m_list.createItem(23);
//	m_list.createItem(233);
//	m_list.createItem(213);
//	m_list.createItem(423);
//	m_list.createItem(523);
//	m_list.createItem(623);
//	m_list.createItem(223);
//	m_list.displayList();
//
//	m_list.createItemAt(3, 1000);
//	cout << endl << "CreateItemAt -> index 3 and value";
//	m_list.displayList();
//	m_list.deleteItem();
//	cout << endl << "Deleted Item at End";
//
//	m_list.displayList();
//	m_list.deleteItemAt(3);
//	cout << endl << "Deleted Item at location 3";
//	m_list.updateItem(100, 4);
//	cout << endl << "Updated Item at location 4";
//
//	cout << endl << "Item Retrieve -> " << m_list.retrieveItem(4);
//	m_list.displayList();
//
//	cout << endl << "++++++++++++++++++++++++++++++++++";
//	int arrSize;
//	cout << endl << "Tests for Dynamic Array";
//	cout<< endl << "Enter the size of Dynamic Array := ";
//	cin>>arrSize;
//	list::DynamicArrayList* m_listD = new list::DynamicArrayList(arrSize);
//	m_listD->createAtEnd(1);
//	m_listD->createAtEnd(13);
//	m_listD->createAtEnd(233);
//	m_listD->createAtEnd(423);
//	m_listD->createAtEnd(523);
//	m_listD->createAtEnd(623);
//	m_listD->createAtEnd(1223);
//	m_listD->displayList();
//
//	cout << endl << "CreateItemAt -> index 3 and value";
//	m_listD->displayList();
//	m_listD->deleteEnd();
//	cout << endl << "Deleted Item at End";
//
//	m_listD->displayList();
//	m_listD->deleteItemAt(3);
//	cout << endl << "Deleted Item at location 3";
//	m_listD->replaceItem(100, 4);
//	cout << endl << "Updated Item at location 4";
//
//	int retItem;
//	m_listD->retreiveItem(4, retItem);
//	cout << endl << "Item Retrieve -> " << retItem;
//	m_listD->displayList();
//
//	cout <<endl <<"Copying list to list";
//	list::DynamicArrayList* m_list2 ;
//	m_list2 = m_listD;
//	cout <<endl <<"===================== Printing list 1 ====================";
//	m_listD->displayList();
//	cout <<endl <<"===================== Printing list 2 ====================";
//	m_list2->displayList();

	return 0;
}
