#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

/*
	Відобразити меню
*/
void show_menu()
{
	wcout << L"Оберiть пункт меню:" << endl;
	wcout << L"1.) Ввести iм'я користувача" << endl;
	wcout << L"2.) Ввести пароль" << endl;
	wcout << L"3.) Завершити роботу" << endl;
}

// Введення логіну користувача
string enter_login()
{
	string login;

	wcout << L"Введiть ім'я користувача (login):" << endl;
	cin >> login;

	return "";
}

// Введення паролю користувача
wchar_t* enter_password()
{
	// Максимальна довжина паролю
	const short int MAX_PASSWORD_LENGTH = 16;

	// Пароль (масив одиночних символів, 
	// для зберігання)
	wchar_t password[16] = {};

	wcout << L"Введiть пароль:" << endl;

	// Ввести пароль
	// Якщо буде введено символ 
	// пробілу, то весь текст
	// після нього не збережеться
	std::wcin >> password;

	return password;

	//for (short symbol = 0; // лічильник символів
	//	 // обмежити введення тільки 16 симолами
	//	 symbol < MAX_PASSWORD_LENGTH; 
	//	 // перейти до введення наступного символу 
	//	 symbol++)
	//{
	//	
	//}

}

void menu()
{
	// Зміна, для зберігання номеру 
	// обраного пункту меню
	short int selectedMenuItem = 1;
	string login = "";
	wchar_t* password = nullptr;

	// Відобразити меню
	show_menu();

	// Обрати пункт меню (ввести номер пункту)
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
		// завершити роботу програми
		exit(0);
	}

	if (!login.empty())
	{
		std::wcout << L"Ваш логiн:\t" << login.c_str() << endl;
	}
	else
	{
		std::wcout << L"Ваш пароль:\t" << password << endl;
		//delete[] password;
	}

	//cin.setf(cin.skipws);
	//std::cout << std::to_string(cin.flags()) << endl;

	// не пропускати пробіли на початку рядка
	// https://en.cppreference.com/w/cpp/io/manip/skipws
	// https://www.w3schools.com/cpp/cpp_strings_input.asp
	//cin >> std::noskipws >> text;

	//wcout << "You entered:" << endl << text;

	//delete[] text;
}

#endif