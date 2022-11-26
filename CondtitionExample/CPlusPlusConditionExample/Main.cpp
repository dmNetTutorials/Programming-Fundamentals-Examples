#include"Main.h"

int main()
{
	setlocale(LC_ALL,"ukr.utf8");

	int* a = new int(10);
	a = nullptr;

	int b = 6 || 5;

	cout << b << endl;
}