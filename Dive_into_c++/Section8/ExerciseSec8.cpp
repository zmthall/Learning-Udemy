#include <iostream>
#include <utility>

void Diplay(int* arr, size_t size)
{
	for(size_t i{}; i < size; i++)
		if(i == size - 1)
			std::cout << arr[i];
		else
			std::cout << arr[i] << " ";
}

int SumArr(int* arr, size_t size)
{
	int sum{};
	for(size_t i{}; i < size; i++)
		sum += arr[i];

	return sum;
}

int MaxElem(int* arr, size_t size)
{
	int result{arr[0]};
	
	for(size_t i{}; i < size; i++)
	{
		if(arr[i] > result)
			result = arr[i];
	}
	
	return result;
}

int MinElem(int* arr, size_t size)
{
	int result{arr[0]};
	
	for(size_t i{}; i < size; i++)
	{
		if(arr[i] < result)
			result = arr[i];
	}
	
	return result;
}

void sortArr(int* arr, size_t size)
{
	for(size_t i{}; i < size - 1; i++)
	{
		for(size_t j{i + 1}; j < size; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int linearSearch(int* arr, size_t size, int key)
{
	for(size_t i{}; i < size; i++)
		if(key == arr[i])
			return i;
	
	std::cout << "No value matches.\n";
	return -1;
}

int binarySearch(int* arr, size_t size, int key)
{
	sortArr(arr, size);
	
	size_t low{}, mid{}, high{size};
	
	while(low <= high)
	{
		mid = {(low + high)/2};
		if(arr[mid] == key)
			return mid;
		else if(key < arr[mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	
	std::cout << "No value matches.\n";
	return -1;
}

std::pair<size_t, size_t> CountPosNeg(int* arr, size_t size)
{
	std::pair<size_t, size_t> result;
	size_t pCount{}, nCount{};
	
	for(size_t i{}; i < size; i++)
	{
		if(arr[i] >= 0)
			pCount++;
		else
			nCount++;
	}
	
	result = std::make_pair(pCount, nCount);
	
	return result;
}

void DrawNumberSwuare(size_t size)
{
	int count{1};
	for(size_t i{}; i < size; i++)
	{
		for(size_t j{}; j < size; j++)
			std::cout << count++ << "\t";
		std::cout << std::endl;
	}
}

void drawLeftTriangle(size_t size)
{
	size_t count{1};
	for(size_t i{}; i < size; i++)
	{
		for(size_t j{}; j < size; j++)
		{
			if(j < count)
				std::cout << "*";
		}
		count++;
		std::cout << std::endl;
	}
}

void drawRightTriangle(size_t size)
{
	size_t count{size - 1};
	for(size_t i{}; i < size; i++)
	{
		for(size_t j{}; j < size; j++)
		{
			if(j >= count)
				std::cout << "*";
			else
				std::cout << " ";
		}
		count--;
		std::cout << std::endl;
	}
}

void Display2DArr(int* arr, size_t colSize, size_t rowSize)
{
	for(size_t i{}; i < colSize; i++)
	{
		for(size_t j{}; j < rowSize; j++)
		{
			std::cout << *((arr+i*rowSize) + j)<<" ";
		}
		std::cout << std::endl;
	}
}

int avgNum(int* arr, size_t size)
{
	int sum{};
	for(size_t i{}; i < size; i++)
		sum += arr[i];
		
	sum /= size;
	
	return sum;
}

int main()
{
	int A[]{2, 4, 6, 8, 10};
	int B[]{4, 8, 6, 9, 5, 2, 156};
	int C[]{3,5,-2,9,-4,10,-24,19,81,-7,12,13};
	
	int D[2][4]{{1, 2, 3, 4}, {5, 6, 7, 8}};
	
	Diplay(A, 5);
	
	std::cout << std::endl;
	
	std::cout << "The arr's sum is: " << SumArr(A, 5) << std::endl;
	
	std::cout << "The arr's max is: " << MaxElem(B, 7) << std::endl;
	std::cout << "The arr's min is: " << MinElem(B, 7) << std::endl;
	
	std::cout << "The value 2 is found at index [" << linearSearch(B, 7, 2) << "]\n";
	
	std::cout << "The value 2 is found at index [" << linearSearch(B, 7, 2) << "]\n";
	
	auto value = CountPosNeg(C, 12);
	
	std::cout << "The number of positive values is '" << value.first << "' and the number of negative values is '" << value.second << "'\n";
	
	DrawNumberSwuare(4);
	drawLeftTriangle(4);
	drawRightTriangle(4);
	
	Display2DArr(D[0], 2, 4);
	
	std::cout << "The average of the numbers in {"; 
	Diplay(B,7); 
	std::cout << "} is " << avgNum(B, 7) << std::endl;;
	
	return 0;
}