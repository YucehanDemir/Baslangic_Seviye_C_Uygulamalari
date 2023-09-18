#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

//Setlocale fonksiyonunu kullanmadiginiz baska bir projede printf kismindaki yaziyi kopyalayip derleyerek aradaki farki test edebilirsiniz.

int main() {
    setlocale(LC_ALL,"Turkish");
    
printf("Bu kod Türkçe Karakterlerin Ekranda Gösterilmesini saglar.");
    
}
