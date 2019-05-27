//
//  main.cpp
//  TestRevisionP7
//
//  Created by Laura Walsh on 04/05/2019.
//  Copyright © 2019 Laura Walsh. All rights reserved.
//

#include <iostream>
#include <string>
#include <ctime>
#include "CyclicQueue.hpp"
#include "LinkedList.h"
#include "ListNode.h"
using namespace std;


void testCyclicQueue1(){
    CyclicQueue q1(5);
    
    int *f =q1.getAtFront();
    if(f) cout << "Front item = " << *f << endl;
   
    for(int i =1;i<=5;i++) q1.addAtEnd(i);

    
    q1.addAtEnd(100);
    
    f= q1.removeFront();
    if(f) cout << "Front item: " << *f << endl;
    f = q1.removeFront();
    if(f) cout << "Front item: " << *f << endl;
    
    // getting a front item
    f = q1.getAtFront();
    if (f) cout << "Front item = " << *f << endl;
    f = q1.getAtFront();
    if (f) cout << "Front item = " << *f << endl;
}

void testCyclicQueue2(){
    
    CyclicQueue q2(30);
    for(int i =1;i<=6;i++) q2.addAtEnd(i);
    int *f = q2.removeFront();
    cout << *f << endl;
    for(int i =0; i< 2;i++) {
        f = q2.removeFront();
        cout << *f << endl;
    }
    for(int i = 7; i<=12; i++) q2.addAtEnd(i);
    for(int i =0; i< 3;i++) {
        f = q2.removeFront();
        cout << *f << endl;
    }
    f = q2.removeFront();
    cout << *f << endl;
    for(int i = 13; i<=18; i++) q2.addAtEnd(i);
    for(int i =0; i< 4;i++) {
        f = q2.removeFront();
        cout << *f << endl;
    }
    while(!q2.isEmpty()){
        f= q2.removeFront();
        cout << *f<<endl;
    }
}

// Part 2
void testCountList()
{
    // an empty int list
    LinkedList<int> ilist;
    
    // set up the list with random numbers
    srand((unsigned)time(NULL));
    for (int n = 0; n < 100; n++) {
        int rand_num = rand() % 10;
        ilist.addAtEnd(rand_num);
    }
    
    // count occurrences of 0-19 in the stack
    for (int n = 0; n < 20; n++)
        cout << "Number of occurrences of " << n << " in the list is " << ilist.countList(n) << endl;
}
bool isLetter(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}
void testListOfWords() {
    // a linked list of words
    LinkedList< string > words;
    // reading and set up the list terminated by a full stop
    char ch;
    string word = "";
    while (ch = cin.get()) {
        if (ch == '.') break;
        
        // word separator (e.g. space, ',' etc.)
        if (!isLetter(ch)) {
            if (word != "") words.addAtEnd(word);
            word = "";
        }
        // a letter in word
        word = word + ch;
    }
    for(int i =0; i< words.size; i++){
        words.setAtStart();
        cout << *words.getNext();
       
    }

}


int main(){
   // testCyclicQueue1();
    
  // testCyclicQueue2();
    
   // testCountList();
    
   // testListOfWords();
    
    
    
    
    // an empty char list
    LinkedList<char> clist;
    // add 10 chars one after another
    for (int i = 0; i < 10; i++)
        clist + ('a' + i);
    // get chars at variable positions
    char *f = clist / 3;
    if(f)
        cout << "char at " << 3 << " is: " << *f << endl;
    f = clist / 7;
    if(f)
        cout << "char at " << 7 << " is: " << *f << endl;
    
    return 0;
}
