#include <stdio.h>
#include <assert.h>

int suma(int a, int b){
    return a + b;
}
int resta(int a, int b){
    return a - b;
}
int multiplicacion(int a, int b){
    return a * b;
}
int division(int a, int b){
    if(a==0 || b==0){
        return 0;
    }
    return a / b;
}

int main() {
    assert(suma(2,3) == 5);
    assert(suma(0,0) == 0);
    assert(suma(-1,1) == 0);
    assert(suma(-2,-3) == -5);
    assert(resta(5,3) == 2);
    assert(resta(0,0) == 0);
    assert(resta(-1,1) == -2);
    assert(resta(-2,-3) == 1);
    assert(multiplicacion(2,3) == 6);
    assert(multiplicacion(0,5) == 0);
    assert(multiplicacion(-1,1) == -1);
    assert(multiplicacion(-2,-3) == 6);
    assert(division(6,3) == 2);
    assert(division(0,5) == 0);
    assert(division(-6,2) == -3);
    assert(division(-6,-3) == 2);
    
    printf("Calculadora inicializada.\n");
    return 0;
}
