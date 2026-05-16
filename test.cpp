// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class rectangle 
{
    private :

        float width; 
        float height  ; 
  
    public :

        rectangle(float w , float h )
        {
            cout << " hello \n";
            width = w;
            height = h;

        }
        

        void display ()
        {
            cout << " width  = " << width << endl;
            cout << " height  = " << height << endl;
        }

        ~rectangle()
        {
            cout << " Bye \n";
        }
};



int main()
{
    rectangle r1 (5 , 20);
    r1.display();

}

