#pragma once
#include <string>
using namespace std;

class PersonData
{
private:

	string lastName;
	string firstName;
	string address;
	string city;
	string state;
	string zip;
	string phone;

public:

	PersonData();
	PersonData(string ln, string fn, string a, string c, string s, string z, string p);

	void setLastName(string lname2);
	void setFirstName(string fname2);
	void setAddress(string a2);
	void setCity(string c2);
	void setState(string s2);
	void setZip(string z2);
	void setPhone(string p2);

	string getLastName();
	string getFirstName();
	string getAddress();
	string getCity();
	string getState();
	string getZip();
	string getPhone();
};
