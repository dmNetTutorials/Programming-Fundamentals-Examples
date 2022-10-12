// Підключити всі необхідні файли
// за допомогою одного файла
// з усіма необхідними компонентами
#include"all_samples.h"

// підключити для поточного 
// файла тільки функції:
using std::string;	// підтримка типу даних "рядок"
using std::cout;	// потік для виведення тексту
using std::endl;	// символ переводу на новий рядок

void studentInformationModel()
{
	// ПІБ
	string studentFullName = "Студент 1";
	// Ідентифікатор студента/залікової книжки
	unsigned int studentID = 1;
	// Вік студента
	unsigned short int studentAge = 18;
	// Поточний рік навчання (курс)
	unsigned short int currentStudyYear = 1;
	// Чи навчається студент?
	bool isStuding = true;
	// Адреса прописки студента
	string originAddress = "Київ, Україна";
	// Освітній ступінь студента
	string degree = "Бакалавр";

	// Навчальна група, назва якої формується з
	// освітнього ступеня та поточного року навчання
	// функція to_string() потрібна, щоб перетворити число в текст
	string group = degree + std::to_string(currentStudyYear);

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

	cout << "ПIБ студента:\t\t" << studentFullName << endl;
	cout << "Група:\t\t\t" << group << endl;
	cout << "Номер залiкової книжки:\t" << studentID << endl;
	cout << "Вiк студента:\t\t" << studentAge << endl;
	cout << "Рiк навчання:\t\t" << currentStudyYear << endl;

	// приклад використання тернарного умовного оператора 
	// в залежності від значення змінної isStuding, буде виведено значення:
	// Якщо isStuding = true, буде виведено "Так"
	// Якщо isStuding = false, буде виведено "Ні"
	cout << "Чи ще навчається:\t" << ((isStuding) ? "Так" : "Ні") << endl;
	cout << "Адреса:\t\t\t" << originAddress << endl;
	cout << "Освiтнiй ступiнь:\t" << degree << endl;

	cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<
		totalMemoryInBytes << endl;
}

// Головна функція 
int main(int argumentsCount,		 	// кількість параметрів, які передав користувач
		 char* argumentsValues[],		// значення параметрів, які передав користувач
		 char* environmentParameters[]  // змінні оточення, для поточного користувача
)
{

	// підтримка поточної локалізаці
	// (мови та національних особливостей, 
	// таких як валюта, формат часу і т.д.)
	setlocale(LC_ALL, "");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();

	cout << endl;
	studentInformationModel();

	// зачекати поки користувач 
	// натисне будь-яку клавішу, щоб 
	// закрити програму
	getchar();

	return 0;
}
