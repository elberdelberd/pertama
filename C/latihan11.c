#include <stdio.h>
int main(){

// kalkulator menghitung dan menentukan lulus tidaknya siswa berdasarkan nilai 

int x; // tugas
int y; // uts
int z; // kuis
int p; // uas
float r; 
char q;
/*Tugas: 90
Kuis: 80
UTS: 85
UAS: 88*/
printf("Masukkan nilai tugas anda : ");
scanf("%d", &x);


printf("Masukkan nilai uts anda : ");
scanf("%d", &y);


printf("Masukkan nilai kuis anda : ");        // nilai akhir = 0.2 * x + 0.1 * z + 0.3 * y + 0.4 * p
scanf("%d", &z);


printf("Masukkan nilai UAS anda : ");
scanf("%d", &p);

r = (0.2 * x) + (0.1 * z) + (0.3 * y) + (0.4 * p);


printf("nilai akhir anda adalah : %.2f\n", r);

/*A = 85 - 100
B = 75 - 84
C = 65 - 74
D = 50 - 64
E = 0  - 49*/

if (r >= 85 &&  r<= 100) { printf("grade anda adalah : A ");}
else if (r >=75 && r < 85) { printf("grade anda adalah : B ");}
else if (r >= 65 && r < 75  ) { printf("grade anda adalah : C ");}
else if (r >= 50 && r <65) { printf("grade anda adalah : D ");}
else {printf("grade anda adalah : E\n");}



if (r >= 60) {printf("status anda : LULUS ");}
else {printf("status anda : TIDAK LULUS ");}
    
    return 0;
}
