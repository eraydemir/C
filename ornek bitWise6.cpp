#include<stdio.h>
int fonksiyon(unsigned);
int main()
{
	//Ekran Ciktisi.
	unsigned x;
	printf("Sayi Giriniz:");
	scanf("%u",&x);
	printf("Sonuc=%d\n",fonksiyon(x));
	return 0;
}
int fonksiyon(unsigned sayi)
{
	unsigned i,maske=1<<31,toplam=0;
	
	for(i=1;i<=32;i++,sayi<<=1){
	
		if((sayi&maske)==maske)
			++toplam;
	}
	//printf("%d\n",toplam);
	
	return !(toplam%2)?1:0;
}
