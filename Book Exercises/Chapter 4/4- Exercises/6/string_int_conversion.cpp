/*
 * Author's name and email: Michael
 * Program description: Either enter 0-9 and print "zero"-"nine" or
 *  enter "zero"-"nine" and print 0-9.
 * Latest version: 8:00 PM, 11/21/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<std::string> digits = { "zero", "one", "two", "three", 
		"four", "five", "six", "seven", "eight", "nine" };
	int digit;
	std::string string_digit;
	bool success_flag = false;

	/*
	// Use this if you want to convert digit to string.
	while (std::cin >> digit)
	{
		std::cout << digits[digit] << '\n';
	}
	*/

	// Use this if you want to convert string to digit.
	while (std::cin >> string_digit)
	{
		for (int counter = 0; counter < digits.size(); counter++)
			if (string_digit == digits[counter])
			{
				std::cout << counter << '\n';
				success_flag = true;
			}
		if (success_flag == false)
		{
			std::cout << "Invalid digit name. Try again.\n";
		}
		success_flag = false;
	}
}