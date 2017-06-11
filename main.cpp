//
// Created by Mario Jarrin on 6/10/17.
//

#include <iostream>
#include "Queue.h"

int main() {
    Queue myQueue;

    myQueue.addItem("red");
    myQueue.removeItem();
    myQueue.addItem("green");
    myQueue.removeItem();
    myQueue.addItem("blue");
    myQueue.removeItem();
    myQueue.addItem("orange");
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.erase();
//    myQueue.removeItem();
/*
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
    myQueue.removeItem();
*/

    //myQueue.print();  // print contents of queue (item ID and data)

    //myQueue.removeItem();

    return 0;
}