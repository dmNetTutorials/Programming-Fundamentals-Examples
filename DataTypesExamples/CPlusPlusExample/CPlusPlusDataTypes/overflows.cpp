#include"overflows.h"

// "охорона включень" (include guard)
#ifndef OVERFLOWS_H

#define OVERFLOWS_H

void overflowSample()
{
	unsigned short number = USHRT_MAX; // 65535
	cout << "Значення змiнної до переповнення знизу:\t" << number << endl;
	number += 5; //збільшити поточне значення на 2
	cout << "Значення змiнної до переповнення знизу:\t" << number << endl;
}

void underflowSample()
{
	signed short number = SHRT_MIN; // -32768
	cout << "Значення змiнної до переповнення знизу:\t" << number << endl;
	number -= 10; // зменшити поточне значення на 10
	cout << "Значення змiнної до переповнення знизу:\t" << number << endl;
}

void overflowDoubleSample()
{
	double numberMax = DBL_MAX; //  1.7976931348623158e+308
	cout << "Значення змiнної до переповнення знизу:\t" << numberMax << endl;
	numberMax *= 2; // збільшити поточне значення вдвічі
	cout << "Значення змiнної до переповнення знизу:\t" << numberMax << endl;
}

void underflowDoubleSample()
{
	double numberMin = DBL_MIN; // 2.2250738585072014e-308
	cout << "Значення змiнної до переповнення знизу:\t" << numberMin << endl;
	numberMin -= 10; // зменшити поточне значення на 10
	cout << "Значення змiнної до переповнення знизу:\t" << numberMin << endl;
}

void overflowBoolSample()
{
	bool logicalValue = true;
	cout << "Значення змiнної до переповнення знизу:\t" << logicalValue << endl;
	logicalValue += 2; // збільшити поточне значення вдвічі
	cout << "Значення змiнної до переповнення знизу:\t" << logicalValue << endl;
}

void underflowBoolSample()
{
	bool logicalValue = false;
	cout << "Значення змiнної до переповнення знизу:\t" << logicalValue << endl;
	logicalValue -= 10; // зменшити поточне значення вдвічі
	cout << "Значення змiнної до переповнення знизу:\t" << logicalValue << endl;
}

#endif
