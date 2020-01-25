/*
 * Author's name and email: Michael
 * Program description: Rock paper scissors game. Compuer uses a pre
 *  determined vector for its choice.
 * Latest version: 12:04 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<char> commands = { 'r', 'p', 'r', 's', 'p', 'r', 'r', 
		's', 'p', 's', 'p' };
	char user_choice;

	for (char command : commands)
	{
		std::cout << "Choose rock(r), paper(p) or scissors(s)> ";
		std::cin >> user_choice;

		if (user_choice == command)
			std::cout << "Cpu chose " << command << ". You tie.\n";

		switch (user_choice)
		{
		case 'r':
			switch (command)
			{
			case 'p':
				std::cout << "Cpu chose paper. You lose.\n";
				break;
			case 's':
				std::cout << "Cpu chose scissors. You win.\n";
				break;
			}
			break;
		case 'p':
			switch (command)
			{
			case 'r':
				std::cout << "Cpu chose rock. You win.\n";
				break;
			case 's':
				std::cout << "Cpu chose scissors. You lose.\n";
				break;
			}
			break;
		case 's':
			switch (command)
			{
			case 'r':
				std::cout << "Cpu chose rock. You lose.\n";
				break;
			case 'p':
				std::cout << "Cpu chose paper. You win.\n";
				break;
			}
			break;
		default:
			std::cout << "Invalid input. Try again.";
		}
	}
}