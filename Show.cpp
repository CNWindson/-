#include "head.h"

void Show(int object[])
{
	//断言是否生成10个随机数,因为随机种子不同，则十个随机数必然不同
	assert(CheckArray(object)==9);
	for(int i=0;i<10;i++)
	{
		cout << object[i]<< "\t";
	}
	cout << endl;
}