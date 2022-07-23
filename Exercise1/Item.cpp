#include "Item.h"
#include <string.h>
#include<iostream>

using namespace std;

Item::Item(int pItemNo, const char pName[])
{
	itemNo = pItemNo;
	strcpy_s(name, pName);
}

void Item::setPrice(double pPrice)
{
	price = pPrice;
}

double Item::calcTotal(int qty)
{
	return qty * price;
}

Item::~Item()
{
	cout << "Item No : " << itemNo << "deleted." << endl;
}

