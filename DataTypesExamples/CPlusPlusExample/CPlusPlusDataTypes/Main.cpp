// Ï³äêëþ÷èòè âñ³ íåîáõ³äí³ ôàéëè 
// çà äîïîìîãîþ îäíîãî ôàéëà
// ç óñ³ìà íåîáõ³äíèìè êîìïîíåíòàìè
#include"all_samples.h"

// ï³äêëþ÷èòè äëÿ ïîòî÷íîãî 
// ôàéëà ò³ëüêè ôóíêö³¿:
using std::string;	// ï³äòðèìêà òèïó äàíèõ "ðÿäîê"
using std::cout;	// ïîò³ê äëÿ âèâåäåííÿ òåêñòó
using std::endl;	// ñèìâîë ïåðåâîäó íà íîâèé ðÿäîê

void studentInformationModel()
{
	// Ï²Á
	string studentFullName = "Ñòóäåíò 1";
	// ²äåíòèô³êàòîð ñòóäåíòà/çàë³êîâî¿ êíèæêè
	unsigned int studentID = 1;
	// Â³ê ñòóäåíòà
	unsigned short int studentAge = 18;
	// Ïîòî÷íèé ð³ê íàâ÷àííÿ (êóðñ)
	unsigned short int currentStudyYear = 1;
	// ×è íàâ÷àºòüñÿ ñòóäåíò?
	bool isStuding = true;
	// Àäðåñà ïðîïèñêè ñòóäåíòà
	string originAddress = "Êè¿â, Óêðà¿íà";
	// Îñâ³òí³é ñòóï³íü ñòóäåíòà
	string degree = "Áàêàëàâð";

	// Íàâ÷àëüíà ãðóïà, íàçâà ÿêî¿ ôîðìóºòüñÿ ç
	// îñâ³òíüîãî ñòóïåíÿ òà ïîòî÷íîãî ðîêó íàâ÷àííÿ
	// ôóíêö³ÿ to_string() ïîòð³áíà, ùîá ïåðåòâîðèòè ÷èñëî â òåêñò
	string group = degree + std::to_string(currentStudyYear);

	// Çàãàëüíèé îá'ºì ïàì'ÿò³ (â áàéòàõ) íåîáõ³äíèé äëÿ 
	// çáåð³ãàííÿ â³äîìîñòåé ïðî ñòóäåíòà
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

	// ïðèêëàä âèêîðèñòàííÿ òåðíàðíîãî óìîâíîãî îïåðàòîðà 
	// â çàëåæíîñò³ â³ä çíà÷åííÿ çì³ííî¿ isStuding, áóäå âèâåäåíî çíà÷åííÿ:
	// ßêùî isStuding = true, áóäå âèâåäåíî "Òàê"
	// ßêùî isStuding = false, áóäå âèâåäåíî "Í³"
	cout << "×è ùå íàâ÷àºòüñÿ:\t" << ((isStuding) ? "Òàê" : "Í³") << endl;
	cout << "Àäðåñà:\t\t\t" << originAddress << endl;
	cout << "Îñâiòíié ñòóïiíü:\t" << degree << endl;

	cout << "Çàãàëüíèé îá'ºì âèêîðèñòàííî¿ ïàì'ÿòi (â áàéòàõ):\t" <<
		totalMemoryInBytes << endl;
}

// Ãîëîâíà ôóíêö³ÿ 
int main(int argumentsCount,		 // ê³ëüê³ñòü ïàðàìåòð³â, ÿê³ ïåðåäàâ êîðèñòóâà÷
		 char* argumentsValues[],		// çíà÷åííÿ ïàðàìåòð³â, ÿê³ ïåðåäàâ êîðèñòóâà÷
		 char* environmentParameters[]  // çì³íí³ îòî÷åííÿ, äëÿ ïîòî÷íîãî êîðèñòóâà÷à
)
{

	// ï³äòðèìêà ïîòî÷íî¿ ëîêàë³çàö³
	// (ìîâè òà íàö³îíàëüíèõ îñîáëèâîñòåé, 
	// òàêèõ ÿê âàëþòà, ôîðìàò ÷àñó ³ ò.ä.)
	setlocale(LC_ALL, "");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();
	cout << endl;
	studentInformationModel();

	// çà÷åêàòè ïîêè êîðèñòóâà÷ 
	// íàòèñíå áóäü-ÿêó êëàâ³øó, ùîá 
	// çàêðèòè ïðîãðàìó
	getchar();

	return 0;
}
