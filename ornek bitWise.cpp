#include<stdio.h>
int main()
{
	unsigned int x=0x1A;
	unsigned int y=0xF2;
	
	printf("x=%d y=%d\n\n",x,y);
	
	printf("x&y=%d\n",x&y);
	printf("x|y=%d\n",x|y);
	printf("x^y=%d\n",x^y);
	printf("x<<7=%d\n",x<<7);
	printf("x>>7=%d\n",x>>7);
	printf("~x=%d\n",~x);
}
