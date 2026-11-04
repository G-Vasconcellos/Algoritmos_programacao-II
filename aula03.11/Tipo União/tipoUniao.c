#include <stdio.h>


int main (){
typedef union exemplo Exemplo;

    union exemplo {
        int i;
        char c;
    };

    Exemplo v;
    v.c = 'x';
    v.i = 10;

    printf("i=%d c=%d\n", v.i, v.c);
    return 0;
}

// Maneira de não usar. desse jeito sempre vai da errado.