// FunctionsAndUserInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Function declaration
double areaFinder(double length, double width);
void printValues(std::string toPrint);
// User input is a very important factor when building interactive applications. Most applications have some way of letting the user configure, customise or interactive with it. We have breached
// on how to print out information to the screen using std::cout >>, but now we need to look at how to read user input back from the screen to program, so happens to be a function 
// std::cin >>, is the function we use, see how it looks just like cout, it works just like it too. 
// We will also get onto functions. Functions are a way of splitting up your code into different code blocks to stop reiterating the same code and to make the code look cleaner. 
int main()
{
	double length = 5.2; // make these 3 items into arrays
	double width = 6.3;
	double area;

	area = areaFinder(length, width); //Use 

    return 0;
}
//These are functions
// Functions are made up of returnType(int string bool double) void means it returns nothing, a name for the function "PrintValues" Then parameters it recieves()
void printValues(std::string toPrint)
{
	//Output any given values to the screen
}
void printValues(int toPrint)
{

}
void printValues(int toPrint[])
{

}
void printValues(std::string toPrint[])
{

}
double areaFinder(double length, double width)
{

	return length * width;
}
std::string nameFinder(std::string names[])
{
	std::string returnNames;
	if (names[0].find_first_of("T"))
	{
		// += This means that it will append the string on the right onto the end of the string on the left. 
		returnNames += names[0]; // change this
	}

	return std::string(); //change this
}