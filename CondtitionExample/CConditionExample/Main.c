
#define _UNCONDITIONAL_GOTO_H
//#define _CONDITIONAL_GOTO_H

#ifdef _UNCONDITIONAL_GOTO_H
#include"UnconditionalGoto.c"
#else
#include"ConditionalGoto.c"
#endif

extern int main();
