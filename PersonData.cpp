#include "stdafx.h"
#include "PersonData.h"
#include <string>
using namespace std;

PersonData::PersonData()
{
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zip = "";
	phone = "";
}

PersonData::PersonData(string ln, string fn, string a, string c, string s, string z, string p)
{
	setLastName(ln);
	setFirstName(fn);
	setAddress(a);
	setCity(c);
	setState(s);
	setZip(z);
	setPhone(p);
}

void PersonData::setLastName(string lname2)
{
	lastName = lname2;
}

void PersonData::setFirstName(string fname2)
{
	firstName = fname2;
}

void PersonData::setAddress(string a2)
{
	address = a2;
}

void PersonData::setCity(string c2)
{
	city = c2;
}

void PersonData::setState(string s2)
{
	state = s2;
}

void PersonData::setZip(string z2)
{
	zip = z2;
}


void PersonData::setPhone(string p2)
{
	phone = p2;
}

string PersonData::getLastName()
{
	return lastName;
}

string PersonData::getFirstName()
{
	return firstName;
}

string PersonData::getAddress()
{
	return address;
}

string PersonData::getCity()
{
	return city;
}

string PersonData::getState()
{
	return state;
}

string PersonData::getZip()
{
	return zip;
}

string PersonData::getPhone()
{
	return phone;
}