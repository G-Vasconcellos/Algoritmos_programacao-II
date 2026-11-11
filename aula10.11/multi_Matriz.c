#include <Stdio.h>
#include <stdlib.h>

int **multiplica(int linhas, int coluna, int **m, int x) {
    int **r = (int **) malloc(linhas * sizeof(int *));
    for (int i=0; i < linhas; i++){
        r[i] = (int *) malloc(coluna * sizeof(int));
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < coluna; j++){
            r[i][j] = m[i][j] * x;
        }
    }

    return r;
}

int main () {
    int linhas = 3, coluna = 4;

    int **mat = (int **) malloc(linhas * sizeof(int *));
    for (int i=0; i < linhas; i++){
        mat[i] = (int *) malloc(coluna * sizeof(int));
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < coluna; j++){
            mat[i][j] = (i + 1) * 10 + (j + 1);
        }
    }
    printf("Matriz\n");

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < coluna; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    int **result = multiplica(linhas, coluna, mat, 2);

    printf("resultado x2\n");
    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < coluna; j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < linhas; i++){
        free(mat[i]);
        free(result[i]);
    }
    free(mat);
    free(result);

    printf("fim...");

    return 0;

}