/*
 * Author's name and email: Michael
 * Program description: Finds the most common entered value.
 * Latest version: 2:40 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	double number;
	std::vector<int> values(101);
	int modeIndex;

	std::cout << "Enter value between [1-100]\n";

	while (std::cin >> number)
	{
		if (number < 1 || number > 100)
		{
			std::cout << "Invalid value. Try again.\n";
			continue;
		}

		values[number]++;

		std::cout << "Enter value between [1-100]\n";
	}


	modeIndex = 1;
	for (int counter = 2; counter <= 100; counter++)
		if (values[counter] > values[modeIndex])
			modeIndex = counter;

	std::cout << "mode: " << modeIndex << '\n';
}