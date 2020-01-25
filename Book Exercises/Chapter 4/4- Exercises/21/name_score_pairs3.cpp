/*
 * Author's name and email: Michael
 * Program description:  Takes name-score pairs from user. Then takes
 *  a value and finds names that have that value.
 * Latest version: 10:55 AM, 11/23/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

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

	std::cout << "\nEnter a score to see which names had that score: ";
	std::cin >> score;

	// prints name-score pairs if all names are unique
	for (int counter = 0; counter < names.size(); counter++)
	{
		if (scores[counter] == score)
		{
			std::cout << "Name: " << names[counter] << '\n';
		}
		
	}
}