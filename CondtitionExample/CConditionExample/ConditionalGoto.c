// Приклад використання 
// умовного переходу


// Для використання даного прикладу 
// необхідно на початку файлу Main.c 
// написати і потім перезібрати (rebuild) проект
// #define _CONDITIONAL_GOTO_H
#ifdef _CONDITIONAL_GOTO_H

// дозволити використання старих 
// "небезпечних" функцій 
// printf, scanf тощо
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<locale.h>

int main()
{
	// підтримка кириличних символів
	setlocale(LC_ALL, "ukr.utf8");

	int result;

	printf("Введiть число:\n");
	// ввести число
	scanf("%d", &result);

	/*
	  Якщо число парне,
	  вивести результат ділення
	*/
isEvenNumber:
	if (result % 2 == 0) {
		result /= 2;
		goto output;
	}
	else {
		// інакше збільшити число на 1
		// та розділити
		result++;
		goto isEvenNumber;
	}

	goto output;

	// мітка (label) для переходу 
	// до процедури exit
exit:
	/* Повідомлення буде виведено
тільки після використання процедури output */
	printf("\nЗавершення роботи");

	return 0;

	// мітка (label) для переходу 
	// до процедури output
output: // мітка процедури
// ----Початок процедурної частини----
	// вивести число
	printf("Результат:\t%d", result);

	goto exit;
// ----Кінець процедурної частини-----
}

#endif

