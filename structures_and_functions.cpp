// structures_and_functions.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <string> ;


struct stinfo
{
	string firstname;
	string lastname;
	int age;
	string phone;

};

void readinfo(stinfo& info)
{
	cout << "please enter your first name \n";
	cin >> info.firstname;

	cout << "please enter your last name \n";
	cin >> info.lastname;

	cout << "please enter your age \n";
	cin >> info.age;

	cout << "please enter your phone number \n";
	cin >> info.phone;

}


void printinfo (stinfo info)
{
	cout << " \n ********************* \n ";

	cout << " firt name : " << info.firstname << "\n";
	cout << " last name : " << info.lastname << "\n";
	cout << "  age : " << info.age << "\n";
	cout << "  phone : " << info.phone << "\n";
	cout << " \n ********************* \n ";
	

}


int main()
{
	stinfo person1info ;
	readinfo(person1info);
	printinfo(person1info);

	stinfo person2info;
	readinfo(person2info);
	printinfo(person2info);


}
