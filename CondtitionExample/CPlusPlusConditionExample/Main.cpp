#include"Main.h"

void BooleanSupportedOperations()
{

	// чи в документі наявні всі підписи
	bool hasDocumentContainsAllSignatures = false;

	// чи додані відсутні підписи 
	bool isMissingSignaturesAddedToDocument = true;

	// документ готовий, якщо там наявні всі підписи
	// отримання логічного значення 
	// за допомогою арифметичних операцій
	bool isDocumentCompletedArithmetical = hasDocumentContainsAllSignatures +
										   isMissingSignaturesAddedToDocument;
	// документ готовий, якщо там наявні всі підписи
	// отримання логічного значення 
	// за допомогою логічних операцій
	bool isDocumentCompletedLogical = hasDocumentContainsAllSignatures ||
									  isMissingSignaturesAddedToDocument;
	// документ готовий, якщо там наявні всі підписи
	// отримання логічного значення 
	// за допомогою бітових операцій
	bool isDocumentCompletedBitwise = hasDocumentContainsAllSignatures |
									  isMissingSignaturesAddedToDocument;

	cout << "Отримання логiчного значення рiзними способами:" 
		 << boolalpha  // відображення логічного значення у вигляді тексту
		 << endl << "Арифметичнi операцiї:\t"
		 << isDocumentCompletedArithmetical 
		 << endl << "Логiчнi операцiї:\t"
		 << isDocumentCompletedLogical 
		 << endl << "Бiтовi операцiї:\t"
		 << isDocumentCompletedBitwise << endl;

}

void IfElseSample()
{
	// к-сть авторів документа
	int documentAuthorsAmount = 3;
	// наявна к-сть підписів авторів в документі
	int documentAuthorsSignaturesCount = 0;
	// чи документ готовий до подальшого опрацювання?
	bool isDocumentReady = false;
	if (documentAuthorsSignaturesCount == documentAuthorsAmount)
	{
		// якщо к-сть підписів не дорівнює к-сті авторів,
		// то документ можна опрацьовувати
		isDocumentReady = true;
	}
	else
	{
		// документ не можна починати опрацьовувати
		isDocumentReady = false;
	}
}

void switchSample()
{

	// стан готовності документа у відсотках
	int documentCompletitionProgressInPercents = 75;

	switch (documentCompletitionProgressInPercents)
	{
	case 0:
		cout << "Документ внесено в чергу на опрацювання" << endl;
		break;
	case 25:
		cout << "Документ опрацьовано на 25%" << endl;
		break;
	case 50:
		cout << "Документ опрацьовано наполовину" << endl;
		break;
	case 75:
		cout << "Документ опрацьовано на 75%" << endl;
		break;
	case 100:
		cout << "Документ готовий" << endl;
		break;
	default:
		cout << "Документ ще не опрацьовується" << endl;
		break;
	}
}

void showMenu()
{
	cout << "Оберiть пункт меню:" << endl
		<< "1.)\tВиконати програму" << endl
		<< "2.)\tДовiдка" << endl
		<< "3.)\tЗавершити роботу" << endl;
}

void menuSample()
{
	// обраний користувачем пункт меню
	short selectedMenuItem = 0;

	// вiдобразити меню
	showMenu();

	// користувач обирає пункт меню
	cin >> selectedMenuItem;

	// перевiрка обраного пункту меню
	switch (selectedMenuItem)
	{
	case Run:
		cout << "Виконання програми" << endl;
		break;
	case Help:
		cout << "Версiя програми - 1.0.0" << endl;
		break;
	case Exit:
		cout << "Завершення роботи програми" << endl;
		exit(0);
		break;
	case Unselected:
	default:
		// якщо користувач не вибрав жодного пункту меню
		cout << "Натиснiсть будь-яку клавiшу для завершення роботи" << endl;
		break;
	}

}

int main()
{
	setlocale(LC_ALL,"ukr.utf8");

	//BooleanSupportedOperations();
	//IfElseSample();
	//switchSample();
	menuSample();

}