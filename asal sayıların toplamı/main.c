#include <stdio.h>
#include <stdlib.h>
int topla(int a){

    int j, i,sayac,toplam=0;

   for(i = 1;i<=a;i++)
    {
      sayac = 0;
      for(j=2;j<i;j++)
      {
         if(i%j==0)
         {
            sayac=1;
            break;
         }
      }
   if(sayac==0 && i!= 1)
    {
      printf("%d ",i);
      toplam+=i;
    }
    }
}
int main()
{
    int a;
    printf("Kaca kadar olan asal sayilarin toplamini istediginizi giriniz:");
    scanf("%d",&a);
   printf("\ntoplam=%d\n",topla(a));

   return 0;
}

