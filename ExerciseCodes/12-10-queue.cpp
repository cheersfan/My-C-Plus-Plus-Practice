//
// Created by root on 12/10/18.
//

#include "12-10-queue.h"
#include <iostream>
#include <cstdlib>

using namespace std;

//const value should be initialized when
Queue::Queue(int qs) :qsize(0) {
    front = rear = NULL;
    items = 0;
}

bool Queue::isEmpty() const {
    return items == 0;
}

bool Queue::isFull() const {
    return items == qsize;
}

int Queue::queuecount() const {
    return items;
}

bool Queue::enqueue(const Item &item) {
    if(isFull()){
        return false;
    }

    Node * add = new Node;
    add->item = item;
    add->next = NULL;
    items ++;

    if(front == NULL){
        front = add;
    }else{
        rear->next = add;
    }

    rear = add;
    return true;
}

bool Queue::dequeue(Item & item){
    if(front == NULL){
        return false;
    }

    item = front->item;
    items --;
    Node * temp = front;
    front = front->next;
    delete temp;
    if(items == 0){
        rear = NULL;
    }
    return true;
}

Queue::~Queue() {
    Node * temp;
    while (front != NULL){
        temp = front;
        front = front->next;
        delete temp;
    }
}

void Customer::set(long when) {
    processtime = std::rand() & 3 +1;
    arrive = when;
}