#ifndef EXERCISEBASIC_H
#define EXERCISEBASIC_H

struct Area {
	float result;
	const float PI{3.141592653589793};
	
	Area()
	: result{} {}
	
	float Triangle(int, int);
	float Square(int);
	float Rectangle(int, int);
	float Parallelogram(int, int);
	float Circle(int);
	float Ellipse(int, int);
	float Trapezium(int, int, int);
	float Rhombus(int, int);
	float Kite(int, int);
};

int SumFirstnNaturalNumber();

std::pair<float, float> quadEquation(float, float, float);

float CalculateDistance(float, float, float);

float SimpleInterest(float, float, float);

float CylinderVol(float, float);

#endif /* EXERCISEBASIC_H */