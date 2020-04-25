//
// Created by rarce on 04/25/20.
//

#include "BSTA.h"
#include <iostream>

// Implement the constructor.
// Remember to initialize all elements of the valid array to false!
BSTA::BSTA() {

}


// Given e, an element, search for it in the tree.
// Return true if found, false otherwise.

bool BSTA::search(int k) const{
    return false;
}



// Given an element, insert it into tree. You may assume that we will
// always insert unique keys.

void BSTA::insert(int k) {

}



// Given an element, if found in the tree, remove it and return true.
// Otherwise return false.

bool BSTA::remove(int k) {
    return false;
}


// Recursive display function, which is able to traverse
// all nodes of the BST
void BSTA::recDisplay(ostream &out, int i, int dist) const{
    int cl = i << 1;
    int cr = cl + 1;

    // traverse to the right
    if (isValid(cr)) recDisplay(out, cr, dist + 1);

    // print this node
    for (int i = 0; i < dist; i++) cout << "    ";
    if (valid[i]) cout << A[i] << endl;

    // traverse to the left
    if (isValid(cl)) recDisplay(out, cl, dist + 1);
};


// Implementation of the display function which is called
// by the overloaded operator<<

void BSTA::display(ostream &out) const {
    recDisplay(out, 1, 0);
};


// Given an index i returns true if the corresponding
// node is valid.

bool BSTA::isValid(int i) const {
    return i < CAPACITY and valid[i];
}


ostream & operator<<(ostream &out, const BSTA &B) {
    B.display(out);
    return out;
}
