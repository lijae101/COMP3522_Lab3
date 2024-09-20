//
// Created by liamj on 2024-09-17.
//
#define CATCH_CONFIG_MAIN // This tells Catch to provide a main(), put this in one cpp file
#include "catch.hpp"
#include "myStack.hpp"

//Test that newly created stack is empty
TEST_CASE("A new stack is empty", "testTag1")
{
    MyStack tester;

    REQUIRE(tester.empty() == true);
    REQUIRE(tester.full() == false);
}

//Test pushing elements onto the stack
TEST_CASE("Push elements onto stack", "testTag2") {
    MyStack tester;

    REQUIRE(tester.push(10) == true);
    REQUIRE(tester.push(20) == true);
    REQUIRE(tester.push(30) == true);
    REQUIRE(tester.print() == "10, 20, 30");
}

// Test checking the top element of the stack
TEST_CASE("Top element of the stack", "testTag3") {
    MyStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    REQUIRE(stack.top() == 30);
}

// Test popping elements from the stack
TEST_CASE("Pop elements from the stack", "testTag4") {
    MyStack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    stack.pop();
    REQUIRE(stack.top() == 20);

    stack.pop();
    REQUIRE(stack.top() == 10);

    stack.pop();
    REQUIRE(stack.empty() == true);
}

// Test stack full condition
TEST_CASE("Stack full condition", "testTag5") {
    MyStack stack;

    for (int i = 0; i < 10; ++i) {
        REQUIRE(stack.push(i * 10) == true);
    }

    REQUIRE(stack.full() == true);
    REQUIRE(stack.push(100) == false);
}

// Test popping from an empty stack
TEST_CASE("Pop from an empty stack", "testTag6") {
    MyStack stack;

    stack.pop();
    REQUIRE(stack.empty() == true);
}

// Test top of an empty stack
TEST_CASE("Top of an empty stack", "testTag7") {
    MyStack stack;

    REQUIRE(stack.top() == EMPTY_STACK_VALUE);
}
