#include <iostream>
#include <cmath>
#include "ExerciseSec6.h"

void max(int value1, int value2)
{
	if(value1 > value2)
		std::cout << "The value '" << value1 << "' is the max.\n";
	else
		std::cout << "The value '" << value2 << "' is the max.\n";
}

void sign(int value)
{
	if(value >= 0)
		std::cout << "The value is positive.\n";
	else
		std::cout << "The value is negative.\n";
}

void evenOdd(int value)
{
	if(value%2 == 0)
		std::cout << "The value is even.\n";
	else
		std::cout << "The value is odd.\n";
}

void Working(int hour)
{
	if(hour >= 9 && hour <= 18)
		std::cout << "You are working during these hours.\n";
	else
		std::cout << "This is your leisure time, use it wisely.\n";
}

void CheckAge()
{
	int age{};
	std::cout << "Enter your age: ";
	std::cin >> age;
	
	if(age >= 12 && age <= 50)
		std::cout << "You are young.\n";
	else
		std::cout << "Your are old.\n";
		
	Elligible(age);
}

void Elligible(int age)
{
	if(age < 12 || age > 50)
		std::cout << "You are elligible for the prize.\n";
	else
		std::cout << "You are not elligible for the prize.\n";
}

void Max3(int a, int b, int c)
{
	if(a > b && a > c)
		std::cout << "The largest number is '" << a << "'.\n";
	else if(b > a && b > c)
		std::cout << "The largest number is '" << b << "'.\n";
	else
		std::cout << "The largest number is '" << c << "'.\n";
}

void Roots(float a,float b,float c)
{
	int d{}, root1{}, root2{};
	
	d = (b*b) - 4*a*c;
	
	if(d == 0)
	{
		std::cout << "The roots are real and equal: " << std::endl;
		root1 = -b/(2*a);
		std::cout << "Root 1 and Root 2 = " << root1 << std::endl;
	} else {
		if(d > 0)
		{
			std::cout << "The roots are real and unequal: " << std::endl;
			root1 = (-b + sqrt(d))/(2*a);
			root2 = (-b - sqrt(d))/(2*a);
			
			std::cout << "Root 1 = " << root1 << " and Root 2 = " << root2 << std::endl;
		} else {
			std::cout << "The roots are imaginary.\n";
		}
	}
}

void arithOpt(float value1, float value2, Arithmetic option)
{
	switch(option)
	{
		case Arithmetic::add:
		{
			std::cout << value1 << " + " << value2 << " = " << value1 + value2 << std::endl;
		} break;
		case Arithmetic::subtract:
		{
			std::cout << value1 << " - " << value2 << " = " << value1 - value2 << std::endl;
		} break;
		case Arithmetic::divide:
		{
			std::cout << value1 << "/" << value2 << " = " << value1/value2 << std::endl;
		} break;
		
		case Arithmetic::multiply:
		{
			std::cout << value1 << "*" << value2 << " = " << value1*value2 << std::endl;
		} break;
		default:
			throw std::runtime_error{"Invalid option of arithmetic."};
	}
}

void discountBill()
{
	float cost{};
	std::cout << "Enter the cost of the bill: ";
	std::cin >> cost;
	
	if(cost < 100)
		std::cout << "There is no discount to apply and the bill will cost: $" << cost << std::endl; 
	else if(cost >= 100 && cost < 500)
		std::cout << "There is a 20% discount (-$" << cost*0.1 << ") applied and the bill will cost: $" << cost*0.9 << std::endl;
	else
		std::cout << "There is a 20% discount (-$" << cost*0.2 << ") applied and the bill will cost: $" << cost*0.8 << std::endl;
}

void leapYear()
{
	int year{};
	std::cout << "Enter a year to determine if it is leap year: ";
	std::cin >> year;
	
	if(year%100 == 0 && year%400 == 0)
		std::cout << "The year " << year << " is a leap year.\n";
	else if(year%100 != 0 && year%4 == 0)
		std::cout << "The year " << year << " is a leap year.\n";
	else
		std::cout << "The year " << year << " is not a leap year.\n";
}

int main()
{
	max(4, 5);
	sign(-100);
	evenOdd(50);
	Working(14);
	CheckAge();
	
	Max3(1, 2, 3);
	
	Roots(2, 7, -9);
	
	arithOpt(5, 4, Arithmetic::subtract);
	
	discountBill();
	
	leapYear();
	return 0;
}