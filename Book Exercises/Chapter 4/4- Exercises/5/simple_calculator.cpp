/*
 * Author's name and email: Michael
 * Program description: Simple calculator. Has +, -, *, /.
 * Latest version: 5:32 PM, 11/21/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	double number1, number2;
	char user_operator;

	std::cout << "Enter a double value, an operator(+, -, *, /) and another "
		"double value(e.g. 2.3 + 2.0): ";

	while (std::cin >> number1 >> user_operator >> number2)
	{
		switch (user_operator)
		{
		case '+':
			std::cout << "The sum of " << number1 << " and " << number2 <<
				" is " << number1 + number2 << ".\n";
			break;
		case '-':
			std::cout << "The difference of " << number1 << " and " << number2 <<
				" is " << number1 - number2 << ".\n";
			break;
		case '*':
			std::cout << "The product of " << number1 << " and " << number2 <<
				" is " << number1 * number2 << ".\n";
			break;
		case '/':
			if (number2 != 0)
				std::cout << "The quotient of " << number1 << " and " << number2 <<
				" is " << number1 / number2 << ".\n";
			else
				std::cout << "You cant divide by zero. Try again.\n";
			break;
		default:
			std::cout << "Invalid operator. Try again.\n";
		}

		std::cout << "Next calculation: ";
	}
}