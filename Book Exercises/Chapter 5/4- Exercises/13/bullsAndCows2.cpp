/*
 * Author's name and email: Michael
 * Program description: Plays "Bulls and Cows" game. This version 
 *  allows the user to start a new game once the first one is over 
 *  and initialized numbers to be guessed randomly instead of 
 *  hard coding.
 * Latest version: 4:16 PM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>
#include <stdlib.h> 
#include <time.h>

// Initializes the 4 random and unique digits user is trying to guess.
// Not using find function makes the program worse.
void initializeVector(std::vector<int> &numbers1)
{
	try {
		for (int i = 0; i < 4; i++)
		{
			int number = rand() % 10;
			numbers1.push_back(number);
			for (int j = 0; j < numbers1.size() - 1; j++)
			{
				if (numbers1[i] == numbers1[j])
				{
					throw std::runtime_error("Random numbers we not "
						"unique so recall the function");
				}
			}
		}
	}
	catch (std::runtime_error& e) {
		numbers1 = { };
		initializeVector(numbers1);
	}
}

int main()
{
	std::vector<int> numbers1;
	std::vector<int> numbers2;
	int number;
	int bullCount = 0, cowCount = 0;

	srand(time(0));
	
	while (true)
	{
		// Initialize numbers1 vector with 4 random and unique digits.
		initializeVector(numbers1);

		bullCount = 0, cowCount = 0; // Reset data from last game

		while (bullCount != 4)
		{
			numbers2 = { }; // Reset last guess.

			// Inputting 4 user digits and checking whether they are unique.
			// Not using find function makes the program worse.
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
			if (bullCount != 4)
				std::cout << bullCount << " bull and " << cowCount << " cow\n\n";
			else
				std::cout << bullCount << " bull and " << cowCount << " cow CONGRATULATIONS! New game is starting.\n\n";
		}
	}
}