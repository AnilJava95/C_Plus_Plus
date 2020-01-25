/*
 * Author's name and email: Michael
 * Program description: Finds mean and median values.
 * Latest version: 2:30 PM, 11/21/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<double> temps;
	for (double temp; std::cin >> temp;)
		temps.push_back(temp);

	// compute mean temperature
	double sum = 0;
	for (double x : temps)
		sum += x;
	std::cout << "Average temperature: " << sum / temps.size() << '\n';

	// compute median temperature
	std::sort(temps.begin(), temps.end());
	if (temps.size() % 2 == 1)
		std::cout << "Median temperature: " << temps[temps.size() / 2] << '\n';
	else
		std::cout << "Median temperature: " << ( (temps[temps.size() / 2 - 1]) 
			+ (temps[temps.size() / 2]) ) / 2 << '\n';
}