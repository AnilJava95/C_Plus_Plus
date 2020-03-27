/*
 * Author's name and email: Michael
 * Program description: Passes a string and an int vector to 
 *  the print function to print the elements.
 * Latest version: 10:14 PM, 2/28/2020.
 * Older versions:
 */
 
#include <iostream>
#include <vector>

void print(std::string& label, std::vector<int>& b)
{
	for (int counter = 0; counter < b.size(); counter++)
	{
		std::cout << counter << "th " << label << ' ' << b[counter] << '\n';
	}
}

int main()
{
	std::string label = "Point";
	std::vector<int> points = { 5, 7, 2, 4, 3 };

	print(label, points);
}
