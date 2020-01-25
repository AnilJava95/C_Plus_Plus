/*
 * Author's name and email: Michael
 * Program description: Debugging this repeated words program 
 *  with the input "The cat cat jumped" and "She she laughed He 
 *  He He because what he did did not look very very good good".
 * Latest version: 2:04 PM, 11/13/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::string previous = " ";
	std::string current;
	while (std::cin >> current)
	{
		if (previous == current)
			std::cout << "repeated word: " << current << '\n';
		previous = current;
	}
}