#include "Queue.h"

Queue::Queue() {
    this->begin = -1;
    this->end = 0;
}
Queue::~Queue() {}

void Queue::push(Node * node){
    this->queue[end] = node;
    end++;
}
void Queue::clear(){
    this->begin = -1;
    this->end = 0;
    for(int i=0; i<8 ; i++ )
        this->queue[i] = NULL;
}
int Queue::size(){
    return this->end - (this->begin + 1);
}
Node * Queue::pop(){
    this->begin++;
    return this->queue[begin];
}

void Queue::setCurrentType(int currentType){
    this->currentType = currentType;
}

int Queue::getCurrentType(){
    return this->currentType;
}
