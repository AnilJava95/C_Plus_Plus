/*
 * Author's name and email: Michael
 * Program description: maxv function finds the maximum element
 *  of its vector parameter.
 * Latest version: 11:27 PM, 2/29/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>

double maxv(const std::vector<double>& price)
{
	double max = 0;

	for (int i = 0; i < price.size(); i++)
	{
		if (price[i] > max)
			max = price[i];
	}

	return max;
}

int main()
{
	std::vector<double> price = { 1, 2, 3, -2, 0, 56, 99, 12 };

	std::cout << "Max: " << maxv(price);
}
