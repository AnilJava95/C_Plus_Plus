/*
 * Author's name and email: Michael
 * Program description: Now uses double instead of int. Also now tracks 
 *  differences between every entered number.
 * Latest version: 12:53 PM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	int n;
	double number, sum = 0.0;
	std::vector<double> numbers;
	std::vector<double> differences;

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
	std::cin >> number;
	numbers.push_back(number);

	for (int i = 0; std::cin >> number; i++)
	{
		numbers.push_back(number);
		differences.push_back(number - numbers[i]);
	}

	// Number of numbers entered must be equal or higher than n.
	if (n > numbers.size())
	{
		std::cout << "You havent entered enough numbers.";
		exit(1);
	}

	// Outputting the first n numbers and their sum.
	std::cout << "The sum of the first " << n << " numbers ( ";
	for (int i = 0; i < n; i++)
	{
		std::cout << numbers[i] << ' ';
		sum += numbers[i];
	}
	std::cout << ") is " << sum << '\n';

	// Output differences
	std::cout << "Differences ( ";
	for (double difference : differences)
	{
		std::cout << difference << ' ';
	}
	std::cout << ") \n";
}
