#include"Necessary_Headers.h"
#include<iostream>

using namespace std;

int startupAuthorization(int argumentsCount,
	char* argumentsValues[])
{
	// ������� ������� � �����
	int passwordLength = 0;

	// ��� ������� � �������� �� ��� �������
	for (int argumentIndex = 1;
		argumentIndex < argumentsCount;
		argumentIndex++)
	{
		// ����� ���������
		const char* argumentKey = argumentsValues[argumentIndex];
		// �������� ���������
		const char* argumentValue = argumentsValues[argumentIndex + 1];

		// ��� ��������� �����, � �++ ���������������
		// ������� strcmp, � ������� ���� ������ ����� 
		// ������� �� ����������� ������� ���� ���� 
		if (strcmp(argumentKey, "-login") == 0)
		{
			// ���� ���������� ������ login
			cout << "�� �������������� ��\t" << argumentValue << endl;
		}
		else
		{
			if (strcmp(argumentKey, "-password") == 0)
			{
				// ���� ���������� ������ ������
				passwordLength = strlen(argumentValue);
				// ��������� ��������� �����
				break;
			}
		}

	}

	return passwordLength;

}

// ������� ������� 
int main(int argumentsCount,		 	// ������� ���������, ��������� �� ��� �������
		 char* argumentsValues[],		// �������� ��������� ��������� 
		 char* environmentParameters[]  // ���� ��������, ��� ��������� �����������
)
{

	// �������� ������� ���������
	// (���� �� ������������ ������������, 
	// ����� �� ������, ������ ���� � �.�.)
	//setlocale(LC_ALL, "");

	// ���� ������� ��������� ��������� ����� 1
	// 1-� �������� ������ � ������ ��������, �� �����������
	if (argumentsCount > 1)
	{
		return startupAuthorization(argumentsCount, argumentsValues);
	}
	else
	{
		// ��� ����������� � �������� �� ��� ���������
		// menu();
	}

	// �������� ���� ���������� 
	// ������� ����-��� ������, ��� 
	// ������� ��������
	cin.get();

	return 0;

}