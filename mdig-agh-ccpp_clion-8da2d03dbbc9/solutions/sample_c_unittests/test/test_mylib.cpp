#include "gtest/gtest.h"

// Fragment
//   extern "C" { ... }
// sprawia, że nazwy funkcji wewnątrz bloku nie zostaną udekorowane.
// Jest on niezbędny, gdyż języki C i C++ używają różnych technik dekorowania nazw
// (ang. name mangling) - podczas kompilacji w języku C nazwy funkcji pozostają
// bez zmian, natomiast w przypadku języka C++ dodawane są informacje pozwalające
// zrealizować mechanizm przeciążania funkcji.
extern "C" {
#include "mylib.h"
}

TEST(MylibTest, IsReturning1) {
    EXPECT_EQ(return_1(), 1);
}

TEST(DummyTest, AlwaysFail) {
    EXPECT_EQ(0, 1);
}
