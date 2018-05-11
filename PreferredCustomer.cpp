#include "stdafx.h"
#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"
#include <iostream>
#include <string>
using namespace std;

PreferredCustomer::PreferredCustomer()
{
	purchasesAmount = 0;
	discountLevel = 0;
}

PreferredCustomer::PreferredCustomer(double pa, double dl)
{
	setPurchasesAmount(pa);
	setDiscountLevel(dl);
}

void PreferredCustomer::setPurchasesAmount(double pa2)
{
	purchasesAmount = pa2;
}

void PreferredCustomer::setDiscountLevel(double dl2)
{
	discountLevel = dl2;
}

double PreferredCustomer::getPurchasesAmount()
{
	return purchasesAmount;
}
double PreferredCustomer::getDiscountLevel()
{
	return discountLevel/100;
}
