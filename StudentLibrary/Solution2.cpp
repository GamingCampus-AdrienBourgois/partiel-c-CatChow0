#include "Solution2.h"

#include <ostream>
#include <fstream>
#include <iostream>

// Don't forget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_2


float Solution2::GetBalance(const std::string& accountName)
{
	//open file and check if it is open
	std::ifstream file("BankAccount/" + accountName + ".txt");
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return -1.0f;
	}
	//get value line by line and subract or add to balance if the string DEPOSIT or WITHDRAW is found
	std::string line;
	float balance = 0.0f;
	while (std::getline(file, line))
	{
		if (line.find("DEPOSIT") != std::string::npos)
		{
			balance += std::stof(line.substr(8));
		}
		else if (line.find("WITHDRAW") != std::string::npos)
		{
			balance -= std::stof(line.substr(9));
		}
	}

	// print balance
	std::cout << "Balance of " << accountName << " is " << balance << std::endl;

	//close file and return balance
	file.close();
	return balance;


	return -1.0f;
}


#endif
