//
// Created by Mario Jarrin  on 6/10/17.
//

#include "QueueItem.h"

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

class Queue {
public:
    Queue();    // ctor inits a new empty Queue
    ~Queue();   // dtor erases any remaining QueueItems
    void addItem(const char *pData);
    void removeItem();
    void print();
    void erase();
private:
    QueueItem *_pHead; // always points to first QueueItem in the list
    QueueItem *_pTail; // always points to the last QueueItem in the list
    int _itemCounter;  // always increasing for a unique id to assign to each new QueueItem
};

#endif //QUEUE_QUEUE_H
