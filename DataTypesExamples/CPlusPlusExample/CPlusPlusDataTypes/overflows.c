#include"overflows.h"

// "охорона включень" (include guard)
#ifndef OVERFLOWS_H

#define OVERFLOWS_H

void overflowSample()
{
	unsigned short number = USHRT_MAX; // 65535
	printf("Значення змiнної до переповнення знизу:\t%d\n", number);
	number += 5; //збільшити поточне значення на 2
	printf("Значення змiнної до переповнення знизу:\t%d\n", number);
}

void underflowSample()
{
	signed short number = SHRT_MIN; // -32768
	printf("Значення змiнної до переповнення знизу:\t%d\n", number);
	number -= 10; // зменшити поточне значення на 10
	printf("Значення змiнної до переповнення знизу:\t%d\n", number);
}

void overflowDoubleSample()
{
	double numberMax = DBL_MAX; //  1.7976931348623158e+308
	printf("Значення змiнної до переповнення знизу:\t%d\n", numberMax);
	numberMax *= 2; // збільшити поточне значення вдвічі
	printf("Значення змiнної до переповнення знизу:\t%d\n", numberMax);
}

void underflowDoubleSample()
{
	double numberMin = DBL_MIN; // 2.2250738585072014e-308
	printf("Значення змiнної до переповнення знизу:\t%d\n", numberMin);
	numberMin -= 10; // зменшити поточне значення на 10
	printf("Значення змiнної до переповнення знизу:\t%d\n", numberMin);
}

void overflowBoolSample()
{
	bool logicalValue = true;
	printf("Значення змiнної до переповнення знизу:\t%d\n", logicalValue);
	logicalValue += 2; // збільшити поточне значення вдвічі
	printf("Значення змiнної до переповнення знизу:\t%d\n", logicalValue);
}

void underflowBoolSample()
{
	bool logicalValue = false;
	printf("Значення змiнної до переповнення знизу:\t%d\n", logicalValue);
	logicalValue -= 10; // зменшити поточне значення вдвічі
	printf("Значення змiнної до переповнення знизу:\t%d\n", logicalValue);
}

#endif