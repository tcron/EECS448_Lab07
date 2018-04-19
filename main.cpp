/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	//Example of declaring a LinkedListOfInts
	//LinkedListOfInts testableList;

	TestSuite myTester;
	myTester.runTests();

	//std::cout << "Running...\nAnd it's done.\nGoodbye.\n";

	return (0);

}
