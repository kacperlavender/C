#define __USE_MINGW_ANSI_STDIO 1

#include <stdlib.h>
#include <stdio.h>

int main(void) {
    double d = 1;
    float f = 1;

    // TODO: Wymuś odpowiednią konwersje z użyciem operatora rzutowania.
     f += d;

    // TODO: Użyj poprawnego specyfikatora konwersji do wyświetlenia wartosci.
     printf("sizeof(int) = %d\n", sizeof(int));

    return EXIT_SUCCESS;
}
