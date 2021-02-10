#include <gtest/gtest.h>

// TESTマクロを使う場合

// 第1引数がテストケース名、第2引数がテスト名
TEST(MyLibraryTest, Function1Test) {
    ASSERT_TRUE(false) << "失敗してみた";
}

TEST(MyLibraryTest, Class1Test) {
    ASSERT_TRUE(false) << u"失敗してみた２";
    //...
}