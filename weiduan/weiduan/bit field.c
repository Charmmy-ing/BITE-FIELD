#include<stdio.h>

	struct Bit
	{
		unsigned char bit0 : 1;
		unsigned char bit1 : 1;
		unsigned char bit2 : 1;
		unsigned char bit3 : 1;
		unsigned char bit4 : 1;
		unsigned char bit5 : 1;
		unsigned char bit6 : 1;
		unsigned char bit7 : 1;
	};
	int main()
	{
		unsigned char num = 51;
		struct Bit* pnum = &num;
		printf("%d%d%d%d%d%d%d%d\n",pnum->bit0, pnum->bit1, pnum->bit2, pnum->bit3, pnum->bit4, pnum->bit5, pnum->bit6, pnum->bit7);
		return 0;
	}
		

	