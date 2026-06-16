#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// di atas adalah fungsi penting yang harus ada di setiap file baru C //

int main() {

    int age = 0;
    printf("insert your age : ");
    scanf("%d", &age);
    printf("your age is %d\n", age);
    return 0;
}