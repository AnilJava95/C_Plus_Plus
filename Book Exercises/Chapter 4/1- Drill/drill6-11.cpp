/*
 * Author's name and email: Michael
 * Program description: Value-unit pairs are entered. All values are
 *  converted to meters. We find the smallest, largest, sum and count
 *  of values entered. And we print the values entered.
 * Latest version: 11:31 AM, 11/21/2019.
 * Older versions:
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

int main()
{
	double number;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();

	constexpr double cm_to_m = 0.01;
	constexpr double in_to_m = 0.0254;
	constexpr double ft_to_m = 0.3048;
	std::vector<std::string> units = { "cm", "m", "in", "ft" };
	bool unit_flag = false;
	std::string unit = " ";

	double sum = 0;
	int count = 0;

	std::vector<double> values;

	while (std::cin >> number >> unit)
	{
		// see if user has entered a valid unit
		for (std::string vector_unit : units)
		{
			if (unit == vector_unit)
			{
				unit_flag = true;
				break;
			}
		}
		if (unit_flag == false)
		{
			std::cout << "Invalid unit. Try again.\n";
			continue;
		}
		unit_flag = false; // reset unit_flag for next iteration

		// convert to m
		if (unit == "cm")
			number *= cm_to_m;
		else if (unit == "in")
			number *= in_to_m;
		else if (unit == "ft")
			number *= ft_to_m;

		// print the number in meters, add it to sum and increment count
		std::cout << "Entered value is equal to " << number << " m\n";
		sum += number;
		values.push_back(number);
		count++;

		// check if new value is smallest
		if (number < smallest)
		{
			smallest = number;
			std::cout << "It is the smallest so far.\n";
		}

		// check if new value is largest
		if (number > largest)
		{
			largest = number;
			std::cout << "It is the largest so far.\n";
		}
	}

	std::cout << "Smallest: " << smallest << " Largest: " << largest << 
		" Sum: " << sum << " Count: " << count << '\n';
	std::sort(values.begin(), values.end());
	for (double value : values)
		std::cout << value << '\n';
}