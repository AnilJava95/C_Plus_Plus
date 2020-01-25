/*
 * Author's name and email: Michael
 * Program description: Takes an operation and two operands from user
 *  and shows the result.
 * Latest version: 2:44 PM 11/17/2019.
 * Older versions: 
 */

#include <iostream>

int main()
{
	std::string operation;
	double operand1, operand2, result;

	std::cout << "Enter an operation(+, -, *, /, plus, minus, mul, div)"
		" followed by two operands\n";
	while (std::cin >> operation >> operand1 >> operand2)
	{
		if (operation == "+" || operation == "plus")
			result = operand1 + operand2;
		else if (operation == "-" || operation == "minus")
			result = operand1 - operand2;
		else if (operation == "*" || operation == "mul")
			result = operand1 * operand2;
		else if (operation == "/" || operation == "div")
			if (operand2 !=)
				result = operand1 / operand2;
			else
				std::cout << "Operand2 cant be zero.";
		
		std::cout << operand1 << ' ' << operation << ' ' << operand2 << 
			" = " << result << '\n';
	}
}