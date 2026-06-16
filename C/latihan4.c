#include <stdio.h>
int main(){

// program if else untuk menentukan lulus atau tidak lulus berdasarkan nilai ujian tugas 4

int x;
printf("masukkan nilai ujian anda : ");
scanf("%d", &x);
if (x >= 60){
    printf("selamat anda lulus!\n");
} else {
    printf("maaf,anda tidak lulus, selamat mencoba tahun depan!\n");
}
        



    return 0;
}