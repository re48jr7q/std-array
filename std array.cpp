#include <iostream>
#include <array>
#include <cstddef>

template <typename T, std::size_t size>
void printArray(const std::array<T, size>& myArray)
{
	for (auto element : myArray)
		std::cout << element << ' ';
	    std::cout << '\n';
}
int main()
{
	std::array myArray5{ 3.4, 9.1, 5.3, 7.8, 3.2 };
	printArray(myArray5);

	std::array myArray7{ 3, 8, 2, 9, 1, 4, 6, 5, 7 };
	printArray(myArray7);

	return 0;
}
