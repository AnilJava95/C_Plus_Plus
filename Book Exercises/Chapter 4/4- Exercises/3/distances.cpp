/*
 * Author's name and email: Michael
 * Program description: Take distances between cities. Find sum, smallest,
 *  largest, average.
 * Latest version: 4:26 PM, 11/21/2019. Now the input ends if a non positive
 *  number is entered.
 * Older versions: 3:42 PM, 11/21/2019.
 */

#include <iostream>
#include <vector>
#include <limits>

int main()
{
	std::vector<double> distances;
	double smallest = std::numeric_limits<double>::max();
	double largest = std::numeric_limits<double>::min();

	for (double distance; std::cin >> distance;)
	{
		if (distance > 0)
			distances.push_back(distance);
		else
			break;
	}

	// compute mean distance
	double sum = 0;
	for (double distance : distances)
	{
		sum += distance;
		if (distance < smallest)
			smallest = distance;
		if (distance > largest)
			largest = distance;
	}
	std::cout << "Sum of distances: " << sum << '\n' << "Average distance: "
		<< sum / distances.size() << '\n' << "Smallest: " << smallest << "\n"
		"Largest: " << largest;
}