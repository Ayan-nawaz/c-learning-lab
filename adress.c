#include <stdio.h>

int main() {
    int arr[5] = {1, 1, 2, 1, 1};

    printf("%p\n", (void *)&arr[0]);
    printf("%p\n", (void *)&arr[1]);
    printf("%p\n", (void *)&arr[2]);
    printf("%p\n", (void *)&arr[3]);
    printf("%p\n", (void *)&arr[4]);

    return 0;
}