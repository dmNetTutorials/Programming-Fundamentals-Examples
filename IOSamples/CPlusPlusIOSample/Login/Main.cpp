/*

	31.10.2022
	Author: Dmitry Sulyma
	E-mail: d.o.sulyma@npu.edu.ua
	Repository: 

	This code distributed under GPL-3.0 licence.

*/

#include"Necessary_Headers.h"

using namespace std;

/// <summary>
/// ���������� �����������
/// </summary>
/// 
/// <param name="argumentsCount">
/// ʳ������ ���������
/// </param>
/// 
/// <param name="argumentsValues">
/// �������� ���������
/// </param>
/// 
/// <returns>
/// 0 (����) ���� �������� ������
/// -1 � ������� ����-��� �������

/// </returns>
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
		// ������ strcmp, � ������� ���� ������ ����� 
		// ������� �� ����������� ����� ���� ���� 
		// https://en.cppreference.com/w/cpp/string/byte/strcmp
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

// ������� ������ 
int main(int argumentsCount,		 	// ������� ���������, ��������� �� ��� �������
		 char* argumentsValues[],		// �������� ��������� ��������� 
		 char* environmentParameters[]  // ���� ��������, ��� ��������� �����������
)
{

	// �������� ������� ��������
	// (���� �� ����������� ������������, 
	// ����� �� ������, ������ ���� � �.�.)
	setlocale(LC_ALL, "");

	// ���� ������� ��������� ��������� ����� 1
	// 1-� �������� ������ � ������ ��������, �� �����������
	if (argumentsCount > 1)
	{
		return startupAuthorization(argumentsCount, argumentsValues);
	}
	else
	{
		// ��� ����������� � �������� �� ��� ���������
		menu();
	}

	// �������� ���� ���������� 
	// ������� ����-��� ������, ��� 
	// ������� ��������

	cin.get();

	return 0;

}