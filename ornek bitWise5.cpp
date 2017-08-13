#include<stdio.h>
//kaydirma operatörlerinin kullanýlmasý
void bitlerigoster(unsigned);

	int main()
	{
		unsigned sayi=960;
		bitlerigoster(sayi);
		printf("Sola Kaydirmasi Sonucu:\n");
		bitlerigoster(sayi<<8);
		printf("\n---------------------------------------------\n\n");
		bitlerigoster(sayi);
		printf("Saga Kaydirmasi Sonucu:\n");
		bitlerigoster(sayi>>8);
		return 0;
		
	}
void bitlerigoster(unsigned deger)
{
	unsigned count,maske=1<<31;
	printf("%7u=",deger);
	for(count=1;count<=32;count++)
	{
		putchar(deger&maske?'1':'0');
		deger<<=1;
		if(count%8==0)
			putchar(' ');
	}
	putchar('\n');
}
