// simple_multiplication_table.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    cout << "\t The Multiplication Table \n";
    cout << "***************************************** \n";

	for (int i = 1; i <= 12; i++)
    {
        cout << "the multiplication table for number " << i << "\n\n";

        for ( int j = 1 ; j <= 12 ; j++  )
        {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << " -------------------------------------- \n ";
    }


}

