#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	int number1,i,number,total,piece,addition,extraction,multiplication,division;
	int cohoose;
	char enter;
	printf("            Yapacaginiz islemi secmek icin islemin yanindaki rakama basiniz:\n\n");
	printf("1-Addition(toplama islemi)\n");
	printf("2-extraction process(cikarma islemi)\n");
	printf("3-multipliction(carpma islemi)\n");
	printf("4-division(bolme islemi)\n");
	printf("5-terminate the process(islemi sonlandir)\n");
	while(cohoose!=5){
	scanf("%d",&cohoose);
	switch(cohoose)
	{
		case 1:/*toplama islemi(addition)*/
		total=0;
		printf("kac adet sayiyla islem yapacaginizi giriniz:\n");
		scanf("%d",&piece);
		printf("sayilari giriniz:\n");
		for(i=1; i<=piece; i++){
			printf("%d.sayiyi=",i);
			scanf("%d",&number);
			total +=number;
		}
		printf("Cevap=%d\n\nyapacaginiz islemi secin baska islem yapmayacaksaniz 5 basin:",total);
		break;

		case 2:/*Cikarma islemi(extraction process)*/
		printf("kac adet sayiyla islem yapacaginizi giriniz:\n");
		scanf("%d",&piece);
		printf("sayilari giriniz:\n");
		printf("1.sayiyi=");
		scanf("%d",&number1);
		for(i=1; i<piece; i++){
			printf("%d.sayiyi=",i+1);
			scanf("%d",&number);
			number1 -=number;
		}
		printf("Cevap=%d\n\nyapacaginiz islemi secin baska islem yapmayacaksaniz 5 basin:",number1);
		break;

		case 3:/*Carpma islemi(multiplication)*/
		total=1;
		printf("kac adet sayiyla islem yapacaginizi giriniz:\n");
		scanf("%d",&piece);
		printf("sayilari giriniz:\n");
		for(i=1; i<=piece; i++){
			printf("%d.sayiyi=",i);
			scanf("%d",&number);
			total *=number;
		}
		printf("Cevap=%d\n\nyapacaginiz islemi secin baska islem yapmayacaksaniz 5 basin:",total);
		break;

		case 4:/*bolme islemi(division)*/
		printf("kac adet sayiyla islem yapacaginizi giriniz:\n");
		scanf("%d",&piece);
		printf("sayilari giriniz:\n");
		printf("1.sayiyi=");
		scanf("%d",&number1);
		for(i=1; i<piece; i++){
			printf("%d.sayiyi=",i+1);
			scanf("%d",&number);
			if(number==0){
				printf("Tanimsiz Durum!");
			}
			number1 /=number;
		}
		printf("Cevap=%d\n\nyapacaginiz islemi secin baska islem yapmayacaksaniz 5 basin:",number1);
		break;
		case 5:
			printf("isleminizi sonlandirdiniz.");
			break;

	    default:
		printf("Gecersiz bir sayi girdiniz!\nislemlerin yanindaki rakamý giriniz:");
		break;
}
}


	return 0;
}
