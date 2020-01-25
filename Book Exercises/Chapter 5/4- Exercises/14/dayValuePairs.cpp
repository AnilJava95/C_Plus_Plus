/*
 * Author's name and email: Michael
 * Program description: Takes day-value pairs from user. Keeps values 
 *  in vectors and keeps their sums in variables. Prints at the end.
 * Latest version: 5:28 PM, 11/28/2019.
 * Older versions: 
 */

#include <iostream>
#include <vector>

int main()
{
	std::vector<int> monday;
	std::vector<int> tuesday;
	std::vector<int> wednesday;
	std::vector<int> thursday;
	std::vector<int> friday;
	std::vector<int> saturday;
	std::vector<int> sunday;

	int mondaySum = 0;
	int tuesdaySum = 0;
	int wednesdaySum = 0;
	int thursdaySum = 0;
	int fridaySum = 0;
	int saturdaySum = 0;
	int sundaySum = 0;

	std::string day;
	int value;

	int rejectedCount = 0;

	// Take day-value pair form user. Add value to related vector 
	//  and add value to related sum.
	std::cout << "Enter day-value pairs (e.g. Tuesday 23). Enter \"end 0\" to finish: ";
	while (std::cin >> day >> value)
	{
		if (day == "Monday" || day == "monday" || day == "Mon" || day == "mon")
		{
			monday.push_back(value);
			mondaySum += value;
		}
		else if (day == "Tuesday" || day == "tuesday" || day == "Tue" || day == "tue")
		{
			tuesday.push_back(value);
			tuesdaySum += value;
		}
		else if (day == "Wednesday" || day == "wednesday" || day == "Wed" || day == "wed")
		{
			wednesday.push_back(value);
			wednesdaySum += value;
		}
		else if (day == "Thursday" || day == "thursday" || day == "Thu" || day == "thu")
		{
			thursday.push_back(value);
			thursdaySum += value;
		}
		else if (day == "Friday" || day == "friday" || day == "Fri" || day == "fri")
		{
			friday.push_back(value);
			fridaySum += value;
		}
		else if (day == "Saturday" || day == "saturday" || day == "Sat" || day == "sat")
		{
			saturday.push_back(value);
			saturdaySum += value;
		}
		else if (day == "Sunday" || day == "sunday" || day == "Sun" || day == "sun")
		{

			sunday.push_back(value);
			sundaySum += value;
		}
		else if (day == "end")
			break;
		else
		{
			std::cout << "Error. Try again.";
			rejectedCount++;
		}
	}
	
	// Print out results
	std::cout << "\nMonday: ";
	for (int value : monday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << mondaySum << "\n\n";

	std::cout << "Tuesday: ";
	for (int value : tuesday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << tuesdaySum << "\n\n";

	std::cout << "Wednesday: ";
	for (int value : wednesday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << wednesdaySum << "\n\n";

	std::cout << "Thursday: ";
	for (int value : thursday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << thursdaySum << "\n\n";

	std::cout << "Friday: ";
	for (int value : friday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << fridaySum << "\n\n";

	std::cout << "Saturday: ";
	for (int value : saturday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << saturdaySum << "\n\n";

	std::cout << "Sunday: ";
	for (int value : sunday)
		std::cout << ' ' << value;
	std::cout << "\n Sum: " << sundaySum << "\n\n";
}