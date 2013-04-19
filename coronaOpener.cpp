#include <iostream>

#include "llauColors.h"

using namespace std;

/*
	por Jose Llausas. Viernes 22 de Marzo, 2013
	Un programa para la Terminal que abre Corona con argumentos.
*/

char* removeLastSlash(const char* input)
{
	int copyAmount = strlen(input);
	char* newWord = NULL;

	if(input[copyAmount - 1] == '/')
	{
		//Copy Less
		//copyAmount = copyAmount -1;

		newWord = new char[copyAmount];
		strncpy(newWord, input, copyAmount);
		newWord[copyAmount -1] = '\0';	
	}
	else
	{
		//Copy and add null terminator:
		newWord = new char[copyAmount +1];
		strncpy(newWord, input, copyAmount);
		newWord[copyAmount] = '\0';	
	}

	//Dynamically Allocated: Needs to be deleted at the end of use
	return newWord;
}

int main(int argc, const char* argv[])
{


	string coronaCommand = "/Applications/CoronaSDK/CoronaTerminal ";

	cout << TERM_BG_BLUE << TERM_RED << "Corona SDK command Tool by Jose Llausas" << endl;

	if(argc > 1)
	{
		char* clean = removeLastSlash(argv[1]);
		char* completeCommand = new char[strlen(coronaCommand.c_str()) + strlen(clean)];
		sprintf(completeCommand, "%s%s", coronaCommand.c_str(), clean);
		system(completeCommand);
		delete[] clean;
		delete[] completeCommand;	
	}
	else
	{
		system(coronaCommand.c_str());
	}
	
	return 0;
};