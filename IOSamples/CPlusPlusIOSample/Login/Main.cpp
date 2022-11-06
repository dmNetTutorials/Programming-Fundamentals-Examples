/*

	31.10.2022
	Author: Dmitry Sulyma
	E-mail: d.o.sulyma@npu.edu.ua
	Repository: 

	This code distributed under GPL-3.0 licence.

*/

#include"Necessary_Headers.h"

using namespace std;

/// <summary>
/// Авторизація користувача
/// </summary>
/// 
/// <param name="argumentsCount">
/// Кілкьість прааметрів
/// </param>
/// 
/// <param name="argumentsValues">
/// Значення параметрів
/// </param>
/// 
/// <returns>
/// 0 (нуль) якщо виконана успішно
/// -1 у випадку будь-якої помилки
/// </returns>
int startupAuthorization(int argumentsCount,
						 char* argumentsValues[])
{
	// кількість символів в паролі
	int passwordLength = 0;

	// дані передані в програму під час запуску
	for (int argumentIndex = 1;
		argumentIndex < argumentsCount;
		argumentIndex++)
	{
		// назва параметра
		const char* argumentKey = argumentsValues[argumentIndex];
		// значення параметра
		const char* argumentValue = argumentsValues[argumentIndex + 1];

		// для порівняння рядків, в С++ використовуєтсья
		// функція strcmp, у випадку коли обидва рядки 
		// однакові то результатом функції буде нуль 
		// https://en.cppreference.com/w/cpp/string/byte/strcmp
		if (strcmp(argumentKey, "-login") == 0)
		{
			// якщо користувач вказав login
			cout << "Ви авторизувались як\t" << argumentValue << endl;
		}
		else
		{
			if (strcmp(argumentKey, "-password") == 0)
			{
				// якщо користувач вказав пароль
				passwordLength = strlen(argumentValue);
				// припинити виконання циклу
				break;
			}
		}

	}

	return passwordLength;

}

// Головна функція 
int main(int argumentsCount,		 	// кількість параметрів, переданих під час запуску
		 char* argumentsValues[],		// значення переданих параметрів 
		 char* environmentParameters[]  // змінні оточення, для поточного користувача
)
{

	// підтримка поточної локалізаці
	// (мови та національних особливостей, 
	// таких як валюта, формат часу і т.д.)
	setlocale(LC_ALL, "");

	// якщо кількість переданих параметрів більше 1
	// 1-й параметр завжди є назвою програми, що запускається
	if (argumentsCount > 1)
	{
		return startupAuthorization(argumentsCount, argumentsValues);
	}
	else
	{
		// дані передаються в програму під час виконання
		menu();
	}

	// зачекати поки користувач 
	// натисне будь-яку клавішу, щоб 
	// закрити програму
	cin.get();

	return 0;

}