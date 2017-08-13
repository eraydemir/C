#include<stdio.h>

void bitlerigoster(unsigned);

int main()
{
	unsigned sayi1,sayi2,maske,a;
	
	printf("Asagidaki degerlerin Sonucu:\n");
	sayi1=65535;
	maske=1;
	bitlerigoster(sayi1); //00000000 00000000 11111111 11111111
	bitlerigoster(maske); //00000000 00000000 00000000 00000001
	printf("And operatoru & kullanildiginda:\n");
	bitlerigoster(sayi1&maske); //00000000 00000000 00000000 00000001
	printf("\n");
	
	printf("Asagidaki degerlerin Sonucu:\n");
	sayi1=15;
	maske=241;
	bitlerigoster(sayi1); //00000000 00000000 00000000 00001111
	bitlerigoster(maske), //00000000 00000000 00000000 11110001
	printf("Or opetaoru | kullanildiginda:\n");
	bitlerigoster(sayi1|maske); //00000000 00000000 00000000 11111111
	printf("\n");	
	
	printf("Asagidaki degerlerin Sonucu:\n");
	sayi1=139;
	sayi2=199;
	bitlerigoster(sayi1); //00000000 00000000 00000000 10001011
	bitlerigoster(sayi2); //00000000 00000000 00000000 11000111
	printf("Exclusive Or opetaoru ^ kullanildiginda:\n");
	bitlerigoster(sayi1^sayi2); //00000000 00000000 00000000 01001100
	printf("\n");
	
	printf("Asagidaki degerlerin Sonucu:\n");
	sayi1=21845;
	bitlerigoster(sayi1);   //00000000 00000000 01010101 01010101
	printf("Sayinin tumleyeni:\n");
	bitlerigoster(~sayi1);  //11111111 11111111 10101010 10101010
	printf("\n");
	
}

void bitlerigoster(unsigned sayi)
{
	unsigned count,maske=1<<31;
	printf("%7u=",sayi);
	
	for(count=1;count<=32;count++)
	{
		putchar(sayi&maske?'1':'0');
		sayi<<=1;
			if(count%8==0)
				putchar(' ');
	}
	putchar('\n');
}
