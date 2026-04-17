// structs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


struct info 
{
    string name;
    int age;
    string city;
    string country;
    int monthly_salary;
    int yearly_salary;
    char gender; 
    int married; 


};

int main ()
{
    info person1;

    person1.name = "Mohamed ahmed  ";
    person1.age = 25; 
    person1.city = "Cairo "; 
    person1.country = " Egypt "; 
    person1.monthly_salary = 2000; 
    person1.yearly_salary = 24000; 
    person1.gender = 'M';
    person1.married = 1;

    cout << " my name is " << person1.name << "\n ";
    cout << " my age is " << person1.age << "\n ";
    cout << " my city is " << person1.city << "\n ";
    cout << " my country is " << person1.country << "\n ";
    cout << " my monthly salary is " << person1.monthly_salary << "\n ";
    cout << " my yearly salary is " << person1.yearly_salary << "\n ";
    cout << " my gender is " << person1.gender << "\n ";
    cout << " my wifes " << person1.married << "\n ";

}
