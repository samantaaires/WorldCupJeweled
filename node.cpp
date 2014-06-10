#include "Node.h"

Node::Node() {
    //ctor
	this->item = NULL;
}

Node * Node::getNext() {
    return this->next;
}

void Node::setNext(Node * next){
    this->next = next;
}

Item * Node::getItem() {
    return this->item;
}

void Node::setItem(Item *item) {
    this->item = item;
}

Node::~Node() {
    //dtor
}
