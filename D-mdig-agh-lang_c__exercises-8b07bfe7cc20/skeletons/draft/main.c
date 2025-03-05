#include <stdio.h>

int main() {
    int a = 5;           // Zmienna typu int
    float b = 3.14f;     // Liczba zmiennoprzecinkowa, dodanie 'f' dla float
    char c = 'A';        // Zmienna typu char

    printf("Integer: %d\n", a);       // Formatowanie dla liczb całkowitych
    printf("Float: %.2f\n", b);       // Formatowanie dla liczb zmiennoprzecinkowych
    printf("Char: %c\n", c);          // Formatowanie dla znaków

    return 0;  // Zwracamy 0, by wskazać poprawne zakończenie programu
}
