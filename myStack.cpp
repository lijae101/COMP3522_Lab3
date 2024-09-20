//
// Created by liamj on 2024-09-17.
//

#include "myStack.hpp"

#include <chrono>


// Constructor to initialize the stack
MyStack::MyStack() : topPointer(-1) {}

bool MyStack::push(int value) {
    if(full()) {
        //return false if the stack is full
        return false;
    }

    stack[++topPointer] = value;
    return true;
}

void MyStack::pop() {
    if(!empty()) {
        --topPointer;
    }
}

int MyStack::top() const {
    if(empty()) {
        return EMPTY_STACK_VALUE;
    }
    return stack[topPointer];

}

bool MyStack::empty() const {
    return topPointer == -1;
}

bool MyStack::full() const {
    return topPointer == MAX_SIZE -1;
}

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
