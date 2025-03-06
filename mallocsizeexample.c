#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>  // malloc_usable_size() için gerekli başlık dosyası

int main() {
    int *ptr = (int*) malloc(5 * sizeof(int));

    // malloc_usable_size() fonksiyonu ile tahsis edilen toplam belleği öğreniyoruz
    size_t size = malloc_usable_size(ptr);
    printf("Tahsis edilen toplam bellek (byte): %zu\n", size);

    free(ptr);
    return 0;
}