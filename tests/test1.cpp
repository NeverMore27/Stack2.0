#include <catch.hpp>

#include "stack.hpp"

TEST_CASE("init") 
{
    forward_list<int> s;
    REQUIRE(s.count() == 0);
     REQUIRE(!s.empty());
}

TEST_CASE("init list") 
{
    forward_list<int> s={1, 2, 3, 4, 5};
    REQUIRE(s.count() == 5);
}

TEST_CASE("push") 
{
   forward_list<int> s;
    s.push(5);
    s.push(7);
    REQUIRE(s.count() == 2);
}

 
