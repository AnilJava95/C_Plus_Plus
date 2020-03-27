/*
 * Author's name and email: Michael
 * Program description: Using pass by value, pass by reference and
 *  pass by const reference. Seeing what you can and cant do with them.
 * Latest version: 2:26 AM, 2/10/2020.
 * Older versions:
 */

#include <iostream>

void swap_v(int a, int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

// Doesnt compile. Tries to change the values of const parameters.
/*
void swap_cr(const int& a, const int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
*/

int main()
{

	int x = 7;
	int y = 9;
	swap_v(x, y); // Doesnt swap
	swap_v(7, 9); // Cant swap literals.
	const int cx = 7;
	const int cy = 9;
	swap_v(cx, cy); // Doesnt swap
	swap_v(7.7, 9.9); // Cant swap literals.
	double dx = 7.7;
	double dy = 9.9;
	swap_v(dx, dy); // Doesnt swap
	swap_v(7.7, 9.9); // Cant swap literals.

	/*
	int x = 7;
	int y = 9;
	swap_r(x, y); // Swaps
	// Doesnt compile. You have to pass variables when using pass by reference.
	//swap_r(7, 9);
	const int cx = 7;
	const int cy = 9;
	// Doesnt compile. You cant change constant values.
	//swap_r(cx, cy);
	// Doesnt compile. You have to pass variables when using pass by reference.
	//swap_r(7.7, 9.9);
	double dx = 7.7;
	double dy = 9.9;
	// You cant pass a double to an int reference.
	swap_r(dx, dy);
	// You cant pass a double to an int reference.
	swap_r(7.7, 9.9);
	*/

	// swap_cr doesnt compile so we cant use these.
	/*
	int x = 7;
	int y = 9;
	swap_cr(x, y);
	swap_cr(7, 9);
	const int cx = 7;
	const int cy = 9;
	swap_cr(cx, cy);
	swap_cr(7.7, 9.9);
	double dx = 7.7;
	double dy = 9.9;
	swap_cr(dx, dy);
	swap_cr(7.7, 9.9);
	*/
}
