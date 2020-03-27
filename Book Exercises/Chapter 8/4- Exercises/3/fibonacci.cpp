/*
 * Author's name and email: Michael
 * Program description: Takes first two elements and length of a fibonacci
 *  series from user, calculates the series and prints it.
 * Latest version: 11:14 PM, 2/28/2020.
 * Older versions:
 */

#include <iostream>
#include <vector>

void print(std::string& label, std::vector<int>& b)
{
	std::cout << '\n';
	for (int counter = 0; counter < b.size(); counter++)
	{
		std::cout << counter << "th " << label << ' ' << b[counter] << '\n';
	}
}

void fibonacci(int x, int y, std::vector<int>& v, int n)
{
	v.push_back(x);
	v.push_back(y);

	for (int counter = 2; counter < n; counter++)
	{
		int z = x + y;
		v.push_back(z);
		x = y;
		y = z;
	}
}

int main()
{
	std::string label = "Point";
	std::vector<int> points;
	int x, y, n;

	std::cout << "Enter first two elements of your fibonacci series and number of "
		<< "elements in your series: ";
	std::cin >> x >> y >> n;
	fibonacci(x, y, points, n);

	print(label, points);
}
