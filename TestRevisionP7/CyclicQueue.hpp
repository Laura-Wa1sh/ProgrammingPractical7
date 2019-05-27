//
//  CyclicQueue.hpp
//  TestRevisionP7
//
//  Created by Laura Walsh on 04/05/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef CyclicQueue_hpp
#define CyclicQueue_hpp

class CyclicQueue{
public:
    CyclicQueue(int maxSize); // constructor
    ~CyclicQueue(); //destructor
    void addAtEnd(int i); //adds item to end of queue if room
    int* removeFront(); //returns pointer to front item and removes it
    int *getAtFront(); //returns pointer to front item but doesnt remove it
    bool isEmpty(); // returns true if the queue is currently empty
    int size(); // returnd the number of items in the queue
private:
    int maxBufferSize; //size of the array
    int* buffer;        //the array (buffer) itself
    int first, last; //Positions of the first and last items in the buffer
    int numItems; // number of items currently in the buffer
};



#endif /* CyclicQueue_hpp */
