#include "head.h"


//检验函数用于检验是否生成了10个随机数
int CheckArray(int object[])
{	int count=0;
	for(int i=1;i<10;i++){
		if(object[0]!=object[i]){
			count++;
		}
	}
	return count;
}