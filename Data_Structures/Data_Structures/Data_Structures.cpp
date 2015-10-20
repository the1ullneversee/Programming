// Data_Structures.cpp : Defines the entry point for the console application.
// ************************************************************************************************************//
//<summary> Create a program which will use data structures to hold a persons purchase information when visiting
// A supermarket and displays what they have bought and what the store names was, their name, etc...
//Two different data structures are needed, one for the person, and one for the store. </summary>
// ***********************************************************************************************************//
#include "stdafx.h"
#include <stdio.h>
#include <string>
#include <iostream>
//Step1. Declare data structures create data members that wil be needed.
void printCustomerPurchase(Person person); // The person data structure put into this function needs to have a datastructre link member called purchase. See function code below.
int main()
{
	//Step 2. Ask user to fill in the purchase list (need to dynamically create the array) using how many elements they want
	//Step 3. Show them what they have entered. 
	//Step 4. Fill in the shop info for the store data structure
	//Step 5. Ask them to fill in their Name, Age, Email
	//Step 6. Assign the purchase object to the person object relevant member.
	//Step 7. Use the printCustomerPurchase function to print their purchases. 
	// Bonus. Alter the code so that the user can input more and more items.
	return 0;
}
void printCustomerPurchase(Person person) // This function works fine, just need to feed it with the person object, but look at what the person object access's in the function!!!
{
	std::cout << "Purchase details for: " << person.name << " " << person.age << " " << person.email << std::endl;
	std::cout << "Your purchase ID is: " << person.purchase._id << " The store you visited was: " << person.purchase._storeName << std::endl;
	std::cout << "You bought: " << std::endl;
	for (int i = 0; i < person.purchase.itemsBought; i++)
	{
		std::cout << "+---------------------------------+" << std::endl << "+ " << person.purchase._purchaseList[i] << std::endl;
	}
}