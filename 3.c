//  öğrenci bilgileri yazdırma
#include <stdio.h>
#include <string.h>
struct adress{
    char mahalle[20];
    char cadde[20];
    char sokak[20];

};
struct student{
    char isim[20];
    char soyisim[20];
    int numara;
    int yas;
    struct adress adres;
};

int main(){
    struct student student1;
    strcpy(student1.isim,"Reyhan");
    strcpy(student1.soyisim,"KOÇ");
    student1.numara=221021334;
    student1.yas=22;
    strcpy(student1.adres.mahalle,"Bahçelievler");
    strcpy(student1.adres.cadde,"5.Cadde");
    strcpy(student1.adres.sokak,"Erginler");

    printf("%s %s %d %d %s %c %s",student1.isim, student1.soyisim, student1.numara, student1.yas, student1.adres.mahalle, student1.adres.cadde, student1.adres.sokak);
return 0;
}