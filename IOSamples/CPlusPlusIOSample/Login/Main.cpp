/*

	31.10.2022
	Author: Dmitry Sulyma
	E-mail: d.o.sulyma@npu.edu.ua
	Repository: 

	This code distributed under GPL-3.0 licence.

*/

#include"Necessary_Headers.h"
#include<iostream>

using namespace std;

/// <summary>
/// Àâòîðèçàö³ÿ êîðèñòóâà÷à
/// </summary>
/// 
/// <param name="argumentsCount">
/// Ê³ëêü³ñòü ïðààìåòð³â
/// </param>
/// 
/// <param name="argumentsValues">
/// Çíà÷åííÿ ïàðàìåòð³â
/// </param>
/// 
/// <returns>
/// 0 (íóëü) ÿêùî âèêîíàíà óñï³øíî
/// -1 ó âèïàäêó áóäü-ÿêî¿ ïîìèëêè
/// </returns>

int startupAuthorization(int argumentsCount,
	char* argumentsValues[])
{
	// ê³ëüê³ñòü ñèìâîë³â â ïàðîë³
	int passwordLength = 0;

	// äàí³ ïåðåäàí³ â ïðîãðàìó ï³ä ÷àñ çàïóñêó
	for (int argumentIndex = 1;
		argumentIndex < argumentsCount;
		argumentIndex++)
	{
		// íàçâà ïàðàìåòðà
		const char* argumentKey = argumentsValues[argumentIndex];
		// çíà÷åííÿ ïàðàìåòðà
		const char* argumentValue = argumentsValues[argumentIndex + 1];

		// äëÿ ïîð³âíÿííÿ ðÿäê³â, â Ñ++ âèêîðèñòîâóºòñüÿ
		// ôóíêö³ÿ strcmp, ó âèïàäêó êîëè îáèäâà ðÿäêè 
		// îäíàêîâ³ òî ðåçóëüòàòîì ôóíêö³¿ áóäå íóëü 
		if (strcmp(argumentKey, "-login") == 0)
		{
			// ÿêùî êîðèñòóâà÷ âêàçàâ login
			cout << "Âè àâòîðèçóâàëèñü ÿê\t" << argumentValue << endl;
		}
		else
		{
			if (strcmp(argumentKey, "-password") == 0)
			{
				// ÿêùî êîðèñòóâà÷ âêàçàâ ïàðîëü
				passwordLength = strlen(argumentValue);
				// ïðèïèíèòè âèêîíàííÿ öèêëó
				break;
			}
		}

	}

	return passwordLength;

}

// Ãîëîâíà ôóíêö³ÿ 
int main(int argumentsCount,		 	// ê³ëüê³ñòü ïàðàìåòð³â, ïåðåäàíèõ ï³ä ÷àñ çàïóñêó
		 char* argumentsValues[],		// çíà÷åííÿ ïåðåäàíèõ ïàðàìåòð³â 
		 char* environmentParameters[]  // çì³íí³ îòî÷åííÿ, äëÿ ïîòî÷íîãî êîðèñòóâà÷à
)
{

	// ï³äòðèìêà ïîòî÷íî¿ ëîêàë³çàö³
	// (ìîâè òà íàö³îíàëüíèõ îñîáëèâîñòåé, 
	// òàêèõ ÿê âàëþòà, ôîðìàò ÷àñó ³ ò.ä.)
	setlocale(LC_ALL, "");

	// ÿêùî ê³ëüê³ñòü ïåðåäàíèõ ïàðàìåòð³â á³ëüøå 1
	// 1-é ïàðàìåòð çàâæäè º íàçâîþ ïðîãðàìè, ùî çàïóñêàºòüñÿ
	//if (argumentsCount > 1)
	{
		//return startupAuthorization(argumentsCount, argumentsValues);
	}
	//else
	{
		// äàí³ ïåðåäàþòüñÿ â ïðîãðàìó ï³ä ÷àñ âèêîíàííÿ
		menu();
	}

	// çà÷åêàòè ïîêè êîðèñòóâà÷ 
	// íàòèñíå áóäü-ÿêó êëàâ³øó, ùîá 
	// çàêðèòè ïðîãðàìó
	cin.get();

	return 0;

}