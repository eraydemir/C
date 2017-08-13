#include<stdio.h>
int main()
{	//Girilen Sayi Degerindeki kac adet 1 oldugunu bulan program.
	unsigned sayi;
	int sayac=0;
	
	printf("Sayi Giriniz:");
	scanf("%u",&sayi);
	
	while(sayi!=0)
	{
		if(sayi&1==1)
			sayac++;
		sayi=sayi>>1;
	}
	printf("Girdiginiz sayi degerinde %d adet 1 vardir.",sayac);
	
	
	
	
	
	
	
	
	
}
