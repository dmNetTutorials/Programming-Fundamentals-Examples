
#define _UNCONDITIONAL_GOTO_H
//#define _CONDITIONAL_GOTO_H

/*

����� �������� � ������ ������ 
���� ������������� �

�� ��������� ��������:

#define FALSE 0
#define TRUE 1

�� ��������� ������������

typedef enum
{
	false = 0,
	true,
} bool;

*/

#ifdef _UNCONDITIONAL_GOTO_H
#include"UnconditionalGoto.c"
#else
#include"ConditionalGoto.c"
#endif

extern int main();
