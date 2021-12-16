#include <iostream>

void multTable()
{
	int number{};
	std::cout << "Enter the number to show the multiplication table for: ";
	std::cin >> number;
	
	for(size_t i{}; i < 10; i++)
	{
		std::cout << number << " X " << i << " = " << number*i << std::endl;
	}
}

void SumofN()
{
	int sum{}, number{};
	std::cout << "Enter the natural number to find the sum up to: ";
	std::cin >> number;
	
	for(size_t i{}; i < number + 1; i++)
		sum += i;

	std::cout << "The sum of the natural number " << number << " is " << sum << std::endl;
}

void factorial()
{
	int result{1}, number{};
	std::cout << "Enter the number to find the factorial of: ";
	std::cin >> number;
	
	for(size_t i{1}; i < number + 1; i++)
		result *= i;
		
	std::cout << "The factorial of the number " << number << " is " << result << std::endl;
}

void factors()
{
	int number{};
	std::cout << "Enter a number to find the factors of: ";
	std::cin >> number;
	
	std::cout << "Factors of " << number << ":\n";
	for(size_t i{1}; i < number + 1; i++)
	{
		if(number%i == 0)
			std::cout << i << " is a factor of " << number << std::endl;
	}
}

void perfectNumber()
{
	int factor{}, number{};
	std::cout << "Enter a number to find if it is perfect: ";
	std::cin >> number;
	
	for(size_t i{1}; i < number; i++)
	{
		if(number%i == 0)	
			factor += i;
	}
	
	if(factor == number)
		std::cout << number << " is a perfect number.\n";
	else
		std::cout << number << " isn't a perfect number.\n";
}

void primeNumber()
{
	int number{};
	bool flag{false};
	std::cout << "Enter a number to find if it is a prime number: ";
	std::cin >> number;
	
	for(size_t i{1}; i < number; i++)
	{
		if(number%i == 0 && i != 1)	
		{
			std::cout << number << " is not a prime number.\n";
			flag = false;
			break;
		}
	}
	
	if(flag)
		std::cout << number << " is a prime number.\n";
	
}

void digitOfNumber()
{
	int number{};
	std::cout << "Enter a number to break into its digits: ";
	std::cin >> number;
	
	std::cout << "The digits of " << number << " are:\n";
	while(number)
	{
		std::cout << number%10 << std::endl;
		
		number /= 10;
	}
}

void Armstrong()
{
	int number{}, sum{}, digit{};
	std::cout << "Enter a number to determine if it is an Armstrong number: ";
	std::cin >> number;
	
	int temp{number}, count{};
	
	while(temp)
	{
		count++;
		temp /= 10;
	}

	temp = number;
	
	while(temp)
	{
		digit = temp%10;
		int tempDigit = digit;
		for(size_t i{1}; i < count; i++)
		{
			digit *= tempDigit;
		}
		sum += digit;
		temp /= 10;
	}
	
	if(sum == number)
		std::cout << number << " is an Armstrong number.\n";
	else
		std::cout << number << " isn't an Armstrong number.\n";
}

void reverseNum()
{
	int number{}, reverseNum{}, digit{};
	std::cout << "Enter a number you want to reverse: ";
	std::cin >> number;
	
	int temp = number;
	while(temp)
	{
		digit = temp%10;
		reverseNum = (reverseNum*10) + digit;
		temp /= 10;
	}
	
	std::cout << "The reverse of " << number << " is " << reverseNum << std::endl;
}

void PalindromeNumber()
{
	int number{}, reverseNum{}, digit{};
	std::cout << "Enter a number to test if it is a palindrome: ";
	std::cin >> number;
	
	int temp = number;
	while(temp)
	{
		digit = temp%10;
		reverseNum = (reverseNum*10) + digit;
		temp /= 10;
	}
	
	if(number == reverseNum)
		std::cout << "The number is a palindrome.\n";
	else
		std::cout << "The number isn't a palindrome.\n";
}

void GCD()
{
	int num1, num2, cFact{};
	std::cout << "Enter two numbers to find the greatest common denominator between them: ";
	std::cin >> num1; std::cin >> num2;
	
	int num{};
	if(num1 > num2)
		num = num1;
	else
		num = num2;
	
	for(size_t i{1}; i < num + 1; i++)
	{
		if(num1%i == 0 && num2%i == 0 && cFact < i)
			cFact = i;
	}
	
	std::cout << "The greatest common factor is: " << cFact << std::endl;
}

int main()
{
	multTable();
	
	SumofN();
	
	factorial();
	
	factors();
	
	perfectNumber();
	
	primeNumber();
	
	digitOfNumber();
	
	Armstrong();
	
	reverseNum();
	
	PalindromeNumber();
	
	GCD();
	return 0;
}