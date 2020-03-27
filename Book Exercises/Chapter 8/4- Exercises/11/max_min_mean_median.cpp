/*
 * Author's name and email: Michael
 * Program description: maxv function finds the maximum , minimum, mean
 *  and median of its vector parameter.
 * Latest version: 12:21 AM, 3/1/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>
#include <limits>
#include <algorithm>

void maxv(std::vector<int>& price, int& max, int& min,
	double& mean, double& median)
{
	double total = 0;

	for (int i = 0; i < price.size(); i++)
	{
		total += price[i];
		if (price[i] > max)
			max = price[i];
		if (price[i] < min)
			min = price[i];
	}

	mean = total / price.size();

	sort(price.begin(), price.end());
	if (price.size() % 2 == 1)
		median = price[price.size() / 2];
	else
		median = ((price[price.size() / 2 - 1]) + (price[price.size() / 2])) / 2.0;

}

int main()
{
	std::vector<int> price = { 1, 2, 3, -2, 0, 56, 99, 12 };
	int max = 0;
	int min = std::numeric_limits<int>::max();
	double mean = 0;
	double median = 0;

	maxv(price, max, min, mean, median);

	std::cout << "Max: " << max << "\nMin: " << min << "\nMean: " << mean
		<< "\nMedian: " << median;
}
