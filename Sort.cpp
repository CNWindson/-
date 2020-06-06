#include "head.h"


//排序函数，擂台法
void Sort(int object[])
{
    int len = sizeof(nums)/sizeof(int);
    int temp = 0;
    for(int i=0;i<len;i++){
        for(int j=i;j<len;j++){
                if(nums[j]<nums[i]){
                    temp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = temp;
                }
        }
    }
}