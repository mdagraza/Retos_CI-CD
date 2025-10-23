#include <stdio.h>
#include <assert.h>

// Declaración de la función a implementar
int suma(int a, int b){
    return a + b;
}

int main() {
    assert(suma(2,3) == 5);
    assert(suma(0,0) == 0);
    assert(suma(-1,1) == 0);
    assert(suma(-2,-3) == -5);
    // Ejemplo de uso rápido
    printf("Resultado: %d\n", suma(2, 3));
    return 0;
}
