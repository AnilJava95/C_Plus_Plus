/*
 * Author's name and email: Michael
 * Program description: Takes the number of pennies, nickels, dimes,
 *  quarters, half dollars and one dollars. Calculates the amount of
 *  money.
 * Latest version: 8:28 PM, 3/25/2020. Old version used if else statements
 *  to determine whether to print penny or pennies. This version uses a
 *  single line instead of 4 and uses a single cout call with conditional
 *  operator.
 * Older versions: 7:05 PM, 11/17.2019.
 */

#include <iostream>

int main()
{
	int pennyNumber, nickelNumber, dimeNumber, quarterNumber,
		halfDollarNumber, oneDollarNumber;
	double balanceInPennies;

	std::cout << "How many pennies do you have> ";
	std::cin >> pennyNumber;
	std::cout << "How many nickels do you have> ";
	std::cin >> nickelNumber;
	std::cout << "How many dimes do you have> ";
	std::cin >> dimeNumber;
	std::cout << "How many quarters do you have> ";
	std::cin >> quarterNumber;
	std::cout << "How many half dollars do you have> ";
	std::cin >> halfDollarNumber;
	std::cout << "How many one dollars do you have> ";
	std::cin >> oneDollarNumber;

	std::cout << "\nYou have " << pennyNumber << " penn" << ((pennyNumber == 1) ? "y." : "ies.")
		<< "\nYou have " << nickelNumber << " nickel" << ((nickelNumber == 1) ? "." : "s.")
		<< "\nYou have " << dimeNumber << " dime" << ((dimeNumber == 1) ? "." : "s.")
		<< "\nYou have " << quarterNumber << " quarter" << ((quarterNumber == 1) ? "." : "s.")
		<< "\nYou have " << halfDollarNumber << " half dollar" << ((halfDollarNumber == 1) ? "." : "s.")
		<< "\nYou have " << oneDollarNumber << " one dollar" << ((oneDollarNumber == 1) ? "." : "s.");

	balanceInPennies = pennyNumber + nickelNumber * 5 + dimeNumber * 10 +
		quarterNumber * 25 + halfDollarNumber * 50 + oneDollarNumber * 100;
	std::cout << "\nThe value of all your coins is $" << balanceInPennies / 100;
}