// ϳ�������� �� �������� �����
// �� ��������� ������ �����
// � ���� ����������� ������������
#include"all_samples.h"

// ��������� ��� ��������� 
// ����� ����� �������:
using std::string;	// �������� ���� ����� "�����"
using std::cout;	// ���� ��� ��������� ������
using std::endl;	// ������ �������� �� ����� �����

void studentInformationModel()
{
	// ϲ�
	string studentFullName = "������� 1";
	// ������������� ��������/������� ������
	unsigned int studentID = 1;
	// ³� ��������
	unsigned short int studentAge = 18;
	// �������� �� �������� (����)
	unsigned short int currentStudyYear = 1;
	// �� ��������� �������?
	bool isStuding = true;
	// ������ �������� ��������
	string originAddress = "���, ������";
	// ������ ������ ��������
	string degree = "��������";

	// ��������� �����, ����� ��� ��������� �
	// ��������� ������� �� ��������� ���� ��������
	// ������� to_string() �������, ��� ����������� ����� � �����
	string group = degree + std::to_string(currentStudyYear);

	// ��������� ��'�� ���'�� (� ������) ���������� ��� 
	// ��������� ��������� ��� ��������
	unsigned int totalMemoryInBytes = sizeof(studentFullName) +
									  sizeof(group) +
									  sizeof(studentID) +
									  sizeof(studentAge) +
									  sizeof(currentStudyYear) +
									  sizeof(isStuding) +
									  sizeof(originAddress) +
									  sizeof(degree);

	cout << "�I� ��������:\t\t" << studentFullName << endl;
	cout << "�����:\t\t\t" << group << endl;
	cout << "����� ���i���� ������:\t" << studentID << endl;
	cout << "�i� ��������:\t\t" << studentAge << endl;
	cout << "�i� ��������:\t\t" << currentStudyYear << endl;

	// ������� ������������ ���������� �������� ��������� 
	// � ��������� �� �������� ����� isStuding, ���� �������� ��������:
	// ���� isStuding = true, ���� �������� "���"
	// ���� isStuding = false, ���� �������� "ͳ"
	cout << "�� �� ���������:\t" << ((isStuding) ? "���" : "ͳ") << endl;
	cout << "������:\t\t\t" << originAddress << endl;
	cout << "���i��i� ����i��:\t" << degree << endl;

	cout << "��������� ��'�� ������������ ���'��i (� ������):\t" <<
		totalMemoryInBytes << endl;
}

// ������� ������� 
int main(int argumentsCount,		 // ������� ���������, �� ������� ����������
		 char* argumentsValues[],		// �������� ���������, �� ������� ����������
		 char* environmentParameters[]  // ���� ��������, ��� ��������� �����������
)
{

	// �������� ������� ���������
	// (���� �� ������������ ������������, 
	// ����� �� ������, ������ ���� � �.�.)
	setlocale(LC_ALL, "");

	overflowSample();
	underflowSample();
	overflowDoubleSample();
	underflowDoubleSample();
	overflowBoolSample();
	underflowBoolSample();
	cout << endl;
	studentInformationModel();

	// �������� ���� ���������� 
	// ������� ����-��� ������, ��� 
	// ������� ��������
	getchar();

	return 0;
}