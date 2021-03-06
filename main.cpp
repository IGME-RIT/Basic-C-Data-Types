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
    // Braces can be used to limit the "scope" of variables.
    // The scope is anything inside the braces.
    // Anything defined within a scope can only be accessed within that scope, or nested scopes.
    // BOOLEAN
    {
        cout << "Boolean data type:" << endl;

        // sizeof(data type) returns the size in bytes (8 bits) of the data type
        // A boolean uses a single bit, but since it's smaller than a bit, the computer uses an entire byte to store it.
        cout << "sizeof(bool): " << sizeof(bool) << endl;

        // 1 means true.
        bool t = true;
        cout << "True: " << t << endl;

        // 0 means false.
        bool f = false;
        cout << "False: " << f << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }



    // SIGNED INTEGERS
    {
        cout << "Signed integer data types:" << endl;
        // Signed integers use the largest place bit as a negative sign.

        // Signed integer types from smallest to largest:
        // char isn't signed by default, but it is with the signed prefex.
        // You may use the signed prefix with other types, but they are already signed by default.
        cout << "sizeof(signed char): " << sizeof(signed char) << endl;
        cout << "sizeof(short):       " << sizeof(short) << endl;
        cout << "sizeof(int):         " << sizeof(int) << endl;
        cout << "sizeof(long):        " << sizeof(long) << endl;
        cout << "sizeof(long long):   " << sizeof(long long) << endl;

        cout << "Ranges:" << endl;
        // Useful constants (these exist for all types)
        cout << "signed char:   " << SCHAR_MIN << " to " << SCHAR_MAX << endl;
        cout << "short:         " << SHRT_MIN << " to " << SHRT_MAX << endl;
        cout << "int:           " << INT_MIN << " to " << INT_MAX << endl;
        cout << "long:          " << LONG_MIN << " to " << LONG_MAX << endl;
        cout << "long long:     " << LLONG_MIN << " to " << LLONG_MAX << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }



    // UNSIGNED INTEGERS
    {
        cout << "Unsigned Integer data types:" << endl;

        // Unsigned integers do not have a signed bit. They wrap directly from max to 0.
        // The unsigned prefix is required for all of these.
        cout << "sizeof(unsigned char):         " << sizeof(unsigned char) << endl;
        cout << "sizeof(unsigned short):        " << sizeof(unsigned short) << endl;
        cout << "sizeof(unsigned int):          " << sizeof(unsigned int) << endl;
        cout << "sizeof(unsigned long):         " << sizeof(unsigned long) << endl;
        cout << "sizeof(unsigned long long):    " << sizeof(unsigned long long) << endl;

        cout << "Ranges:" << endl;
        // Useful constants (these exist for all types)
        // Notice how there is no UTYPE_MIN, because the minimum for all unsigned types is always 0.
        cout << "unsigned char:         " << 0 << " to " << UCHAR_MAX << endl;
        cout << "unsigned short:        " << 0 << " to " << USHRT_MAX << endl;
        cout << "unsigned int:          " << 0 << " to " << UINT_MAX << endl;
        cout << "unsigned long:         " << 0 << " to " << ULONG_MAX << endl;
        cout << "unsigned long long:    " << 0 << " to " << ULLONG_MAX << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }



    // CHARACTERS
    {
        cout << "Character data types:" << endl;

        // A regular character is one byte.
        cout << "sizeof(char): " << sizeof(char) << endl;

        // char may actually be either signed or unsigned by default depending on your compiler.
        cout << "Range of char: " << CHAR_MIN << " to " <<CHAR_MAX << endl;

        // A char can be set with an integer or ascii value.
        char a = 97;    // Setting a char with a decimal value.
        char b = 'b';   // Setting a char with an ascii value.

        // Print out the values.
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }



    // OTHER CHAR
    {
        cout << "Lesser used Character type sizes:" << endl;
        cout << "sizeof(char16_t): " << sizeof(char16_t) << endl;
        cout << "sizeof(char32_t): " << sizeof(char32_t) << endl;
        cout << "sizeof(wchar_t):  " << sizeof(wchar_t) << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }



    // FLOATS
    {
        cout << "Floating-point data types:" << endl;
        // floats typically use the IEEE standard, which you can read about on the internet.
        // a double is usually double the size of a float, but is only guarenteed to be the same size or greater.
        // a long double is greater than or equal to a double, but is usually the same due to memory restrictions.
        cout << "sizeof(float):         " << sizeof(float) << endl;
        cout << "sizeof(double):        " << sizeof(double) << endl;
        cout << "sizeof(long double):   " << sizeof(long double) << endl;

        cout << "Ranges:" << endl;
        cout << "float:         " << FLT_MIN << " to " << FLT_MAX << endl;
        cout << "double:        " << DBL_MIN << " to " << DBL_MAX << endl;
        cout << "long double:   " << LDBL_MIN << " to " << LDBL_MAX << endl;


        cout << "Press enter to continue..." << endl;
        cin.get();  // Wait for input.
    }


    // DEFAULTS
    {
        cout << "Default numbers:"<< endl;

        // By default, different numbers will be treated as different types depending on how they are written.
        // Note:    sizeof can be used with a variable instead of a type, and will work similarly.
        //          In this case, parenthesis are not required.

        cout << "Integer numbers: " << endl;
        cout << "sizeof 5:          " << sizeof 5 << endl;          // numbers with no decimal are assumed to be integers.
        cout << "sizeof 9999999999: " << sizeof 9999999999 << endl; // an integer that is sufficiently large enough will be promoted to a long long.

        cout << "Decimal numbers: " << endl;
        cout << "sizeof 5.:         " << sizeof 5. << endl;         // numbers with a decimal are assumed to be doubles.
        cout << "sizeof 5.f:        " << sizeof 5.f << endl;        // numbers with a decimal, and trailed by an f, will be treated as floats.    

        // Hex values are really just an alternate way to write integers, and are promoted in the exact same way.
        cout << "Hex numbers: " << endl;
        cout << "sizeof 0x5:            " << sizeof 0x5 << endl;
        cout << "sizeof 0x500000000:    " << sizeof 0x500000000 << endl;

        cout << "Press enter to exit..." << endl;
        cin.get();  // Wait for input.
    }

    return 0;   // End Program.
}