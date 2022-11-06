#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

#include<string>

void menu()
{
	//std::wcout << L"Number: \101" << endl;

	wcout << "Enter text" << endl;

	char* text = new char[100];
	//cin.setf(cin.skipws);
	std::cout << std::to_string(cin.flags()) << endl;

	// не пропускати пробіли на початку рядка
	// https://en.cppreference.com/w/cpp/io/manip/skipws
	cin >> std::noskipws >> text;

	wcout << "You entered:" << endl << text;

	delete[] text;
}

#endif