/*
 * Author's name and email: Michael
 * Program description:  Takes name-score pairs from user. Checks if names
 *  are unique. Exits the program with an error message if non unique names 
 *  exist. Prints the list of names if they dont exist.
 * Latest version: 10:24 AM, 11/23/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<std::string> names;
	std::vector<int> scores;
	std::string name;
	int score;

	// input pairs
	std::cout << "Enter name - score pairs. Terminate with \"NoName 0\": ";
	while (std::cin >> name >> score)
	{
		if (name != "NoName" || score != 0)
		{
			names.push_back(name);
			scores.push_back(score);
		}
		else
			break;
		
		std::cout << "Next pair: ";
	}

	// sort vectors
	std::sort(names.begin(), names.end());
	std::sort(scores.begin(), scores.end());

	// check if names are unique
	for (int counter = 1; counter < names.size(); counter++)
	{
		if (names[counter] == names[counter - 1])
		{
			std::cout << "The name " << names[counter] << " is not unique.";
			exit(0);
		}
	}

	std::cout << '\n';
	// prints name-score pairs if all names are unique
	for (int counter = 0; counter < names.size(); counter++)
	{
		std::cout << counter + 1 << ". name: " << names[counter] << " score: " 
			<< scores[counter] << '\n';
	}
}