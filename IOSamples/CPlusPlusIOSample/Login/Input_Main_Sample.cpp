#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

/*
	³��������� ����
*/
void show_menu()
{
	wcout << L"����i�� ����� ����:" << endl;
	wcout << L"1.) ������ i�'� �����������" << endl;
	wcout << L"2.) ������ ������" << endl;
	wcout << L"3.) ��������� ������" << endl;
}

// �������� ����� �����������
string enter_login()
{
	string login;

	wcout << L"����i�� ��'� ����������� (login):" << endl;
	cin >> login;

	return "";
}

// �������� ������ �����������
wchar_t* enter_password()
{
	// ����������� ������� ������
	const short int MAX_PASSWORD_LENGTH = 16;

	// ������ (����� ��������� �������, 
	// ��� ���������)
	wchar_t password[16] = {};

	wcout << L"����i�� ������:" << endl;

	// ������ ������
	// ���� ���� ������� ������ 
	// ������, �� ���� �����
	// ���� ����� �� �����������
	std::wcin >> password;

	return password;

	//for (short symbol = 0; // �������� �������
	//	 // �������� �������� ����� 16 ��������
	//	 symbol < MAX_PASSWORD_LENGTH; 
	//	 // ������� �� �������� ���������� ������� 
	//	 symbol++)
	//{
	//	
	//}

}

void menu()
{
	// ����, ��� ��������� ������ 
	// �������� ������ ����
	short int selectedMenuItem = 1;
	string login = "";
	wchar_t* password = nullptr;

	// ³��������� ����
	show_menu();

	// ������ ����� ���� (������ ����� ������)
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
		// ��������� ������ ��������
		exit(0);
	}

	if (!login.empty())
	{
		std::wcout << L"��� ���i�:\t" << login.c_str() << endl;
	}
	else
	{
		std::wcout << L"��� ������:\t" << password << endl;
		//delete[] password;
	}

	//cin.setf(cin.skipws);
	//std::cout << std::to_string(cin.flags()) << endl;

	// �� ���������� ������ �� ������� �����
	// https://en.cppreference.com/w/cpp/io/manip/skipws
	// https://www.w3schools.com/cpp/cpp_strings_input.asp
	//cin >> std::noskipws >> text;

	//wcout << "You entered:" << endl << text;

	//delete[] text;
}

#endif