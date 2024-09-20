//
// Created by liamj on 2024-09-17.
//
//

#ifndef MYSTACK_HPP
#define MYSTACK_HPP
#include <string>
#include <sstream>
using namespace std;
const int EMPTY_STACK_VALUE = -1;

class MyStack {
    private:
        static constexpr int MAX_SIZE = 10;
        int stack[MAX_SIZE];
        int topPointer;

    public:
        MyStack();
        bool push(int value);
        void pop();
        int top() const;
        bool empty() const;
        bool full() const;
        string print() const;
};


#endif //MYSTACK_HPP
