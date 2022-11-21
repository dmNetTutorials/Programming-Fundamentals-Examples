#include"Main.h"

// Push  - stack
	// Push_back - Dequeue
	// Push_front  
	// 
	// Enque - queue 
	// Add   - ���� ������� �������� �����
bool LinkedList::Add(int newValue)
{
	bool operationResult = false;

	if (_tail == nullptr)
	{
		// ������� ������
		_head = new ListNode();
		// �������� ������� ������
		_tail = _head;
		// �������� �� ������� �������
		_cursor = _tail;
		operationResult = true;
	}
	else
	{

#pragma region Current Node State

		// �������� ���'�� �� ��� ���
		_tail->NextNode = new ListNode();
		// ����� ����� ����� � ���'���
		_tail->NextNode->Value = newValue;

#pragma endregion

		// �������� ��������� 
		// �� ��������� �������
		_tail->PreviousNode = _tail;
		// �������� ������� = ����� �������
		_tail = _tail->NextNode;
		// ��������� �� ����� �������
		_cursor = _tail;
		operationResult = true;
	}

	return operationResult;
}

bool LinkedList::Remove()
{
	// head
	// v
	// 1 <-> 3 < tail
	//		 ^
	//	 cursor
	if (_cursor != nullptr)
	{

#pragma region Change Links

		// 1
		_cursor->PreviousNode->NextNode \
			= _cursor->NextNode;
		// 3
		_cursor->NextNode->PreviousNode \
			= _cursor->PreviousNode;
#pragma endregion

		// ��������� ������� ��� ��������
		_cursor = _cursor->NextNode;

		return true;
	}

	return false;
}

int LinkedList::GetNode(int index)
{
	// 0 1 2 < index
	// 1 2 3
	_cursor = _head;
	short int currentIndex = 0;

	while (_cursor != nullptr)
	{
		if (currentIndex == index)
		{
			return _cursor->Value;
		}
		else
		{
			_cursor = _cursor->NextNode;
			currentIndex++;
		}
	}

	return 0;

}

int main()
{
	setlocale(LC_ALL,"");

	cin.get();

}