#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num; // Pointer storing the address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored at pointer ptr: %d\n", *ptr);
    printf("Address stored in ptr: %p\n", ptr);

    return 0;
}
