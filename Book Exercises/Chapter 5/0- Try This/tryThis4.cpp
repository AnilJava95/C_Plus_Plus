/*
 * Author's name and email: Michael
 * Program description: Not catching an exception on purpose.
 * Latest version: 3:08 PM, 11/26/2019.
 * Older versions: 
 */

#include <iostream>
//#include <stdexcept>


class Bad_area { };

int area(int length, int width)
{
	if (length <= 0 || width <= 0)
		throw Bad_area{};
}

int main()
{
	//try {
		int x = -1, y = 2, z = 4;

		int area1 = area(x, y);
	/*}
	catch (Bad_area) {
		std::cerr << "Bad arguments to area()\n";
	}*/
}
