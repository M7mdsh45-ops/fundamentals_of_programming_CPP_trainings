// nested_structures_and_enums.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum engender {male , female};
enum enmaritalstatus {married , single};
enum encolor {red , white , black , green };


struct staddress 
{
	string streetname;
	string buildingNO;
	string POBOX;
	string ZIPCODE;
};

struct stcontactinfo 
{
	string email;
	string phone;
	staddress address;
};

struct stperson 
{
	string firstname;
	string lastname;
	stcontactinfo contactinfo;

	engender gender;
	enmaritalstatus maritalstatus;
	encolor favcolor;
};

int main()
{
	stperson person1; 

	person1.firstname = "Mohamed";
	person1.lastname = "Ahmed";
	person1.contactinfo.email = "m7md21.com";
	person1.contactinfo.phone = "+201273838387";
	person1.contactinfo.address.POBOX = "5555";
	person1.contactinfo.address.ZIPCODE = "777756";
	person1.contactinfo.address.streetname = "Tahia Masr Street";
	person1.contactinfo.address.buildingNO = "515";

	person1.gender = engender::male;
	person1.maritalstatus = enmaritalstatus::single;
	person1.favcolor = encolor::black;


	cout << "NAME : " << person1.firstname << "\n";
	cout << "street name : " << person1.contactinfo.address.streetname << " \n ";







}

