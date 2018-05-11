#pragma once
#include "PersonData.h"
#include "CustomerData.h"
using namespace std;

class PreferredCustomer
{
private: 

	double purchasesAmount;
	double discountLevel;

public:
	
	PreferredCustomer();
	PreferredCustomer(double pa, double dl);

	void setPurchasesAmount(double pa2);
	void setDiscountLevel(double dl2);

	double getPurchasesAmount();
	double getDiscountLevel();
};

