#include <stdio.h>
#include <string.h>


int main (){

// tugas latihan 8 program membuat kalkulator sederhana 
float x;
float y;
char operator; // operator adalah - + * /
char yesno[10] = "yes";

while (strcmp(yesno, "yes") == 0){

printf("====KALKULATOR SEDERHANA====\n");

printf("MASUKKAN OPERATOR(1,2,3,4) YANG INGIN ANDA GUNAKAN : \n");

printf("1. Penjumlahan (+)\n");
printf("2. Pengurangan (-)\n");
printf("3. Perkalian (*)\n");
printf("4. Pembagian (/)\n");

scanf(" %c", &operator);

printf("masukkan nilai pertama anda : ");
scanf("%f", &x);

printf("masukkan nilai kedua anda : ");
scanf("%f", &y);

if (operator == '1'){
    printf("%.2f", x + y);
} else if (operator == '2'){
    printf("%.2f", x - y);}
    else if (operator == '3'){
        printf("%.2f", x * y);}

        else if(operator == '4')   {if (y == 0) {printf("tidak valid karena pembagian dengan nol!");}

          else{printf("%.2f", x / y);}}

          else {printf("NOT VALID");}
         

            
        


        printf("\napakah masih mau lanjut? (yes/no) : ");
       scanf(" %s", &yesno);}
        
       



return 0;
}

/*#include <stdio.h>

int main() {

    float x, y;
    int operator;
    char yn = 'y';

    while (yn == 'y') {

        printf("==== KALKULATOR SEDERHANA ====\n");

        printf("1. Penjumlahan (+)\n");
        printf("2. Pengurangan (-)\n");
        printf("3. Perkalian (*)\n");
        printf("4. Pembagian (/)\n");

        printf("Pilih operator (1-4): ");
        scanf("%d", &operator);

        printf("Masukkan angka pertama: ");
        scanf("%f", &x);

        printf("Masukkan angka kedua: ");
        scanf("%f", &y);

        if (operator == 1) {
            printf("Hasil = %.2f\n", x + y);
        }
        else if (operator == 2) {
            printf("Hasil = %.2f\n", x - y);
        }
        else if (operator == 3) {
            printf("Hasil = %.2f\n", x * y);
        }
        else if (operator == 4) {

            if (y == 0) {
                printf("Tidak bisa dibagi 0\n");
            } else {
                printf("Hasil = %.2f\n", x / y);
            }

        }
        else {
            printf("Operator tidak valid\n");
        }

        printf("Mau lanjut? (y/n): ");
        scanf(" %c", &yn);
    }

    printf("Program selesai.\n");

    return 0;
}*/

/*tambahkan jika latihan 8 
nama anda siapa 
masukkan nilai anda berdasarkan perhitungan tertentu memanfaatkan kalkulator 
tentukan rentang nilai apakah dia akan lolos atau tidak*/

    







/*printf("masukkan angka pertama: "); 
scanf("%.2f", &x);

printf("masukkan operator (+, -, *, /): \n");
scanf(" %c", &operator);

printf("masukkan angka kedua: ");
scanf("%.2f", &y);


if (operator == '+') {
    printf("hasil anda adalah %.2f", x + y);
} else if (operator == '-') {
    printf("hasil anda adalah %.2f", x - y);
} else if (operator == '*') {
    printf("hasil anda adalah %.2f", x * y);
} else if (operator == '/') {
    printf("hasil anda adalah %.2f", x / y);
} else {
    printf("operator tidak valid");
    return 1; // keluar dengan kode error
}
if (operator == '/' && y == 0) {
    printf("hasil anda tidak valid karena pembagian dengan nol tidak diperbolehkan");
} else {
    printf("hasil anda adalah %.2f", x / y);
}*/



