/*
 * Author's name and email: Michael
 * Program description: reverse1 function takes a string vector and
 *  produces its reverse. reverse2 function takes a string vector and
 *  reverses it.
 * Latest version: 7:59 PM, 3/26/2020. rightCounter in reverse2 function
 *  was initialized with "((vector1.size() - 1) - counter)". Changed it
 *  to "(vector1.size() - 1)".
 * Older versions: 2:46 PM, 2/29/2020.
 */

#include <iostream>
#include <vector>

void print(std::vector<std::string>& b)
{
	for (int counter = 0; counter < b.size(); counter++)
	{
		std::cout << counter << "th element: " << b[counter] << '\n';
	}
	std::cout << '\n';
}

std::vector<std::string> reverse1(std::vector<std::string>& vector1)
{
	std::vector<std::string> reverseVector;

	for (int counter = vector1.size() - 1; counter >= 0; counter--)
	{
		reverseVector.push_back(vector1[counter]);
	}

	return reverseVector;
}

void reverse2(std::vector<std::string>& vector1)
{
	for (int counter = 0, rightCounter = (vector1.size() - 1);
		counter < rightCounter; counter++, rightCounter--)
	{
		std::swap(vector1[counter], vector1[rightCounter]);
	}
}

int main()
{
	std::vector<std::string> vector1 = { "a", "b", "c" };
	std::vector<std::string> vector2;

	std::cout << "vector1: \n";
	print(vector1);

	std::cout << "vector2 = reverse1(vector1): \n";
	vector2 = reverse1(vector1);
	print(vector2);

	std::cout << "vector1 = reverse2(vector1): \n";
	reverse2(vector1);
	print(vector1);
}
