#include <iostream>
#include "AreaOfShape.h"

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
	
	return 0;
}