#include <stdio.h>

int main()
{
   int dizi[100], s, x, y, pw, t;

   printf("LUTFEN DIZI ICIN ELEMAN SAYISINI GIRINIZ:");
   scanf("%d", &s);

  

   for ( x = 0 ; x < s ; x++ ){
  
    printf("%d ELEMANA AIT DEGERLERI GIRINIZ:",x+1,s);
      scanf("%d", &dizi[x]);
 }
   for ( x = 0 ; x < ( s - 1 ) ; x++ )
   {
      pw = x;

      for ( y = x + 1 ; y < s ; y++ )
      {
         if ( dizi[pw] > dizi[y] )
            pw = y;
      }
      if ( pw != x )
      {
         t = dizi[x];
         dizi[x] = dizi[pw];
         dizi[pw] = t;
      }
   }

   printf("ARTAN SIRAYA GORE LISTELEME:");

   for ( x = 0 ; x < s ; x++ )
      printf(" %d   ", dizi[x]);

   return 0;
}

