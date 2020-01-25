/*
 * Author's name and email: Michael
 * Program description: Finds the most common entered value along 
 *  with min and max.
 * Latest version: 4:59 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::string s;
	std::string min;
	std::string max;
	std::vector<std::string> strings;
	int mode_index;
	int maxLength = 0;
	int length = 1;

	std::cout << "Enter string: ";

	while (std::cin >> s)
	{
		strings.push_back(s);
		std::cout << "Enter string: ";
	}

	std::sort(strings.begin(), strings.end());

	min = strings[0];
	max = strings[strings.size() - 1];
	
	mode_index = 0;
	for (int counter = 1; counter <= strings.size() - 1; counter++)
	{
		if (strings[counter] == strings[counter - 1] )
		{
			length++;
		}
		else
		{
			if (length > maxLength)
			{
				maxLength = length;
				mode_index = counter - 1;
			}

			length = 1;
		}

		if (counter == strings.size() - 1 && length > maxLength)
		{
			maxLength = length;
			mode_index = counter - 1;
		}
	}

	std::cout << "min: " << min << " max: " << max << " mode: " 
		<< strings[mode_index] << " Length: " << maxLength << '\n';
}