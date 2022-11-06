#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

/*
	Відобразити меню
*/
void show_menu()
{
	// Символ L перед текстом необхідний для 
	// коректного відображення тексту у wcout
	// оскільки wcout може працювати з рядками
	// тпиу даних wchar_t ("розширеними" символами)
	wcout << L"Оберiть пункт меню:" << endl;
	wcout << L"1.) Ввести iм'я користувача" << endl;
	wcout << L"2.) Ввести пароль" << endl;
	wcout << L"3.) Завершити роботу" << endl;
}

// Введення логіну користувача
wstring** enter_login()
{
	wstring* login = new wstring();

	wcout << L"Введiть iм'я користувача (login):" << endl;

	// Звільняє буфер вводу від
	// символів та роздільників (delimiter)
	// https://en.cppreference.com/w/cpp/io/basic_istream/ignore
	wcin.ignore();

	// Зчитати цілий рядок тексту, 
	// включно з пробілами
	getline(wcin, *login);

	// Повернути посилання на 
	// виділену пам'ять
	return &login;
}

// Введення паролю користувача
char** enter_password()
{
	// Максимальна довжина паролю
	const short int MAX_PASSWORD_LENGTH = 16;

	// Пароль (масив одиночних символів, 
	// для зберігання)
	char* password = new char[MAX_PASSWORD_LENGTH];

	wcout << L"Введiть пароль:" << endl;

	// Ввести пароль
	// Якщо буде введено символ 
	// пробілу, то весь текст
	// після нього не збережеться
	cin >> password;

	return &password;

}

void menu()
{
	// Зміна, для зберігання номеру 
	// обраного пункту меню
	short int selectedMenuItem = 1;
	wstring login = L"";
	char* password = nullptr;

	// Відобразити меню
	show_menu();

	// Обрати пункт меню (ввести номер пункту)
	cin >> selectedMenuItem;

	// Переіврити обраний пункт меню
	switch (selectedMenuItem)
	{
	case 1:
		login = **enter_login();
		break;
	case 2:
		password = *enter_password();
		break;
	case 3:
	default:
		// якщо користувач обрав "Завершення роботи"
		// або нічого не обрав то потрібно
		// завершити роботу програми
		exit(0);
	}

	// Перевірити, чи введено
	// ім'я користувача
	if (!login.empty())
	{
		std::wcout << L"Ваш логiн:\t" << login << endl;
	}
	else
	{
		// Якщо пароль був введений
		if (password != nullptr)
		{
			// змінити пароль
			std::wcout << L"Пароль успiшно змiнено на:\t"
					   << endl << password;

			// звільнити пам'ять
			delete[] password;
		}
	}
}

#endif