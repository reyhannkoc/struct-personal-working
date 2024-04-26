// verilen öğrenci bilgilerini yazdırma
#include <stdio.h>
struct student{
    char isim[30];
    char soyisim[30];

    int numara;
    int yas;
};

int main(){
    struct student Reyhan={"Reyhan","KOÇ",2210213034, 22};
    printf("%s %s %d %d",Reyhan.isim, Reyhan.soyisim, Reyhan.numara, Reyhan.yas);
    return 0;
}