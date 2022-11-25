// Приклад використання 
// безумовного переходу


// Для використання даного прикладу 
// необхідно на початку файлу Main.c 
// написати і потім перезібрати (rebuild) проект
// #define _UNCONDITIONAL_GOTO_H
#ifdef _UNCONDITIONAL_GOTO_H

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

	float result;

	printf("Введiть число:\n");
	// ввести число
	scanf("%f", &result);

	result /= 2;

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
output:

	// вивести число
	printf("Половина числа:\t%f", result);

	goto exit;

}

#endif