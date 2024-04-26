//  öğrenci bilgileri girme ve yazdırma
#include <stdio.h>
struct student{
    char isim[20];
    char soyisim[20];
    int numara;

};

int main(){
    struct student ogrenciler[20];
    int i;

    for(i=0; i<2; i++){
        printf("%d. öğrencinin bilgilerini giriniz: ",i+1);
        scanf("%s %s %d",&ogrenciler[i].isim, &ogrenciler[i].soyisim, &ogrenciler[i].numara);
    }
    for(i=0; i<2; i++){
        printf("%d ogrencinin bilgileri:%s %s %d\n",i+1, ogrenciler[i].isim, ogrenciler[i].soyisim, ogrenciler[i].numara );
    }

return 0;
}