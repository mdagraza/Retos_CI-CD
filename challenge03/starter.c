#include <stdio.h>
#include <stddef.h>
#include <assert.h>

size_t mi_strlen(const char *s){
    size_t len = 0;
    while(s[len] != '\0'){
        len++;
    }
    return len;
}
int mi_strcmp(const char *s1, const char *s2){
    while(*s1 && (*s1 == *s2)){
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}
char *mi_strcpy(char *dest, const char *src){
    char *original_dest = dest;
    while((*dest++ = *src++) != '\0');
    return original_dest;
}

int main() {
    // Tests de mi_strlen
    assert(mi_strlen("") == 0);
    assert(mi_strlen("hola") == 4);
    assert(mi_strlen("abc\0def") == 3);  // solo hasta el primer '\0'

    // Tests de mi_strcmp
    assert(mi_strcmp("", "") == 0);
    assert(mi_strcmp("abc", "abc") == 0);
    assert(mi_strcmp("abc", "abd") < 0);
    assert(mi_strcmp("abd", "abc") > 0);

    // Tests de mi_strcpy
    char buf[20];
    assert(mi_strcpy(buf, "")[0] == '\0');
    assert(mi_strcpy(buf, "hola") == buf);
    assert(mi_strcmp(buf, "hola") == 0);

    printf("Funciones de cadenas inicializadas.\n");
    return 0;
}
