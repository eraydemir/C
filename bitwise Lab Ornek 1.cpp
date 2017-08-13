#include<stdio.h>

int main()
{
	unsigned int a=60;
	unsigned int b=13;
	int c=0;
	
	c=a&b;
	printf("Satir 1 Ýslem Sonucu :%d\n",c);
	
	c=a|b;
	printf("Satir 2 Ýslem Sonucu:%d\n",c);
	
	c=a^b;
	printf("Satir 3 Islem Sonucu:%d\n",c);
	
	c=~a;
	printf("Satir 4 Islem Sonucu:%d\n",c);
	
	c=a<<2;
	printf("Satir 5 Islem Sonucu:%d\n",c);
	
	c=a>>2;
	printf("Satir 6 Islem Sonucu:%d\n",c);
}
