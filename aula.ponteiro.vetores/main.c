#include <stdio.h>
int main() {
    int v[5] = {1, 2, -5, -4, 7};
    int n = 5;
    for(int *p = v; p < v + n; p++) {

        printf("Valores do vetor: %d\n", *p );
    
        if (*p < 0){
            // printf("Valor negativo encontrado: %d\n", *p); 
            break;
        }
    }
    return 0;
}