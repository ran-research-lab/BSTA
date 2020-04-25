//
// Created by rarce on 04/25/20.
//

#ifndef BSTA_BSTA_H
#define BSTA_BSTA_H

#include <iostream>
using namespace std;

const int CAPACITY = 1024;

class BSTA {
private:
    int A[CAPACITY];
    bool valid[CAPACITY] ;


    void recDisplay(ostream &out, int i, int dist) const;
    bool isValid(int i) const;

public:
    BSTA();
    bool search(int k) const;
    void insert(int k);
    bool remove(int k);
    void display(ostream &out) const;

};

ostream & operator<<(ostream &out, const BSTA &B);

#endif //BSTA_BSTA_H
