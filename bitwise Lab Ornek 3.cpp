#include<stdio.h>
int main(void)
{
	unsigned int x=5,y=1,sum,carry;
	sum=x^y;
	printf("%d\n",sum);
	
	carry=x&y;
	printf("%d\n",carry);
	
	while(carry!=0)
	{
		carry=carry<<1;
		x=sum;
		y=carry;
		sum=x^y;
		carry=x&y;
	}
	printf("%d",sum);
	getchar();
	return 0;
}
