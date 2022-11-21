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
	// початок списку
	ListNode* _head;

	// курсор на поточний 
	// обраний елемент
	ListNode* _cursor;

	// кінець списку
	ListNode* _tail;

public:
	bool Add(int newValue);
	bool Remove();
	int GetNode(int index);
};
