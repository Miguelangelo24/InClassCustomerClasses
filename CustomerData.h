#pragma once
#include "PersonData.h"
using namespace std;

class CustomerData : public PersonData
{
private:

	int customerNumber;
	bool mailingList;

public:

	CustomerData();
	CustomerData(int, bool);

	void setCustomerNumber(int cn2);
	void setMailingList(bool ml2);

	int getCustomerNumber();
	bool getMailingList();

	void print();


};