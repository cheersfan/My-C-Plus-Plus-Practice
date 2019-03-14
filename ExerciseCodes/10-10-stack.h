//
// Created by root on 12/1/18.
//

#ifndef MYCLIONPROJECT_STACK_H
#define MYCLIONPROJECT_STACK_H

typedef unsigned long Item;
class Stack{
private:
    enum {MAX = 10};
    Item items[MAX];
    int top;
public:
    Stack();
    bool isEmpty() const;
    bool isFull() const;
    bool push(const Item & item);
    bool pop(Item & item);
};

#endif //MYCLIONPROJECT_STACK_H
