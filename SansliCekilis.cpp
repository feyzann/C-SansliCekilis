#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	char isim[10],soyisim[10];
	int sayi;
	int randomsayi;
	
	printf("isim soyisim giriniz:");
	scanf("%s%s",&isim,&soyisim);
	printf("sn.%s %s sansli cekilis uygulamasina hosgeldiniz lutfen 1 ve 10 arasinda bir sayi seciniz:",isim,soyisim);
	scanf("%d",&sayi);
	srand(time(NULL));
	randomsayi=1+rand()%10;
	if(sayi==randomsayi){
		printf("kazandiniz\nsectiginiz sayi:%d\ncekilis sayisi:%d\n",sayi,randomsayi);
	}
	else{
	printf("bir dahaki sefere\nsectiginiz sayi:%d\ncekilis sayisi:%d",sayi,randomsayi);	}	
	
	
	
}
