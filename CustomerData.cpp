#include "stdafx.h"
#include "PersonData.h"
#include "CustomerData.h"
#include <iostream>
#include <string>
using namespace std;

CustomerData::CustomerData()
{
	customerNumber = 0;
	mailingList = 0;
}

CustomerData::CustomerData(int cn, bool ml)
{
	setCustomerNumber(cn);
	setMailingList(ml);
}

void CustomerData::setCustomerNumber(int cn2)
{
	customerNumber = cn2;
}

void CustomerData::setMailingList(bool ml2)
{
	mailingList = ml2;
}

int CustomerData::getCustomerNumber()
{
	return customerNumber;
}

bool CustomerData::getMailingList()
{
	return mailingList;
}

void CustomerData::print()
{
	cout << "Last Name: " << getLastName() << endl;
	cout << "First Name: " << getFirstName() << endl;
	cout << "Address: " << getAddress() << endl;
	cout << "City: " << getCity() << endl;
	cout << "State: " << getState() << endl;
	cout << "ZIP Code: " << getZip() << endl;
	cout << "Customer Number: " << getCustomerNumber() << endl;
	cout << "Mailing List? ";
	
	if (getMailingList())
	{
		cout << "Yes" << endl << endl;
	}

	else
	{
		cout << "No" << endl << endl;
	}
}
