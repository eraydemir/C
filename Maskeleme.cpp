#include<stdio.h>

int main()
{
	unsigned key=0xc0a80102;
	unsigned maske=0xff000000;
	int i,bit=32;
	unsigned temp;
	for(i=1;i<=4;i++)
	{
		temp=key&maske;
		if(i!=4)
		{
			maske=maske>>8;
			temp=temp>>(bit-i*8);
			printf("%d",temp);
		}
		else
			return temp;
			printf("%d",temp);
			
	}
	getchar();
	return 0;
	
}
