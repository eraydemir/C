#include<stdio.h>

int main()
{
	unsigned int a=125;
	unsigned int b;
	//Soru Olarak Verildi biz yazdik.
	a=a>>2;
	printf("1.islem Sonucu Ekran Ciktisi:%d\n",a);
	
	b=5|12;
	printf("2.islem Sonucu Ekran Ciktisi:%d\n",b);
	
	b=5&12;
	printf("3.islem Sonucu Ekran Ciktisi:%d\n",b);
	
	b=5^12;
	printf("4.islem Sonucu Ekran Ciktisi:%d\n",b);
	
}
