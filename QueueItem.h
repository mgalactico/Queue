//
// Created by Mario Jarrin  on 6/10/17.
//

#ifndef QUEUE_QUEUEITEM_H
#define QUEUE_QUEUEITEM_H

class QueueItem {
public:
    QueueItem(const char *pData, int id); // constructor
    void setNext(QueueItem *pItem);
    QueueItem* getNext() const;
    int getId() const;
    const char* getData() const;

private:
    char _data[30];    // data value (null terminated character string)
    const int _itemId; // unique id for item in queue
    QueueItem* _pNext; // next item in queue
};

#endif //QUEUE_QUEUEITEM_H
