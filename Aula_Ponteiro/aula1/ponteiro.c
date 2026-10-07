#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define scan(msg, mascara, var) { printf(msg); scanf(mascara, &var); }


int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");
	int a;
	int *p = &a;
	*p = 5;
	printf("a=%d *p=%d p=%d &a=%d\n", a, *p, p+1, &a);
	return 0;
}


