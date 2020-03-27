/*
 * Author's name and email: Michael
 * Program description: We have a name and an age vector. Their values
 *  are paired. We sort the name vector using the sort function. Then
 *  we manually fix the age vector so values allign. This version
 *  allows arbitrary number of inputs instead of 5.
 * Latest version: 9:14 PM, 2/29/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>
#include <algorithm>

void print(std::vector<std::string>& name, std::vector<int>& age)
{
	for (int counter = 0; counter < name.size(); counter++)
	{
		std::cout << '(' << name[counter] << ',' << age[counter] << ")\n";
	}
	std::cout << '\n';
}

// find n's index in v
int find_index(const std::vector<std::string>& nameTemp, const std::string& n)
{
	for (int i = 0; i < nameTemp.size(); i++)
	{
		if (nameTemp[i] == n)
		{
			return i;
		}
	}
}

int main()
{
	std::vector<std::string> name;
	std::vector<std::string> nameTemp;
	std::vector<int> age;
	std::vector<int> ageTemp;

	std::cout << "Enter names(enter 0 to stop): ";
	while (std::cin)
	{
		std::string name1;
		std::cin >> name1;
		if (name1 == "0")
			break;
		name.push_back(name1);
	}
	nameTemp = name;

	std::cout << "Enter ages of these people(enter a negative value to stop): ";
	while (std::cin)
	{
		int age1;
		std::cin >> age1;
		if (age1 < 0)
			break;
		age.push_back(age1);
	}
	ageTemp = age;

	print(name, age);

	sort(name.begin(), name.end());

	// Use nameTemp and ageTemp to sort age with 
	//  respect to name.
	for (int i = 0; i < name.size(); i++)
	{
		int index = find_index(nameTemp, name[i]);
		age[i] = ageTemp[index];
	}

	print(name, age);
}
