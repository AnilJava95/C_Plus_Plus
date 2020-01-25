/*
 * Author's name and email: Michael
 * Program description:  Takes name-score pairs from user. Then takes
 *  a name and finds its corresponding score.
 * Latest version: 10:51 AM, 11/23/2019.
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

	std::cout << "\nEnter a name to see if it is in the list: ";
	std::cin >> name;

	// prints name-score pairs if all names are unique
	for (int counter = 0; counter < names.size(); counter++)
	{
		if (names[counter] == name)
		{
			std::cout << "Score: " << scores[counter] << '\n';
			break;
		}
		
	}
}