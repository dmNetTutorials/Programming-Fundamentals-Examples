// дозволяє використовувати 
// старі версій функцій мови С
#define _CRT_SECURE_NO_WARNINGS 

// Підключити всі необхідні файли
// за допомогою одного файла
// з усіма необхідними компонентами
#include"all_samples.h" 

// підтримка типу даних bool
#include<stdbool.h>

void studentInformationModel()
{
	// ПІБ
	char* studentFullName = "Студент 1";
	// Ідентифікатор студента/залікової книжки
	unsigned int studentID = 1;
	// Вік студента
	unsigned short int studentAge = 18;
	// Поточний рік навчання (курс)
	unsigned short int currentStudyYear = 1;
	// Чи навчається студент?
	bool isStuding = true;
	// Адреса прописки студента
	char* originAddress = "Київ, Україна";
	// Освітній ступінь студента
	char* degree = "Бакалавр";

	// Сховище для текстового значення 
	// змінної currentStudyYear
	char currentStudyYearString[10];

	// функція itoa() потрібна, щоб перетворити число в текст
	_itoa(currentStudyYear, currentStudyYearString, 10);

	// Навчальна група, назва якої формується з
	// освітнього ступеня та поточного року навчання
	char* group = (char*)malloc(strlen(degree) +
		strlen(currentStudyYearString));
	// Дописати назву групи
	strcat(group, degree);
	// Дописати номер групи
	strcat(group, currentStudyYearString);

	// Загальний об'єм пам'яті (в байтах) необхідний для 
	// зберігання відомостей про студента
	unsigned int totalMemoryInBytes = sizeof(studentFullName) +
									  sizeof(group) +
									  sizeof(studentID) +
									  sizeof(studentAge) +
									  sizeof(currentStudyYear) +
									  sizeof(isStuding) +
									  sizeof(originAddress) +
									  sizeof(degree);

	printf("ПIБ студента:\t%s\t\n", studentFullName);
	printf("Група:\t\t%s\t\n", group);
	printf("Номер залiкової книжки:\t%d\t\n", studentID);
	printf("Вiк студента:\t%d\t\n", studentAge);
	printf("Рiк навчання:\t%d\t\n", currentStudyYear);

	/*
		приклад використання тернарного умовного оператора
		в залежності від значення змінної isStuding, буде виведено значення:
		Якщо isStuding = true, буде виведено "Так"
		Якщо isStuding = false, буде виведено "Ні"
	*/
	printf("Чи ще навчається:%s\t\n", ((isStuding) ? "Так" : "Ні"));
	printf("Адреса:\t\t%s\t\n", originAddress);
	printf("Освiтнiй ступiнь:\t%s\t\n", degree);

	printf("Загальний об'єм використанної пам'ятi (в байтах):\t%d\t\n",
		totalMemoryInBytes);

	free(group);

}

// Головна функція 
int main(int argumentsCount,			// кількість параметрів, які передав користувач
		 char* argumentsValues[],		// значення параметрів, які передав користувач
		 char* environmentParameters[]  // змінні оточення, для поточного користувача
)
{

	// підтримка поточної локалізаці
	// (мови та національних особливостей, 
	// таких як валюта, формат часу і т.д.)
	setlocale(LC_ALL, ".1251");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();

	studentInformationModel();

	// зачекати поки користувач 
	// натисне будь-яку клавішу, щоб 
	// закрити програму
	getchar();

	return 0;
}