/*
 * Author's name and email: Michael
 * Program description: Program bleeps out words that are in a list.
 * Latest version: 4:29 PM, 11/20/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::string word = " ";
	std::vector<std::string> disliked_word_list = { "tent", "temp", "tape" };
	bool bleep_flag = false;

	while (std::cin >> word)
	{
		for (std::string disliked_word : disliked_word_list)
		{
			if (word == disliked_word)
			{
				std::cout << "BLEEP\n";
				bleep_flag = true;
				break;
			}
		}

		if (bleep_flag != true)
			std::cout << word << '\n';

		bleep_flag = false;
	}
}