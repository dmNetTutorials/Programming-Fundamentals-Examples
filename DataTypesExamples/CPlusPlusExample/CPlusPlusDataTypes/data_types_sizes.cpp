#include"data_types_sizes.h"

// "охорона включень" (include guard)
#ifndef DATA_TYPES_SIZES_H

#define DATA_TYPES_SIZES_H

void dataTypesSizes()
{

	cout << "char:\t" <<  sizeof(char) << endl;
	cout << "bool:\t" <<  sizeof(bool) << endl;
	cout << "short int:\t" <<  sizeof(short int) << endl;
	cout << "int:\t" <<  sizeof(int) << endl;
	cout << "long int:\t" <<  sizeof(long int) << endl;
	cout << "long long int:\t" <<  sizeof(long long int) << endl;
	cout << "float:\t" <<  sizeof(float) << endl;
	cout << "long float:\t" <<  sizeof(long float) << endl;
	cout << "double:\t" <<  sizeof(double) << endl;
	cout << "long double:\t" <<  sizeof(long double) << endl;
	cout << "void*:\t" <<  sizeof(void*) << endl;

}

#endif
