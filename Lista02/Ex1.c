#include <stdio.h>

int main() {

    int hp = 100;
    int *ptr_hp = &hp;

    printf("Valor do HP = %d , %d\n", hp, *ptr_hp );

    hp =  75;
    
    printf("Valor do HP = %d , %d\n", hp, *ptr_hp );

    *ptr_hp = *ptr_hp - 20;

    printf("Valor do HP = %d , %d\n", hp, *ptr_hp );


    return 0;

}

// o motivo da alteração no  *ptr_hp  refletir diretamente no hp é devido o ponteiro estar ligado diretamente no espaço de memoria do hp. 