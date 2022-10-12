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
	string studentFullName = "Ñòóäåíò 1";
	// Ідентифікатор студента/залікової книжки
	unsigned int studentID = 1;
	// Вік студента
	unsigned short int studentAge = 18;
	// Поточний рік навчання (курс)
	unsigned short int currentStudyYear = 1;
	// Чи навчається студент?
	bool isStuding = true;
	// Адреса прописки студента
	string originAddress = "Êè¿â, Óêðà¿íà";
	// Освітній ступінь студента
	string degree = "Áàêàëàâð";

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

	cout << "ÏIÁ ñòóäåíòà:\t\t" << studentFullName << endl;
	cout << "Ãðóïà:\t\t\t" << group << endl;
	cout << "Íîìåð çàëiêîâî¿ êíèæêè:\t" << studentID << endl;
	cout << "Âiê ñòóäåíòà:\t\t" << studentAge << endl;
	cout << "Ðiê íàâ÷àííÿ:\t\t" << currentStudyYear << endl;

	// приклад використання тернарного умовного оператора 
	// в залежності від значення змінної isStuding, буде виведено значення:
	// Якщо isStuding = true, буде виведено "Так"
	// Якщо isStuding = false, буде виведено "Ні"
	cout << "×è ùå íàâ÷àºòüñÿ:\t" << ((isStuding) ? "Òàê" : "Í³") << endl;
	cout << "Àäðåñà:\t\t\t" << originAddress << endl;
	cout << "Îñâiòíié ñòóïiíü:\t" << degree << endl;

	cout << "Çàãàëüíèé îá'ºì âèêîðèñòàííî¿ ïàì'ÿòi (â áàéòàõ):\t" <<
		totalMemoryInBytes << endl;
}

// Головна функція 
int main(int argumentsCount,		// кількість параметрів, які передав користувач
	 char* argumentsValues[],	// значення параметрів, які передав користувач
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
