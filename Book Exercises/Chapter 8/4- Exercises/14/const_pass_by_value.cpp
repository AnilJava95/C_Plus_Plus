/*
 * Author's name and email: Michael
 * Program description: Having a const pass by value parameter prevents the
 *  parameter from being changed. According to stackoverflow, pass by value
 *  parameters should rarely by changed.
 *  https://stackoverflow.com/questions/6125425/const-for-non-reference-arguments
 * Latest version: 1:25 PM, 3/1/2020.
 * Older versions:
 */

#include <iostream>

void const_pass_by_value(const int x)
{
	x = 6;
}

int main()
{
	int x = 5;

	const_pass_by_value(x);
}
