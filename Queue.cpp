//
// Created by Mario Jarrin  on 6/10/17.
//

#include "iostream"
#include "Queue.h"
//#include "QueueItem.h"
using namespace std;

// dynamically create and init a new QueueItem object
void Queue::addItem(const char *pData) {
    QueueItem *pItem = new QueueItem (pData, ++_itemCounter);
    if (nullptr == _pHead) { // check for empty queue _pHead = _pTail = pItem;
        _pHead = pItem;
        _pTail = pItem;
    } else { // link new item onto tail of list using _pTail pointer ...
        QueueItem * iter = _pHead;
        while (iter->getNext() != 0) { //should skip first time
            iter = iter->getNext();
        }
        iter->setNext(new QueueItem(pData, _itemCounter));

        _pTail = pItem;
    }
}

//Todo: this works however I copied it to mess around
/*void Queue::addItem(const char *pData) {
    QueueItem *pItem = new QueueItem (pData, ++_itemCounter);
    if (nullptr == _pHead) { // check for empty queue _pHead = _pTail = pItem;
        _pHead = pItem;
        _pTail = pItem;
    } else { // link new item onto tail of list using _pTail pointer ...
        QueueItem * iter = _pHead;
        while (iter->getNext() != 0) { //should skip first time
            iter = iter->getNext();
        }
        iter->setNext(new QueueItem(pData, _itemCounter));

        _pTail = pItem;
    }
}*/

Queue::Queue() : _pHead{nullptr}, _pTail{nullptr}, _itemCounter{0} {

}

Queue::~Queue() {
    //erase();
}

void Queue::removeItem() {
    if (_pHead != nullptr) {
        QueueItem * iter = _pHead;
        delete _pHead;
        if (iter->getNext() != 0) {
            iter = iter->getNext();
            _pHead = iter;
        } else {
            _pHead = nullptr;
            _pTail = nullptr;
        }
    } else {
        cout << "List is empty. Deletion is not possible." << endl;
    }
    //cout << "Deleting Queue item number: " << _itemCounter << endl;
    //delete iter;
}

void Queue::print() {
    QueueItem * iter = _pHead;
    iter->getData();  //Outputs first item in linked list
    while (iter->getNext() != 0) {
        iter = iter->getNext();
        iter->getData();
    }
}

void Queue::erase() {
    if (_pHead != nullptr) {
        QueueItem * iter = _pHead;
        do {
            removeItem();
        } while (_pHead != nullptr);
        cout << "All members in the list have been deleted." << endl;
    } else {
        cout << "List is empty." << endl;
    }
}
