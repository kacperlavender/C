#include <stdlib.h>
#include <stdio.h>

/*
 * TODO: Zdefiniuj stałe symboliczne o wartościach zgodnych stałej symbolicznej
 *   __STDC_VERSION__ dla standardu C11 oraz C99.
 */

/**
 * Zwraca (własny) umowny identyfikator w zależności od wersji języka C:
 *
 * Jeśli stała symboliczna `__STDC_VERSION__` została zdefiniowana:
 *   Jeśli standard co najmniej C11: 2
 *   W przeciwnym razie, jeśli standard co najmniej C99: 1
 *   W przeciwnym razie: -1 (zapewne błąd)
 * W przeciwnym razie (starsze niż C99): 0
 *
 * @return (własny) umowny identyfikator wersji języka
 */
// TODO: Uzupełnij logikę poniższej funkcji zgodnie z powyższą specyfikacją.
int get_dummy_cstd_identifier() {
     return -1;
}

int main(void) {
    printf("Dummy C-version identifier: %d\n", get_dummy_cstd_identifier());

    return EXIT_SUCCESS;
}
