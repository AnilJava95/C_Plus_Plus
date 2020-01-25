/*
 * Author's name and email: Michael
 * Program description: Added error message if sum overflows.
 * Latest version: 11:50 AM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	int n, number, sum = 0;
	std::vector<int> numbers;

	// We will sum first n numbers entered.
	std::cout << "Enter the number of values you want to sum: ";
	std::cin >> n;
	if (n <= 0)
	{
		std::cout << "Enter a positive number.";
		exit(1);
	}

	// Take any number of integers and add them to sum.
	std::cout << "Enter integers. Enter a non integer to stop: ";
	while (std::cin >> number)
		numbers.push_back(number);

	// Number of numbers entered must be equal or higher than n.
	if (n > numbers.size())
	{
		std::cout << "You havent entered enough numbers.";
		exit(1);
	}

	try {
		// Outputting the first n numbers and their sum.
		std::cout << "The sum of the first " << n << " numbers ( ";
		for (int i = 0; i < n; i++)
		{
			std::cout << numbers[i] << ' ';
			sum += numbers[i];
			if (sum < 0)
				throw std::overflow_error("sum overflowed");
		}
		std::cout << ") is " << sum;
	}
	catch (std::overflow_error& e)
	{
		std::cerr << e.what();
	}
}
