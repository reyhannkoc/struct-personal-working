// fonk ve struct öğrenci bilgisi yazdırma
#include <stdio.h>
struct student{
    char isim[20];
    char soyisim[20];
    int numara;

};

void goster(struct student a){
    
printf("Öğrenci bilgileri:%s %s %d", a.isim, a.soyisim, a.numara);
}

int main(){
    struct student student1 = {"Reyhan", "KOÇ",221021};
    goster(student1);
    return 0;

}