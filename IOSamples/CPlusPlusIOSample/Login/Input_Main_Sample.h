#pragma once

#include<iostream>
#include<string>

using std::wcout;
using std::wstring;
using std::cin;
using std::wcin;
using std::endl;

/*
	Ключове слово extern означає,
	що реалізація функції зберігається
	в іншому місці.
*/
extern void menu();

/*
	Відобразити меню
*/
extern void show_menu();

// Введення логіну користувача
extern wstring** enter_login();
// Введення паролю користувача
extern char** enter_password();