#include <gtest/gtest.h>

#include <benchmark/benchmark.h>

// TEST�}�N�����g���ꍇ

// ��1�������e�X�g�P�[�X���A��2�������e�X�g��
TEST(MyLibraryTest, Function1Test) {
    ASSERT_TRUE(true) /*<< "���s���Ă݂�"*/;
}

TEST(MyLibraryTest, Class1Test) {
    ASSERT_TRUE(true)/* << u"���s���Ă݂��Q"*/;
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