/*
 * Author's name and email: Michael
 * Program description: Calculating roots of a quadratic equation.
 * Latest version: 3:31 PM, 11/27/2019.
 * Older versions: 
 */

#include <iostream>

double calculate_delta(double a, double b, double c)
{
	double delta = b * b - 4 * a * c;
	if (delta < 0)
		throw std::runtime_error("Delta is negative");
	return delta;
}

void calculate_roots(double a, double b, double c)
{
	double delta = calculate_delta(a, b, c);
	double r1 = (sqrt(delta) - b) / (2 * a);
	double r2 = (-sqrt(delta) - b) / (2 * a);
	std::cout << "r1: " << r1 << " r2: " << r2;
}

int main()
{
	double a, b, c;

	std::cout << "Enter a, b and c (non 0) of a quadratic function: ";
	std::cin >> a >> b >> c;
	if (a == 0 || b == 0 || c == 0)
	{
		std::cout << "a, b, c cant be zero.";
		exit(1);
	}

	try {
		calculate_roots(a, b, c);
	}
	catch (std::runtime_error & e) {
		std::cerr << e.what();
	}
}
