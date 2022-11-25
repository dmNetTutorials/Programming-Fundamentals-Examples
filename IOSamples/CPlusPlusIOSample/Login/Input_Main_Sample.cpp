#ifndef INPUT_MAIN_SAMPLE_H

#define INPUT_MAIN_SAMPLE_H

#include"Input_Main_Sample.h"

/*
	³��������� ����
*/
void show_menu()
{
	// ������ L ����� ������� ��������� ��� 
	// ���������� ����������� ������ � wcout
	// ������� wcout ���� ��������� � �������
	// ���� ����� wchar_t ("�����������" ���������)
	wcout << L"����i�� ����� ����:" << endl;
	wcout << L"1.) ������ i�'� �����������" << endl;
	wcout << L"2.) ������ ������" << endl;
	wcout << L"3.) ��������� ������" << endl;
}

// �������� ����� �����������
wstring** enter_login()
{
	wstring* login = new wstring();

	wcout << L"����i�� i�'� ����������� (login):" << endl;

	// ������� ����� ����� ��
	// ������� �� ���������� (delimiter)
	// https://en.cppreference.com/w/cpp/io/basic_istream/ignore
	wcin.ignore();

	// ������� ���� ����� ������, 
	// ������� � ��������
	getline(wcin, *login);

	// ��������� ��������� �� 
	// ������� ���'���
	return &login;
}

// �������� ������ �����������
char** enter_password()
{
	// ����������� ������� ������
	const short int MAX_PASSWORD_LENGTH = 16;

	// ������ (����� ��������� �������, 
	// ��� ���������)
	char* password = new char[MAX_PASSWORD_LENGTH];

	wcout << L"����i�� ������:" << endl;

	// ������ ������
	// ���� ���� ������� ������ 
	// ������, �� ���� �����
	// ���� ����� �� �����������
	cin >> password;

	return &password;

}

void menu()
{
	// ����, ��� ��������� ������ 
	// �������� ������ ����
	short int selectedMenuItem = 1;
	wstring login = L"";
	char* password = nullptr;

	// ³��������� ����
	show_menu();

	// ������ ����� ���� (������ ����� ������)
	cin >> selectedMenuItem;

	// ��������� ������� ����� ����
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
		// ���� ���������� ����� "���������� ������"
		// ��� ����� �� ����� �� �������
		// ��������� ������ ��������
		exit(0);
	}

	// ���������, �� �������
	// ��'� �����������
	if (!login.empty())
	{
		std::wcout << L"��� ���i�:\t" << login << endl;
	}
	else
	{
		// ���� ������ ��� ��������
		if (password != nullptr)
		{
			// ������ ������
			std::wcout << L"������ ���i��� ��i���� ��:\t"
					   << endl << password;

			// �������� ���'���
			delete[] password;
		}
	}

}

#endif