/*
 * Author's name and email: Michael
 * Program description: Take name and age(in years) and output name and age 
 *  (in months).
 * Latest version: 4:58 PM, 11/12/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::cout << "Please enter your first name and age\n";
	std::string first_name = "???";
	double age = 0;
	std::cin >> first_name >> age;
	std::cout << "Hello, " << first_name << " (age " << age * 12 << " months)\n";
}