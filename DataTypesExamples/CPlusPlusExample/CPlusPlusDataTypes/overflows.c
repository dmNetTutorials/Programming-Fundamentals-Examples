#include"overflows.h"

// "������� ��������" (include guard)
#ifndef OVERFLOWS_H

#define OVERFLOWS_H

void overflowSample()
{
	unsigned short number = USHRT_MAX; // 65535
	printf("�������� ��i��� �� ������������ �����:\t%d\n", number);
	number += 5; //�������� ������� �������� �� 2
	printf("�������� ��i��� �� ������������ �����:\t%d\n", number);
}

void underflowSample()
{
	signed short number = SHRT_MIN; // -32768
	printf("�������� ��i��� �� ������������ �����:\t%d\n", number);
	number -= 10; // �������� ������� �������� �� 10
	printf("�������� ��i��� �� ������������ �����:\t%d\n", number);
}

void overflowDoubleSample()
{
	double numberMax = DBL_MAX; //  1.7976931348623158e+308
	printf("�������� ��i��� �� ������������ �����:\t%d\n", numberMax);
	numberMax *= 2; // �������� ������� �������� �����
	printf("�������� ��i��� �� ������������ �����:\t%d\n", numberMax);
}

void underflowDoubleSample()
{
	double numberMin = DBL_MIN; // 2.2250738585072014e-308
	printf("�������� ��i��� �� ������������ �����:\t%d\n", numberMin);
	numberMin -= 10; // �������� ������� �������� �� 10
	printf("�������� ��i��� �� ������������ �����:\t%d\n", numberMin);
}

void overflowBoolSample()
{
	bool logicalValue = true;
	printf("�������� ��i��� �� ������������ �����:\t%d\n", logicalValue);
	logicalValue += 2; // �������� ������� �������� �����
	printf("�������� ��i��� �� ������������ �����:\t%d\n", logicalValue);
}

void underflowBoolSample()
{
	bool logicalValue = false;
	printf("�������� ��i��� �� ������������ �����:\t%d\n", logicalValue);
	logicalValue -= 10; // �������� ������� �������� �����
	printf("�������� ��i��� �� ������������ �����:\t%d\n", logicalValue);
}

#endif