#include <iostream>
#include "SumOfFirstnNaturalNumber.h"

int SumFirstnNaturalNumber()
{
	std::cout << "Enter the position (n) of the natural number: ";
	
	int nNatural{};
	
	std::cin >> nNatural;
	
	std::cout << "The sum is: " << (nNatural*(nNatural+1))/2 << std::endl;
	
	return (nNatural*(nNatural+1))/2;
}

int main()
{
	SumFirstnNaturalNumber();
	return 0;
}