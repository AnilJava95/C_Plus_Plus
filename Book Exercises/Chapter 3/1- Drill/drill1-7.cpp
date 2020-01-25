/*
 * Author's name and email: Michael
 * Program description: Writing a letter to a friend.
 * Latest version: 5:56 PM, 11/14/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::cout << "Enter the name of the person you want to write to> ";
	std::string first_name;
	std::cin >> first_name;
	std::cout << "Dear " << first_name << ",\n"
		<< "   How are you? I am fine. I miss you."
		<< "\nEnter the name of another friend> ";
	std::string friend_name;
	std::cin >> friend_name;
	std::cout << "Have you seen " << friend_name << " lately?\n";
	char friend_sex = 0;
	std::cout << "Enter m if the friend is male or f if the friend is "
		<< "female> ";
	std::cin >> friend_sex;
	if (friend_sex == 'm')
		std::cout << "If you see " << friend_name << " please ask him "
		<< "to call me.\n";
	if (friend_sex == 'f')
		std::cout << "If you see " << friend_name << " please ask her"
		<< "to call me.\n";

	std::cout << "Enter the age of the recipient> ";
	int age;
	std::cin >> age;
	std::cout << "I hear you just had a birthday and you are " << age
		<< " years old.\n";
	if (age < 0 && age > 110)
		std::cout << "	you are kidding!";
	if (age > 0 && age < 12)
		std::cout << " Next year you will be " << age + 1 << ".\n";
	if (age == 17)
		std::cout << " Next year you will be able to vote.\n";
	if (age > 0 && age > 70)
		std::cout << "I hope you are enjoying retirement.\n";

	std::cout << "Your sincerely,\n\nMichael";
}