// fonk ve struct kullanıcıdan alınan bilgileri yazdırma
#include <stdio.h>
struct student {
    char name[20];
    char surname[20];
    int studentnumber;
};

void goster(struct student a){
     printf("Öğrenci bilgileri:%s %S %d",a.name,a.surname,a.studentnumber);
}

struct student degeral(){
    struct student a;
    printf("Öğrenci ismini giriniz: \n");
    scanf("%s",&a.name);
    printf("Öğrenci soyismini giriniz: \n");
    scanf("%s",&a.surname);
    printf("Öğrenci numarasını giriniz: \n");
    scanf("%d",&a.studentnumber);

}

int main(){
    struct student hk1 = degeral();
    goster(hk1);
    return 0;


}