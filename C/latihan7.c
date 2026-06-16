#include <stdio.h>
int main(){

// tugas latihan 7 program membuat pengulangan (LOOPING) penjumlahan 1 sampai x
int sum = 0;
int x = 100;
for (int N = 1; N <= x; N++){
    sum += N;
}
printf("the sum of 1 to %d is %d", x, sum);



    return 0; 
}