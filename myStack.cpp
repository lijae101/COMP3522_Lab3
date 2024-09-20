//
// Created by liamj on 2024-09-17.
//

#include "myStack.hpp"

#include <chrono>


// Constructor to initialize the stack
MyStack::MyStack() : topPointer(-1) {}

//Function to push values onto the stack
bool MyStack::push(int value) {
    if(full()) {
        //return false if the stack is full
        return false;
    }

    stack[++topPointer] = value;
    return true;
}

//Function to pop elements from the stack
void MyStack::pop() {
    if(!empty()) {
        --topPointer;
    }
}

//Function to check the current top value of the stack
int MyStack::top() const {
    if(empty()) {
        return EMPTY_STACK_VALUE;
    }
    return stack[topPointer];

}

//Function to check whether the stack is empty
bool MyStack::empty() const {
    return topPointer == -1;
}

//function to check whether the stack is full
bool MyStack::full() const {
    return topPointer == MAX_SIZE -1;
}

//Function to print the stack
string MyStack::print() const {
    stringstream ss;
    if (empty()) {
        ss << "Stack is empty.";
    } else {
        //ss << "Stack (bottom to top): ";
        for (int i = 0; i <= topPointer; ++i) {
            ss << stack[i];
            if (i != topPointer) ss << ", ";
        }
    }

    return ss.str();
}
