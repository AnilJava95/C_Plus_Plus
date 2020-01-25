/*
 * Author's name and email: Michael
 * Program description: Takes the number of pennies, nickels, dimes, 
 *  quarters, half dollars and one dollars. Calculates the amount of 
 *  money.
 * Latest version: 7:05 PM, 11/17.2019.
 * Older versions: 
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

	if (pennyNumber == 1)
		std::cout << "\nYou have " << pennyNumber << " penny.\n";
	else
		std::cout << "\nYou have " << pennyNumber << " pennies.\n";
	if (nickelNumber == 1)
		std::cout << "You have " << nickelNumber << " nickel.\n";
	else
		std::cout << "You have " << nickelNumber << " nickels.\n";
	if (dimeNumber == 1)
		std::cout << "You have " << dimeNumber << " dime.\n";
	else
		std::cout << "You have " << dimeNumber << " dimes.\n";
	if (quarterNumber == 1)
		std::cout << "You have " << quarterNumber << " quarter.\n";
	else
		std::cout << "You have " << quarterNumber << " quarters.\n";
	if (halfDollarNumber == 1)
		std::cout << "You have " << halfDollarNumber << " half dollar.\n";
	else
		std::cout << "You have " << halfDollarNumber << " half dollars.\n";
	if (oneDollarNumber == 1)
		std::cout << "You have " << oneDollarNumber << " one dollar.\n";
	else
		std::cout << "You have " << oneDollarNumber << " one dollars.\n";

	balanceInPennies = pennyNumber + nickelNumber * 5 + dimeNumber * 10 +
		quarterNumber * 25 + halfDollarNumber * 50 + oneDollarNumber * 100;
	std::cout << "The value of all your coins is $" << balanceInPennies / 100;
}