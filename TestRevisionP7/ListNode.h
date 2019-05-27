//
//  ListNode.h
//  TestRevisionP7
//
//  Created by Laura Walsh on 04/05/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#ifndef ListNode_h
#define ListNode_h

// An object of type ListNode is a link which simply holds three things:
//        - an item (of type T)
//        - a pointer to the previous ListNode in the list(if any)
//        - a pointer to the next ListNode in the list(if any)

template <typename T>
class ListNode
{
public:
    ListNode(T i, ListNode<T>* prev, ListNode<T>* nxt);
    ~ListNode() {};
    
    // The three things held in a ListNode link
    T item;
    ListNode<T> *next, *previous;
};

template <typename T>
ListNode<T>::ListNode(T i, ListNode<T>* prev, ListNode<T>* nxt)
: item(i), previous(prev), next(nxt)
{
}


#endif /* ListNode_h */
