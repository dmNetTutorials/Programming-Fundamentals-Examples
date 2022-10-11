#pragma once

#include<stdlib.h>
#include<stdio.h>
// підтримка типу даних bool
#include<stdbool.h> 

// файли, в яких зберігаються
// діапазони типів даних
#include<limits>  // для цілих чисел
#include<float.h> // для дробових чисел

void overflowSample();
void underflowSample();

void overflowDoubleSample();
void underflowDoubleSample();

void overflowBoolSample();
void underflowBoolSample();