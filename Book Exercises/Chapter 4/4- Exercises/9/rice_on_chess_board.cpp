/*
 * Author's name and email: Michael
 * Program description: Putting 2^n rice on chess board squares.
 *  Using double variables.
 * Latest version: 11:36 AM, 11/22/2019.
 * Older versions: 
 */

#include <iostream>
#include <cmath>

int main()
{

	double square_number = 1;
	double rice_number = 1;

	while (rice_number < 10000000000000000000) // 19 zeros
	{
		std::cout << "Square number: " << square_number << 
			" Total rice: " << rice_number << '\n';
		rice_number += pow(2.0, square_number);
		square_number++;
	}
	std::cout << "Square number: " << square_number << " Total rice: " 
		<< rice_number << '\n';
}