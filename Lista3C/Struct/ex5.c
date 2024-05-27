#include <stdio.h>

struct Vetor {
    float x;
    float y;
    float z;
};

struct Vetor somaVetores(struct Vetor v1, struct Vetor v2) {
    struct Vetor resultado;
    resultado.x = v1.x + v2.x;
    resultado.y = v1.y + v2.y;
    resultado.z = v1.z + v2.z;
    return resultado;
}

int main() {
    struct Vetor vetor1 = {5.0, 2.0, 4.5};
    struct Vetor vetor2 = {4.0, 5.0, 6.0};

    struct Vetor resultado = somaVetores(vetor1, vetor2);

    printf("Resultado da soma:\n");
    printf("x: %.2f\n", resultado.x);
    printf("y: %.2f\n", resultado.y);
    printf("z: %.2f\n", resultado.z);

    return 0;
}