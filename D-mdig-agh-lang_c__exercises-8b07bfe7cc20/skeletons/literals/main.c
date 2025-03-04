#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <limits.h>

int main(void) {
    // TODO: W poniższych instrukcjach użyj poprawnych literałów tak, aby program poprawnie się kompilował.
    double d = 1;
    float f = 1;

    char c = 65;    // TODO: Użyj stałej znakowej reprezentującej literę A.
    bool b = 0;     // TODO: Użyj makra odpowiadającego wartości FAŁSZ.

    f += 1.0f;

    unsigned int ui = INT_MAX + 1u;

    printf("l = %ld\n", 3l);  // TODO: Należy wyświetlić wartość typu `long`.

    printf("c = %c\n", c);
    printf("b = %d\n", b);

    // Poniższe instrukcje zostały dodane po to, aby kompilator nie zgłaszał
    // błędów związanych z nieużywanymi zmiennymi.
    ui += 1;
    d += 0.0;

    return EXIT_SUCCESS;
}
