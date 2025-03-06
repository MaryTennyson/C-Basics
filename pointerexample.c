#include <stdio.h>

int main() {
    int *ptr;
    
    // 5 elemanlık dinamik bellek tahsisi
    ptr = (int*) malloc(5 * sizeof(int)); 
    
    if (ptr == NULL) {
        printf("Bellek tahsis edilemedi!\n");
        return 1;
    }

    // Dinamik diziyi doldurma
    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 2;
    }

    // Dizi elemanlarını yazdırma
    for (int i = 0; i < 5; i++) {
        printf("ptr[%d] = %d\n", i, ptr[i]);
    }

    // Belleği serbest bırak
    free(ptr);

    return 0;
}