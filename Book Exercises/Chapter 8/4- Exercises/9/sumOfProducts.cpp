/*
 * Author's name and email: Michael
 * Program description: Multiplies weight of an item
 *  and price of that item. Does it for all items and 
 *  sums the products.
 * Latest version: 11:27 PM, 2/29/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>

 // find n's index in v
double calculate_sum(const std::vector<double>& price,
	const std::vector<double>& weight)
{
	double sum = 0;

	for (int i = 0; i < price.size(); i++)
	{
		sum += price[i] * weight[i];
	}

	return sum;
}

int main()
{
	std::vector<double> price = { 1.1, 2.25, 3.46 };
	std::vector<double> weight = { 5.67, 4.22, 5.66 };

	std::cout << "Sum: " << calculate_sum(price, weight);
}
