//
// Created by Mario Jarrin on 6/10/17.
//

//#include "Queue.h"
#include "QueueItem.h"
#include <iostream>
#include <cstring>
using namespace std;

QueueItem::QueueItem(const char *pData, int id) : _itemId {id} {
    strcpy(_data, pData);
    _pNext = nullptr;
}

void QueueItem::setNext(QueueItem *pItem) {
    if (_pNext != nullptr) {
        QueueItem * t_ptr = _pNext;
        _pNext = pItem;
        pItem->_pNext = t_ptr;
    } else {
        _pNext = pItem;  //assign next_ptr to point to same place as next_info
    }
}

QueueItem *QueueItem::getNext() const {
    return _pNext;
}

int QueueItem::getId() const {
    return 0;
}

const char *QueueItem::getData() const {
    cout << _itemId << " "<< _data << endl;
 //   return nullptr;
}
