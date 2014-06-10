#ifndef ITEM_H
#define ITEM_H
#include <iostream>
class Item
{
public:
    Item(int type);
    virtual ~Item();
    int getType();
    void setType(int type);
protected:
private:
    int type;
};
#endif
