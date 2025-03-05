# Notatki do testu na początek zajęć – C

## 1. Preprocessing, kompilacja, konsolidacja

### Cel każdego z etapów:
- **Preprocessing**: Przetwarzanie kodu źródłowego przed kompilacją. Obejmuje to m.in. włączanie plików nagłówkowych (`#include`), rozwijanie makr (`#define`), oraz usuwanie komentarzy.
- **Kompilacja**: Przetwarzanie kodu źródłowego na kod maszynowy (lub kod pośredni). Składa się z analizy leksykalnej, syntaktycznej, semantycznej oraz generacji kodu.
- **Konsolidacja (linkowanie)**: Łączenie skompilowanych modułów (plików obiektowych) w jeden plik wykonywalny. Rozwiązuje również referencje do funkcji i zmiennych zdefiniowanych w innych modułach.

### Dane przetwarzane na każdym etapie:
- **Preprocessing**: Kod źródłowy (`.c`) -> Kod źródłowy po preprocessingu (`.i`).
- **Kompilacja**: Kod źródłowy po preprocessingu (`.i`) -> Kod obiektowy (`.o` lub `.obj`).
- **Konsolidacja**: Kod obiektowy (`.o`) -> Plik wykonywalny (`.exe` lub bez rozszerzenia w systemach Unix-like).

## 2. Dane w języku C

### Literały dla typów:
- **unsigned T**: Literały bez znaku nie mają specjalnego przyrostka, np. `123U`.
- **float**: Literały zmiennoprzecinkowe mają przyrostek `f`, np. `3.14f`.
- **long**: Literały długie mają przyrostek `L`, np. `123456789L`.

### Typ logiczny:
- **bool**: Typ logiczny, który może przyjmować wartości `true` (prawda) lub `false` (fałsz).
- **false**: Wartość logiczna reprezentująca fałsz (0).
- **true**: Wartość logiczna reprezentująca prawdę (1).

## 3. Obiekty, zmienne i stałe

### Deklaracja, definicja, inicjalizacja:
- **Deklaracja**: Informacja dla kompilatora o istnieniu zmiennej, funkcji lub typu. Nie przydziela pamięci.
  - Przykład: `extern int x;`
- **Definicja**: Tworzy instancję zmiennej lub funkcji, przydziela pamięć.
  - Przykład: `int x;`
- **Inicjalizacja**: Nadanie początkowej wartości zmiennej w momencie jej definicji.
  - Przykład: `int x = 10;`

### Stałe z użyciem `const`:
- **const**: Kwalifikator, który oznacza, że wartość zmiennej nie może być zmieniona po inicjalizacji.
  - Przykład: `const int MAX_VALUE = 100;`

## 4. Na styku języków C i C++

### Definiowanie zmiennych a błędy kompilacji:
- W C++ zmienne można definiować w dowolnym miejscu kodu, podczas gdy w C muszą być definiowane na początku bloku.
- Błędy kompilacji mogą wystąpić, jeśli próbujemy użyć zmiennej przed jej definicją.

## 5. Operatory, wyrażenia i instrukcje

### Operator, operand:
- **Operator**: Symbol lub słowo kluczowe, które wykonuje operację na jednym lub więcej operandach.
- **Operand**: Wartość lub zmienna, na której wykonywana jest operacja.

### Rodzaje operatorów:
- **Unarny**: Operator działający na jednym operandzie, np. `-x`, `++x`.
- **Binarny**: Operator działający na dwóch operandach, np. `x + y`, `x == y`.

### Kategorie wartości wyrażeń:
- **L-wartość (lvalue)**: Wyrażenie, które odnosi się do lokalizacji pamięci (może być modyfikowalne lub niemodyfikowalne).
  - Przykład: `x = 10;` (modyfikowalne), `const int y = 20;` (niemodyfikowalne).
- **R-wartość (rvalue)**: Tymczasowa wartość, która nie ma stałej lokalizacji w pamięci.
  - Przykład: `10`, `x + y`.

## 6. Instrukcje warunkowe oraz operatory relacyjne i logiczne

### Sprawdzanie wartości logicznej wyrażenia:
- Wartość logiczna wyrażenia jest sprawdzana w instrukcjach warunkowych, takich jak `if`, `while`, `for`.
- Dobrą praktyką jest unikanie porównań z wartościami logicznymi, np. `if (x == true)` zamiast `if (x)`.

### Operatory logiczne:
- **&&**: AND (i) – prawda, jeśli oba operandy są prawdziwe.
- **||**: OR (lub) – prawda, jeśli przynajmniej jeden operand jest prawdziwy.
- **!**: NOT (negacja) – odwraca wartość logiczną operandu.

### Priorytety operatorów:
- `!` > `&&` > `||`

## 7. Funkcje

### Argument a parametr:
- **Parametr**: Zmienna zdefiniowana w deklaracji funkcji.
  - Przykład: `void funkcja(int parametr);`
- **Argument**: Wartość przekazywana do funkcji podczas jej wywołania.
  - Przykład: `funkcja(10);`

### Błąd "undefined reference to ...":
- Występuje, gdy kompilator nie może znaleźć definicji funkcji lub zmiennej, do której odwołuje się kod.
- Może być spowodowany brakiem linkowania odpowiedniej biblioteki lub pliku obiektowego.

## 8. Standard kodowania

### Umieszczanie pojedynczego odstępu wokół operatorów dwuargumentowych:
- **Poprawnie**: `a + b`, `x = y`, `i < 10`.
- **Niepoprawnie**: `a+b`, `x=y`, `i<10`.
