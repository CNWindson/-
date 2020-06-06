#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>
#include <assert.h>

const int array_length =10;
int nums[array_length];

inline int Produce(int flag/*I*/);
void Randomarray(/*O*/);
int CheckArray(int object[]/*IO*/);
void Show(int object[]/*O*/);