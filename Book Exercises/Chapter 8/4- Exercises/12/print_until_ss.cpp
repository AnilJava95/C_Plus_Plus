/*
 * Author's name and email: Michael
 * Program description: print_until_s is a function from section
 *  8.5.2. print_until_ss is a different version where we keep
 *  printing elements of the v string array until we see second
 *  occurance of its quit argument.
 * Latest version: 12:01 PM, 3/1/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>

void print_until_ss(std::vector<std::string> v, std::string quit)
{
	int quitCounter = 0;

	for (std::string s : v)
	{
		if (s == quit)
			quitCounter++;
		if (quitCounter >= 2)
			return;
		std::cout << s << '\n';
	}
}

int main()
{
	std::vector<std::string> v = { "S", "s", "a", "s" };
	std::string quit = "s";

	print_until_ss(v, quit);
}
