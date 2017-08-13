#include<stdio.h>
//Unsigned Bir sayiyi bitlerle yazmak.
void BitleriGoster(unsigned);
int main()
{
	unsigned a;
	printf("Isaretsiz Bir Sayi Giriniz:");
	scanf("%u",&a);
	BitleriGoster(a);
	return 0;
}

void BitleriGoster(unsigned deger)
{
	unsigned c,maske=1<<31;
	printf("%7u=",deger);
	for(c=1;c<=32;c++)
	{
		putchar(deger&maske ? '1':'0');
		deger<<=1;
			if(c%8==0)
				putchar(' '); //Her 8 bit de bosluk birak.
			
	}
	putchar('\n');
	getchar();

	
}
