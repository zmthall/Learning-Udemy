#include <iostream>
#include <utility>
#include <cmath>
#include "ExerciseBasic.h"

float Area::Triangle(int base, int height)
{
	result = (base*height)/2.0;
	
	return result;
}

float Area::Square(int side)
{
	result = side*side;
	
	return result;
}

float Area::Rectangle(int base, int height)
{
	result = base*height;
	
	return result;
}

float Area::Parallelogram(int base, int height)
{
	result = base*height;
	
	return result;
}

float Area::Circle(int radius)
{
	result = PI*(radius*radius);
	
	return result;
}

float Area::Ellipse(int radiusA, int radiusB)
{
	result = PI*(radiusA*radiusB);
	
	return result;
}

float Area::Trapezium(int baseA, int baseB, int height)
{
	result = ((baseA + baseB)*height)/2.0;
	
	return result;
}

float Area::Rhombus(int length, int height)
{
	result = (length*height)/2.0;
	
	return result;
}

float Area::Kite(int length, int height)
{
	result = (length*height)/2.0;
	
	return result;
}

int SumFirstnNaturalNumber()
{
	std::cout << "Enter the position (n) of the natural number: ";
	
	int nNatural{};
	
	std::cin >> nNatural;
	
	std::cout << "The sum is: " << (nNatural*(nNatural+1))/2 << std::endl;
	
	return (nNatural*(nNatural+1))/2;
}

std::pair<float, float> quadraticEQ(float a, float b, float c)
{
	if(((b*b) - 4*a*c) < 0)
		throw std::runtime_error{"Cannot take a square root of a negative value."};
		
	float resultPos{}, resultNeg{};
	
	resultPos = (-b + (sqrt((b*b) - 4*a*c)))/(2*a);
	resultNeg = (-b - (sqrt((b*b) - 4*a*c)))/(2*a);
	
	return std::make_pair(resultPos, resultNeg);
}

float CalculateDistance(float v0, float vf, float a)
{
	float distance{};
	
	distance = ((vf*vf) - (v0*v0))/(2*a);
	
	return distance;
}

float SimpleInterest(float P, float T, float R)
{
	float result{};
	
	if(R > 1)
		R /= 100;
	
	result = P*T*R;
	
	return result;
}

float CylinderVol(float radius, float height)
{
	const float PI{3.141592653589793};
	float result{};
	
	result = PI*(radius*radius)*(height);
	
	return result;
}

int main()
{
	Area val{};
	
	std::cout << "Triangle area: " << val.Triangle(5, 10) << " units\n";
	std::cout << "Square area: " << val.Square(5) << " units\n";
	std::cout << "Rectangle area: " << val.Rectangle(5, 10) << " units\n";
	std::cout << "Parallelogram area: " << val.Parallelogram(5, 10) << " units\n";
	std::cout << "Circle area: " << val.Circle(5) << " units\n";
	std::cout << "Ellipse area: " << val.Ellipse(5, 10) << " units\n";
	std::cout << "Trapezium area: " << val.Trapezium(5, 10, 5) << " units\n";
	std::cout << "Rhombus area: " << val.Rhombus(5, 10) << " units\n";
	std::cout << "Kite area: " << val.Kite(5, 10) << " units\n";
	
	SumFirstnNaturalNumber();
	
	auto value = quadraticEQ(2, 7, -9);
	
	std::cout << "The roots are: " << value.first << " and " << value.second << std::endl;
	std::cout << "The distance is: " << CalculateDistance(0, 13, 2.2) << " units.\n";
	std::cout << "The simple interest is: " << SimpleInterest(10000.00, 5, 3.875) << " dollars.\n";
	std::cout << "Cylinder volume: " << CylinderVol(10, 4) << " units.\n";
	
	return 0;
}