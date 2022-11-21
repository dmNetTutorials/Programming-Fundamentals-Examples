#pragma once

#include<iostream>

using namespace std;

struct ListNode
{
	int Value;
	ListNode* PreviousNode;
	ListNode* NextNode;
};

class LinkedList
{
private:
	// ������� ������
	ListNode* _head;

	// ������ �� �������� 
	// ������� �������
	ListNode* _cursor;

	// ����� ������
	ListNode* _tail;

public:
	bool Add(int newValue);
	bool Remove();
	int GetNode(int index);
};
