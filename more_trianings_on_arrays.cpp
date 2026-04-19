// more_trianings_on_arrays.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
	float grades[3] ;

	cout << " pleas enter grade 1 \n "; 
	cin >> grades[0];

	cout << " pleas enter grade 2 \n "; 
	cin >> grades[1];

	cout << " pleas enter grade 3 \n "; 
	cin >> grades[2]; 

	cout << " ************************ \n";

	cout << " the average is " << (grades[0] + grades[1] + grades[2]) / 3 << endl;
	

}

