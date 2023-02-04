#include <stdio.h>
// dizinin hangi ardışık 2 teriminin çarpımı en büyük?
// dizinin terimleri 3 5 8 12 6 olsun
// 3*5=15 , 5*8=40 , 8*12=96 , 12*6=72 döngü 4 kez(5 elemanlı dizi için) çalışacak (n elemanlı dizi için döngü n - 1 kez çalışacak)

int main() 

{
    
 int i;
 int max = 0;
 int dizi[5] = {3,5,8,12,6};
 
 for(i = 0 ; i < 4 ; i++)
 {
  int gecici = dizi[i] * dizi[i + 1];
  if(gecici > max)
  {
   max = gecici;
  }
 }
 
 printf("dizinin ardisik iki teriminin max carpim sonucu: %d\n",max);
 
 return 0;
  
}