#include <stdio.h>
#include <stdbool.h>
int main() {
    int i = 50;
while (true) {
    printf("%d\n", i);
    i++;
    if (i > 13929)
        break;
}
       
    return 0;
}