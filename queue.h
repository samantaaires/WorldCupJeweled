#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
#include "Node.h"

class Queue {

public:
    Queue();
    virtual ~Queue();
    void push(Node * node);
    void clear();
    int size();
    Node * pop();
    void setCurrentType(int currentType);
    int getCurrentType();

protected:
private:
    int begin;
    int end;
    int currentType;
    Node * queue[8];
};

#endif
