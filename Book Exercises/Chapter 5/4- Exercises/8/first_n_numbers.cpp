/*
 * Author's name and email: Michael
 * Program description: Taking a number n. Then taking a bunch of integers.
 *  Then we print the first n integers and their sum.
 * Latest version: 10:53 AM, 11/28/2019.
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

	// Number of numbers entered must be equal or higher than n,
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
	std::cout << ") is " << sum;
}
