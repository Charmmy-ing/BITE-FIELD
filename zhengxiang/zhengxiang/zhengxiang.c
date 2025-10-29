#include<stdio.h>
int main()
{
	int age = 21, i;//00010101
	for (i = 0; i < 8; i++)\
	{
		if (age & 0x80)//按位与运算与10000000比较可得正序
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		age <<= 1;//》右移符
	}

}//10101000turn