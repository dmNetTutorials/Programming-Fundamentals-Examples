#pragma once

#include<iostream>

using namespace std;

// пункти меню
enum MenuItems
{
	Unselected = 0, // не обрано жодного пункту
	Run,			// виконати програму
	Help,			// довідка
	Exit,			// вийти з програми
};

extern void BooleanSupportedOperations();
extern void IfElseSample();
extern void switchSample();
extern void showMenu();
extern void menuSample();
