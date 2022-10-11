#include"data_types_sizes.h"

// "охорона включень" (include guard)
#ifndef DATA_TYPES_SIZES_H

#define DATA_TYPES_SIZES_H

void dataTypesSizes()
{

	printf("char:\t%d\n", sizeof(char));
	printf("bool:\t%d\n", sizeof(bool));
	printf("short int:\t%d\n", sizeof(short int));
	printf("int:\t%d\n", sizeof(int));
	printf("long int:\t%d\n", sizeof(long int));
	printf("long long int:\t%d\n", sizeof(long long int));
	printf("float:\t%d\n", sizeof(float));
	printf("long float:\t%d\n", sizeof(long float));
	printf("double:\t%d\n", sizeof(double));
	printf("long double:\t%d\n", sizeof(long double));
	printf("void*:\t%d\n", sizeof(void*));

}

#endif
