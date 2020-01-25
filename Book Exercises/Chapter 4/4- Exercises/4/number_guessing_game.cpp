/*
 * Author's name and email: Michael
 * Program description: Computer tries to guess which number you 
 * have in your mind between 1 and 100.
 * Latest version: 5:10 PM, 11/21/2019. Added a default case. 
 *  When the default case is hit, tries variable wont increment 
 *  and the guess of the computer wont change.
 * Older versions: 4:04 PM, 11/21/2019.
 */

#include <iostream>

int main()
{
	int low = 1, high = 100;
	char userResponse;
	int tries = 0;
	int newGuess;
	bool bad_input_flag = false;

	std::cout << "Answer using 'h' for higher, 'l' for lower "
		"and 'c' for correct.\n";
	do
	{
		if (bad_input_flag == false)
			newGuess = low + ((high - low) / 2);
		else
			bad_input_flag = false;

		std::cout << "Is your number " << newGuess << " ? ";
		std::cin >> userResponse;

		switch (userResponse)
		{
		case 'c':
			std::cout << "I guessed the number in " << ++tries
				<< " tries.\n";
			exit(0);
		case 'h':
			low = newGuess;
			break;
		case 'l':
			high = newGuess;
			break;
		default:
			std::cout << "Invalid input. Try again.\n";
			bad_input_flag = true;
			continue;
		}
		tries++;
	} while (true);
}