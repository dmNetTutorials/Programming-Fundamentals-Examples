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

int main()
{
	setlocale(LC_ALL,"ukr.utf8");

	//BooleanSupportedOperations();

	bool s1 = true;
	bool s2 = s1 * -1;

	cout << s2 << endl;

}