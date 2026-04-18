// swap_ex.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void swap (int &A, int &B)
{
	int temp;

	temp = A ;
	A = B ;
	B = temp ;

	cout << " after swap inside the function A = " << A << " and B = " << B << "\n";

}




int main()
{
	int A , B ;

	cout << " please enter A \n ";
	cin >> A;


	cout << " please enter B \n ";
	cin >> B;

	cout <<  "before swap A = " << A << " and B = " << B << "\n";

	swap(A, B);

		cout << "after in main function A = " << A << " and B = " << B <<  "\n" ;

	  
 

}


