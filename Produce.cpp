#include "head.h"


//生成随机数函数，用循环变量作为种子（连续种子经尝试是默认按照大小顺序排列的）
inline int Produce(int flag)
{   unsigned seed;
    seed = flag;
    srand(seed);
    return rand()%100;
}