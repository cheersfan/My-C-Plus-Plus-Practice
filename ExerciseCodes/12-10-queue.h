//
// Created by root on 12/10/18.
//

#ifndef MYCLIONPROJECT_12_10_QUEUE_H
#define MYCLIONPROJECT_12_10_QUEUE_H


class Customer{
private:
    long arrive; //the arrive time
    int processtime; // the process time
public:
    Customer(){arrive = processtime = 0;}
    void set(long when); //create a random arrive time in 1 ~ 3 min
    long when() const{return arrive;}
    int ptime() const{return processtime;}
};

typedef Customer Item;

class Queue{
private:
    struct Node{
        Item item;
        struct Node * next;
    };
    enum{Q_SIZE = 10};

    Node * front;
    Node * rear;
    int items;
    const int qsize;

    Queue(const Queue & q) : qsize(0){}
    Queue & operator=(const Queue & q){return * this;}

public:
    Queue(int qs = Q_SIZE);
    ~Queue();

    bool isEmpty() const;
    bool isFull() const;
    int queuecount() const;
    bool enqueue(const Item &item);
    bool dequeue(Item & item);
};



#endif //MYCLIONPROJECT_12_10_QUEUE_H
