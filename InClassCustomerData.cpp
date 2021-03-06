// InClassCustomerData.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PersonData.h"
#include "CustomerData.h"
#include "PreferredCustomer.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	CustomerData c1;
	PreferredCustomer pc1;
	int continueAns = 0;
	int inputVal = 1;
	double purchasesInput = 0;
	double purchasesTotal = 0;

	cout << "Customer #1: \n" << endl;
	
	c1.setLastName("Miguelangelo");
	c1.setFirstName("Martinez");
	c1.setAddress("123 Random Street");
	c1.setCity("Fakeville");
	c1.setState("NA");
	c1.setZip("12345");
	c1.setPhone("1234567890");
	c1.setCustomerNumber(00001);
	c1.setMailingList(1);
	c1.print();
	
	do
	{
		do
		{
			cout << "Please enter the amount your spent: " << endl;
			cin >> purchasesInput;

			if (purchasesInput < 0)
			{
				cout << "Invalid input. Please do not use negative numbers. " << endl;
				inputVal = 0;
			}

			else
			{
				purchasesTotal = purchasesTotal + purchasesInput;

				cout << "Have you spent anything else? (0 = No / 1 = Yes)" << endl;
				cin >> continueAns;
			}
		} while(inputVal == 0);
	} while(continueAns == 1);

	pc1.setPurchasesAmount(purchasesTotal);

	if (purchasesTotal < 500)
	{
		cout << "You don't get a discount. " << endl;
		pc1.setDiscountLevel(0);
	}

	else if (purchasesTotal >= 500 && purchasesTotal < 1000)
	{
		cout << "You get a discount of 5%! " << endl;
		pc1.setDiscountLevel(5);
	}

	else if (purchasesTotal >= 1000 && purchasesTotal < 1500)
	{
		cout << "You get a discount of 6%! " << endl;
		pc1.setDiscountLevel(6);
	}

	else if (purchasesTotal >= 1500 && purchasesTotal < 2000)
	{
		cout << "You get a discount of 7%! " << endl;
		pc1.setDiscountLevel(7);
	}

	else if (purchasesTotal > 2000)
	{
		cout << "You get a discount of 10%! " << endl;
		pc1.setDiscountLevel(10);
	}

	printf("Your total spent: $%.2f\n", pc1.getPurchasesAmount());
	printf("Your total discount off all your purchases: $%.2f\n", pc1.getPurchasesAmount() * pc1.getDiscountLevel());
}
