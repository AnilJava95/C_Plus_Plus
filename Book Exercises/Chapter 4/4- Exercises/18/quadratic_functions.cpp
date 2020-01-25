/*
 * Author's name and email: Michael
 * Program description: Solving quadratic functions.
 * Latest version: 5:30 PM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <cmath>

double calculate_delta(double a, double b, double c)
{
	return b * b - 4 * a * c;
}

int main()
{
	double a, b, c;
	double delta;
	double r1, r2;

	std::cout << "enter a, b and c of a quadratic function: ";
	std::cin >> a >> b >> c;

	delta = calculate_delta(a, b, c);

	r1 = (sqrt(delta) - b) / (2 * a);
	r2 = (-sqrt(delta) - b) / (2 * a);

	std::cout << "r1: " << r1 << " r2: " << r2;
}