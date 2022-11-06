#pragma once

#include<iostream>
#include<string>

using std::wcout;

using std::wstring;
using std::cin;
using std::wcin;
using std::endl;

/*
	������� ����� extern ������,
	�� �������� ����� ����������
	� ������ ���.
*/
extern void menu();

/*
	³��������� ����
*/
extern void show_menu();

// �������� ����� �����������
extern wstring** enter_login();
// �������� ������ �����������
extern char** enter_password();
