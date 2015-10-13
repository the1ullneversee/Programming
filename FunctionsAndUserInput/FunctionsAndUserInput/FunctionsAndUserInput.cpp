// FunctionsAndUserInput.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
//Function declaration
double areaFinder(double length, double width);
void printValues(std::string toPrint); 
void printValues(double toPrint);
std::size_t nameFinder(std::string sentence, std::string toFind []);
// User input is a very important factor when building interactive applications. Most applications have some way of letting the user configure, customise or interact with it. We have breached
// on how to print out information to the screen using std::cout >>, but now we need to look at how to read user input back from the screen to program, so happens to be a function 
// std::cin >>, is the function we use, see how it looks just like cout, it works just like it too. 
// We will also get onto functions. Functions are a way of splitting up your code into different code blocks to stop reiterating the same code and to make the code look cleaner. 
int main()
{
	double length[6] = { 5.2, 3.0, 6.4, 2.3, 7.1, 4.4 }; // make these 3 items into arrays
	double width[6] = { 6.3, 5.4, 3.2, 6.8, 1.2, 4.0 };
	std::string sentences [] = { "Hello I am the robot", "Hello I am not the robot", "Its just me and you", "Nobody likes me", "Hello how are you doing" };
	std::string toFind [] = { "The", "He", "I", "Hello" };
	double area[6];


	for (int j = 0; j < 5; j++)
	{
		std::cout << nameFinder(sentences[j], toFind);
		//Gather the return element and print it out
	}

	//for (int index = 0; index < 6; index++)
	//{
	//	area[index] = areaFinder(length[index], width[index]); //Use 
	//	printValues(area[index]);
	//}


	std::string key;
	std::cin >> key;
    return 0;
}
//These are functions
// Functions are made up of returnType(int string bool double) void means it returns nothing, a name for the function "PrintValues" Then parameters it recieves()
void printValues(std::string toPrint)
{
	//Output any given values to the screen
}
void printValues(double toPrint)
{
	std::cout << toPrint << std::endl;
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
std::size_t nameFinder(std::string sentence, std::string toFind[])
{
	//check the sentence against all toFind elements, return element position
	std::string returnNames;
	std::size_t elementPos;
	
	for (int name = 0; name < toFind->size(); name++)
	{
		elementPos = sentence.find(toFind[name]);
	}

	

	return elementPos; //change this
}