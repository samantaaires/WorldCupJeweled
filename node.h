#ifndef NODE_H
#define NODE_H
#include <iostream>
#include "Item.h"

class Node {
public:
    Node();
    virtual ~Node();
    Node *getNext();
    void setNext(Node *next);
    
    Item *getItem();
    void setItem(Item *item);
protected:
private:
    Node *next;
    Item *item;
};
#endif
