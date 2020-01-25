/*
 * Author's name and email: Michael
 * Program description: Plays "Bulls and Cows" game.
 * Latest version: 2:50 PM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers1 = { 6, 2, 4, 7 };
	std::vector<int> numbers2;
	int number;
	int bullCount = 0, cowCount = 0;

	while (bullCount != 4)
	{
		std::vector<int> numbers2 = { }; // Reset guesses from last iteration.

		// Inputting 4 user digits and checking whether they are unique.
		std::cout << "Enter 4 digits. Dont use the same digit twice.\n";

		for (int i = 0; i < 4; i++)
		{
			std::cout << "Enter " << i + 1 << "th digit: ";
			std::cin >> number;
			numbers2.push_back(number);
			for (int j = 0; j < numbers2.size() - 1; j++)
			{
				if (numbers2[i] == numbers2[j])
				{
					std::cout << "Use unique digits.";
					exit(1);
				}
			}
		}

		bullCount = 0, cowCount = 0; // Reset data from last iteration

		// See how many bulls and cows there are and report to user.
		for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 4; j++)
			{
				if (numbers2[i] == numbers1[j])
				{
					if (i == j)
					{
						bullCount++;
						break;
					}
					else
					{
						cowCount++;
						break;
					}
				}
			}
		}
		std::cout << bullCount << " bull and " << cowCount << " cow\n\n";
	}
}