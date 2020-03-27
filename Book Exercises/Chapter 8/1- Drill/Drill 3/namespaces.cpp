/*
 * Author's name and email: Michael
 * Program description: Creating and using namespaces.
 * Latest version: 5:19 PM, 2/10/2020.
 * Older versions:
 */

#include <iostream>

namespace X
{
	int var;

	void print()
	{
		std::cout << var << '\n';
	}
}

namespace Y
{
	int var;

	void print()
	{
		std::cout << var << '\n';
	}
}

namespace Z
{
	int var;

	void print()
	{
		std::cout << var << '\n';
	}
}

int main()
{
	X::var = 7; // Sets X::var to 7.
	X::print(); // Calls X::print
	using namespace Y; // Switches to namespace Y
	var = 9; // Sets Y::var to 9
	print(); // Calls Y::print
	{
		using Z::var; // Switches to using Z's var in this scope
		using Z::print; // Switches to using Z's print in this scope
		var = 11; // Sets Z::var to 11
		print(); // Calls Z::print
	}
	print(); // Calls Y::print
	X::print(); // Calls X::print
}
