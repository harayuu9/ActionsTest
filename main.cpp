#include <gtest/gtest.h>

#include <benchmark/benchmark.h>

// TESTマクロを使う場合

// 第1引数がテストケース名、第2引数がテスト名
TEST(MyLibraryTest, Function1Test) {
    ASSERT_TRUE(true) /*<< "失敗してみた"*/;
}

TEST(MyLibraryTest, Class1Test) {
    ASSERT_TRUE(true)/* << u"失敗してみた２"*/;
    //...
}


static void CppLinqFirstOrDefault(benchmark::State& state)
{
    while (state.KeepRunning())
    {
        auto cnt = 0;
        for(auto i=0;i<10000;i++)
        {
            cnt += i;
        }
    }
}

BENCHMARK(CppLinqFirstOrDefault);