// read_number_in_range.cpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int readintnumberinrange(int from, int to)
{   
    int number;
    cout << " Please enter a number from " << from << " to " << to << endl;
    cin >> number;

    while (number < from || number > to)
    {
        cout << " Wrong Number , ";
        cout << " Please enter a number from " << from << " to " << to << endl;
        cin >> number;
        
    }

    return number;
}





int main()
{
    int result = readintnumberinrange(18, 45);

    cout << " \n The Number Is " << result << endl ;

    return 0;
}

