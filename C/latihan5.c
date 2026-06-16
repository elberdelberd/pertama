#include <stdio.h>

int main(){


    // tugas latihan 5 program untuk menenrtukan umur seseorang dengan menggunakan 3 syarat 


int umur;
printf("masukkan umur anda : ");
scanf("%d", &umur);
if (umur < 13){
    printf("anda masih anak anak");
} 
else if (umur >= 13 && umur <= 17){
    printf("anda masih remaja");
} 
else{
    printf("anda sudah dewasa");

}



    return 0;
}