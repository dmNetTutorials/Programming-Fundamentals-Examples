#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

/*
	Â³äîáðàçèòè ìåíþ
*/
void show_menu()
{
	wcout << L"Îáåðiòü ïóíêò ìåíþ:" << endl;
	wcout << L"1.) Ââåñòè iì'ÿ êîðèñòóâà÷à" << endl;
	wcout << L"2.) Ââåñòè ïàðîëü" << endl;
	wcout << L"3.) Çàâåðøèòè ðîáîòó" << endl;
}

// Ââåäåííÿ ëîã³íó êîðèñòóâà÷à
string enter_login()
{
	string login;

	wcout << L"Ââåäiòü ³ì'ÿ êîðèñòóâà÷à (login):" << endl;
	cin >> login;

	return "";
}

// Ââåäåííÿ ïàðîëþ êîðèñòóâà÷à
wchar_t* enter_password()
{
	// Ìàêñèìàëüíà äîâæèíà ïàðîëþ
	const short int MAX_PASSWORD_LENGTH = 16;

	// Ïàðîëü (ìàñèâ îäèíî÷íèõ ñèìâîë³â, 
	// äëÿ çáåð³ãàííÿ)
	wchar_t password[16] = {};

	wcout << L"Ââåäiòü ïàðîëü:" << endl;

	// Ââåñòè ïàðîëü
	// ßêùî áóäå ââåäåíî ñèìâîë 
	// ïðîá³ëó, òî âåñü òåêñò
	// ï³ñëÿ íüîãî íå çáåðåæåòüñÿ
	std::wcin >> password;

	return password;

	//for (short symbol = 0; // ë³÷èëüíèê ñèìâîë³â
	//	 // îáìåæèòè ââåäåííÿ ò³ëüêè 16 ñèìîëàìè
	//	 symbol < MAX_PASSWORD_LENGTH; 
	//	 // ïåðåéòè äî ââåäåííÿ íàñòóïíîãî ñèìâîëó 
	//	 symbol++)
	//{
	//	
	//}

}

void menu()
{
	// Çì³íà, äëÿ çáåð³ãàííÿ íîìåðó 
	// îáðàíîãî ïóíêòó ìåíþ
	short int selectedMenuItem = 1;
	string login = "";
	wchar_t* password = nullptr;

	// Â³äîáðàçèòè ìåíþ
	show_menu();

	// Îáðàòè ïóíêò ìåíþ (ââåñòè íîìåð ïóíêòó)
	cin >> selectedMenuItem;

	switch (selectedMenuItem)
	{
	case 1:
		login = enter_login();
		break;
	case 2:
		password = enter_password();
		break;
	case 3:
	default:
		// çàâåðøèòè ðîáîòó ïðîãðàìè
		exit(0);
	}

	if (!login.empty())
	{
		std::wcout << L"Âàø ëîãií:\t" << login.c_str() << endl;
	}
	else
	{
		std::wcout << L"Âàø ïàðîëü:\t" << password << endl;
		//delete[] password;
	}

	//cin.setf(cin.skipws);
	//std::cout << std::to_string(cin.flags()) << endl;

	// íå ïðîïóñêàòè ïðîá³ëè íà ïî÷àòêó ðÿäêà
	// https://en.cppreference.com/w/cpp/io/manip/skipws
	// https://www.w3schools.com/cpp/cpp_strings_input.asp
	//cin >> std::noskipws >> text;

	//wcout << "You entered:" << endl << text;

	//delete[] text;
=======
#include<string>

void menu()
{
	//std::wcout << L"Number: \101" << endl;

	wcout << "Enter text" << endl;

	//
	char* text = new char[100];
	//cin.setf(cin.skipws);
	std::cout << std::to_string(cin.flags()) << endl;

	// íå ïðîïóñêàòè ïðîá³ëè íà ïî÷àòêó ðÿäêà
	// https://en.cppreference.com/w/cpp/io/manip/skipws
	cin >> std::noskipws >> text;

	wcout << "You entered:" << endl << text;

	delete[] text;
}

#endif