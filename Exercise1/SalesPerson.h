#pragma once
#include "Item.h"
class SalesPerson
{
private:
	int empNo;
	char name[50];
	double sales;

public:
	SalesPerson(int pEmpNo, const char pName[]);
	//void calcSales(Item it1, Item it2);
	void calcSales(Item* it1, Item* it2);
	void printSales();
	~SalesPerson();//Destructor
};


