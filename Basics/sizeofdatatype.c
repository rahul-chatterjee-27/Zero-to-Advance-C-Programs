#include <stdio.h>

int main() {
    printf("\n----- Data Type Sizes (in bytes) -----\n");
    printf("Size of int       : %d bytes\n", (int)sizeof(int));
    printf("Size of float     : %d bytes\n", (int)sizeof(float));
    printf("Size of char      : %d bytes\n", (int)sizeof(char));
    printf("Size of long int  : %d bytes\n", (int)sizeof(long int));
    printf("Size of double    : %d bytes\n", (int)sizeof(double));
    printf("Size of short int : %d bytes\n", (int)sizeof(short int));
    printf("Size of long long : %d bytes\n", (int)sizeof(long long));

    return 0;
}
