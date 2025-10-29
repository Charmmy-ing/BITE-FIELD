#include<stdio.h>
int main()
{
	int age = 21,i;//00010101
	for(i=0;i<8;i++)\
	{
		if (age & 0x1)//按位与运算
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		age >>= 1;//》右移符
	}

}//10101000turn