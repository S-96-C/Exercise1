#include "SalesPerson.h"
#include"Item.h"
#include <string.h>
#include <iostream>

using namespace std;

SalesPerson::SalesPerson(int pEmpNo, const char pName[])
{
	empNo = pEmpNo;
	strcpy_s(name, pName);
}
//void SalesPerson::calcSales(Item it1, Item it2)
void SalesPerson::calcSales(Item* it1, Item* it2)
{
	int qty1, qty2;
	cout << "Input quantity for item1 : ";
	cin >> qty1;

	cout << "Input quantity for item2 : ";
	cin >> qty2;

	//sales = it1.calcTotal(qty1) + it2.calcTotal(qty2);
	sales = it1->calcTotal(qty1) + it2->calcTotal(qty2);
}

void SalesPerson::printSales()
{
	cout << "Employee no : " << empNo << endl;
	cout << "Name : " << name << endl;
	cout << "Sales : " << sales << endl;
	cout << endl;
}

SalesPerson::~SalesPerson()
{
	cout << "emp No: " << empNo << "deleted." << endl;

}


