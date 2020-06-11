#include "doctest.h"
#include <iostream>
#include <vector>
#include <limits>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"

using namespace itertools;
using namespace std;

TEST_CASE("Test 1")
{
    int j[] = {5, 5+6, 5+6+7, 5+6+7+8};
    int a = 0;
    for (int i: accumulate(range(5, 9))) 
    {
                CHECK(j[a] == i);
        a++;
                CHECK(j[a] + 1 != i);
                CHECK(j[a] - 1 != i);

    }
}

TEST_CASE("Test 2")
{
    int j[] = {10, 10+11, 10+11+12, 10+11+12+13};
    int a = 0;
    for (int i: accumulate(range(10, 14))) 
    {
                CHECK(j[a] == i);
        a++;
                CHECK(j[a] + 1 != i);
                CHECK(j[a] - 1 != i);

    }
}

TEST_CASE("Test 3")
{
    int j = 1;
    for(int i : range(5,9))
    {
        CHECK( j == i );
        CHECK( j+1 != i );
        CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 4")
{
    int j = 1;
    for(int i : range(10,14))
    {
        CHECK( j == i );
        CHECK( j+1 != i );
        CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 5")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 6")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 7")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 8")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 9")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 10")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}

TEST_CASE("Test 11")
{
    int j = 10;
    CHECK( j != 0 );
    CHECK( j != 1 );
    CHECK( j != 2 );
    CHECK( j != 3 );
    CHECK( j != 4 );
    CHECK( j != 5 );
    CHECK( j != 6 );
    CHECK( j != 7 );
    CHECK( j != 8 );
    CHECK( j != 9 );
    CHECK( j == 10 );
    CHECK( j != 11 );
    CHECK( j != 12 );
    CHECK( j != 13 );
    CHECK( j != 14 );
    CHECK( j != 15 );
    CHECK( j != 130 );
    CHECK( j != 10000 );
    CHECK( j != 20 );
    for(int i : range(4,9)){
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
                CHECK( j == i );
                CHECK( j == i );
                CHECK( j+1 != i );
                CHECK( j-1 != i );
        j++;
    }
}