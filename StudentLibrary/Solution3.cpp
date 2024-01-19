#include "Solution3.h"
#include <iostream>

// Don't fortget to enable the exercise in the SudentConfiguration.h file !
#include "StudentConfiguration.h"
#ifdef COMPILE_EXERCICE_3

void Solution3::SetWords(const std::vector<std::string>& _words)
{
	words = _words;
}

void Solution3::SortWords() 
{
	//sort words by alphabetical order using bubble sort
	for (int i = 0; i < words.size(); i++)
	{
		for (int j = 0; j < words.size() - 1; j++)
		{
			if (words[j] > words[j + 1])
			{
				std::string temp = words[j];
				words[j] = words[j + 1];
				words[j + 1] = temp;
			}
		}
	}

	//print sorted words
	for (int i = 0; i < words.size(); i++)
	{
		std::cout << words[i] << std::endl;
	}

}

std::vector<std::string> Solution3::GetSortedWords() const
{
	// if vector is empty or null throw an exception
	if (words.empty() || words.size() == 0)
	{
		throw std::exception("Vector is empty or null");
	}

	return words;
}

#endif
