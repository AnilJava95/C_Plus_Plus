/*
 * Author's name and email: Michael
 * Program description: Approximating max value of int using the fibonacci
 *  function.
 * Latest version: 11:25 PM, 2/28/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>

void print(std::vector<int>& b)
{
	std::cout << "\n\n";
	for (int counter = 0; counter < b.size(); counter++)
	{
		std::cout << counter << "th iteration: " << b[counter] << '\n';
	}
}

void fibonacci(int x, int y, std::vector<int>& v, int n)
{
	v.push_back(x);
	v.push_back(y);

	while (x < y)
	{

		int z = x + y;
		v.push_back(z);
		x = y;
		y = z;
	}
}

int main()
{
	std::vector<int> points;

	std::cout << "Trying to find approximate max int using the fibonacci function: ";
	fibonacci(1, 2, points, 50);

	print(points);
}
