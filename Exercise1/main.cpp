#include "Item.h"
#include "SalesPerson.h"
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
	/*
	//EX1.................

	SalesPerson s1(1, "Supun");

	Item it_01(1001, "Shampoo");
	Item it_02(2002, "Conditioner");

	it_01.setPrice(550.00);
	it_02.setPrice(650.00);

	s1.calcSales(it_01, it_02);
	s1.printSales();
	*/

	//EX2...................

	SalesPerson* s1 = new SalesPerson(1, "Namal");

	Item* it1 = new Item(1001, "Shampoo");
	Item* it2 = new Item(2002, "Conditioner");

	it1->setPrice(550.00);
	it2->setPrice(650.00);

	s1->calcSales(it1, it2);
	s1->printSales();

	delete s1;
	delete it1;
	delete it2;

}