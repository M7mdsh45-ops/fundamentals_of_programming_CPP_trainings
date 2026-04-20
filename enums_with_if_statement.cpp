// enums_with_if_statements_ex.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum enscreencolor { red = 1, blue = 2, green = 3 , yellow = 4  };


int main()
{
	cout << "******************** \n ";
	cout << "please chose the number of your color \n ";
	cout << " (1) red \n";
	cout << " (2) blue \n";
	cout << " (3) green \n";
	cout << " (4) yellow \n";
	cout << "******************** \n ";
	cout << " your choise ?? \n";

	int c;
	enscreencolor color;

	cin >> c;
	color = (enscreencolor)c;

	if (color == enscreencolor::red)
	{
		system ("color 4F");
	}
	else if (color == enscreencolor::blue)
	{
		system ("color 1F");
	}
	else if (color == enscreencolor::green)
	{
		system ("color 2F");
	}
	else if (color == enscreencolor::yellow)
	{
		system ("color 6F");
	}
	else
	{
		system("color 4F");
	}


}

