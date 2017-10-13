#include <catch.hpp>

#include "stack.hpp"

TEST_CASE("push") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    int val=Stack.pop()
    REQUIRE(Stack.count() == 2);
    REQUIRE( val== 7);
}

TEST_CASE("pop") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    Stack.push(9);
    int val =Stack.pop();
    REQUIRE(Stack.count() == 2);
    REQUIRE(val==9);
}

TEST_CASE("1") 
{
    stack<int> Stack;
    REQUIRE(Stack.count() == 0);
}
TEST_CASE("2") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    Stack.push(9);
    stack<int> s(Stack);
    REQUIRE(s.count() == 3);
    int val =s.pop();
    REQUIRE(val==9);
     int val =s.pop();
    REQUIRE(val==7);
     int val =s.pop();
    REQUIRE(val==5);
}
TEST_CASE("2") 
{
    stack<int> Stack;
    Stack.push(5);
    Stack.push(7);
    Stack.push(9);
    stack<int> s(Stack);
    REQUIRE(s == Stack);
}
