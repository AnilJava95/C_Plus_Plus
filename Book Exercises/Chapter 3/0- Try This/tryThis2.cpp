/*
 * Author's name and email: Michael
 * Program description: Using operators in C++.
 * Latest version: 11:23 AM, 11/13/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::cout << "Please enter an integer value\n";
	int n;
	std::cin >> n;
	std::cout << "n == " << n
		<< "\nn + 1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';
}