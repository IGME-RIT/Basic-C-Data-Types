/*
Data Types
(c) 2016
Author: David Erbelding
Written under the supervision of David I. Schwartz, Ph.D., and
supported by a professional development seed grant from the B. Thomas
Golisano College of Computing & Information Sciences
(https://www.rit.edu/gccis) at the Rochester Institute of Technology.
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or (at
your option) any later version.
This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/



// Include iostream for output during the program.
#include <iostream>
// Use std to avoid writing std:: everywhere.
using namespace std;


// Start of main function
int main() 
{
    // BOOLEAN
    cout << "Boolean data type:" << endl;
    // Braces can be used to limit the "scope" of variables.
    // The scope is anything inside the braces.
    // Anything defined within a scope can only be accessed within that scope, or nested scopes.
    {
        // sizeof(data type) returns the size in bytes (8 bits) of the data type
        // A boolean uses a single bit, but since it's smaller than a bit, the computer uses an entire byte to store it.
        cout << "sizeof(bool): " << sizeof(bool) << endl;

        // 1 means true.
        bool t = true;
        cout << "True: " << t << endl;

        // 0 means false.
        bool f = false;
        cout << "False: " << f << endl;
    }
    cout << "Press enter to continue..." << endl;
    cin.get();  // Wait for input.





    // CHARACTERS
    cout << "Character data types:" << endl;
    {
        // A regular character is one byte.
        cout << "sizeof(char): " << sizeof(char) << endl;

        // A char can be set with a decimal, hexadecimal, or ascii.
        char a = 97;    // Setting a char with a decimal value.
        char b = 0x62;  // Setting a char with a hex value.
        char c = 'c';   // Setting a char with an ascii value.

        // Print out the values.
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;

        // Characters can be added and subtracted from eachother.
        cout << "b - a: " << b - a << endl;
        cout << "c - a: " << c - a << endl;
    }
    cout << "Press enter to continue..." << endl;
    cin.get();  // Wait for input.





    // OTHER CHAR
    cout << "Lesser used Character type sizes:" << endl;
    {
        cout << "sizeof(char16_t): " << sizeof(char16_t) << endl;
        cout << "sizeof(char32_t): " << sizeof(char32_t) << endl;
        cout << "sizeof(wchar_t):  " << sizeof(wchar_t)  << endl;
    }
    cout << "Press enter to continue..." << endl;
    cin.get();  // Wait for input.






    // SIGNED INTEGERS
    cout << "Signed integer data types:" << endl;
    {
        // Signed integers use the largest place bit as a negative sign.

        // Signed integer types from smallest to largest:
        // char isn't signed by default, but it is with the signed prefex.
        // the other types are signed by default.
        cout << "sizeof(signed char): " << sizeof(signed char)  << endl;
        cout << "sizeof(short):       " << sizeof(short)        << endl;
        cout << "sizeof(int):         " << sizeof(int)          << endl;
        cout << "sizeof(long):        " << sizeof(long)         << endl;
        cout << "sizeof(long long):   " << sizeof(long long)    << endl;

        int a = INT_MAX;
        cout << "INT_MAX: " << CHAR_MAX << endl;





    }
    cout << "Press enter to continue..." << endl;
    cin.get();  // Wait for input.






    // UNSIGNED INTEGERS
    cout << "Unsigned Integer data types:" << endl;
    {
        unsigned char;
        unsigned short int;
        unsigned int;
        unsigned long int;
        unsigned long long int;
    }
    cout << "Press enter to continue..." << endl;
    cin.get();  // Wait for input.









    // FLOATS
    {
        cout << "Floating-point data types:" << endl;
        float;
        double;
        long double;
    }
    cout << "Press enter to continue..." << endl;
	cin.get();  // Wait for input.



    return 0;   // End Program.
}