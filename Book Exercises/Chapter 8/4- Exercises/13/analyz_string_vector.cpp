/*
 * Author's name and email: Michael
 * Program description: analyz_string_vector takes a vector of strings.
 *  Finds the longest, shortest, first and last strings. Also finds 
 *  lengths of all strings and puts them in an int vector.
 * Latest version: 1:03 PM, 3/1/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>
#include <limits>

std::vector<int> analyze_string_vector(std::vector<std::string>& v,
	std::string& longest, std::string& shortest,
	std::string& first, std::string& last)
{
	std::vector<int> stringLength;
	int maxLength = 0;
	int minLength = std::numeric_limits<int>::max();

	longest = v[0];
	shortest = v[0];
	first = v[0]; // Lexicographically first
	last = v[0]; // Lexicographically last

	for (int i = 0; i < v.size(); i++)
	{
		int length = 0;

		// find length of current string
		for (int j = 0; j < v[i].size(); j++)
			length++;
		stringLength.push_back(length);

		// find longest string
		if (length > maxLength)
		{
			maxLength = length;
			longest = v[i];
		}

		// find shortest string
		if (length < minLength)
		{
			minLength = length;
			shortest = v[i];
		}

		if (v[i] < first)
			first = v[i];
		if (v[i] > last)
			last = v[i];
	}

	std::cout << "Longest: " << longest << "\nShortest: " << shortest <<
		"\nFirst: " << first << "\nLast: " << last;

	return stringLength;
}

int main()
{
	std::vector<std::string> v = { "poS", "sd", "a", "sasd", "123fda", "s" };
	std::vector<int> lengths;

	std::string longest;
	std::string shortest;
	std::string first;
	std::string last;

	lengths = analyz_string_vector(v, longest, shortest, first, last);
}
