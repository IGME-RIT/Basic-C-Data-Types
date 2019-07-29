Documentation Author: Niko Procopi 2019

This tutorial was designed for Visual Studio 2017 / 2019
If the solution does not compile, retarget the solution
to a different version of the Windows SDK. If you do not
have any version of the Windows SDK, it can be installed
from the Visual Studio Installer Tool

Welcome to the Data-Types Tutorial!
Prerequesites: None

A "Data type" is used to create a variable, and a variable
can hold a value. Different data types create different types of
variables.

In a game, if we have 100 health, we may want to say something like:
health = 100;

However, there is a problem, because C++ does not know what "health" is;
Is "health" supposed to be a number, or a sentence, or even an entire game level?
The computer also does not know how large "health" is in bytes.

We can fix this in multiple ways:
int health = 100;
short health = 100;
float health = 100.0f;

int, short, and float, are all data types.

"int" tells the computer that "health" is a whole-number integer, and that "health" 
will be 4 bytes large. We could also use "short" health, to make health two-bytes large.
If we wanted "health" to have decimals, instead of being a whole number, we could use
"float" health; 

In this tutorial, we go further in-depth about how data types work
