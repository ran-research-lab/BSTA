# Binary search tree

### Implemented using a static array.

The class BSTA is an implementation of a Binary Search Tree using a 1-based static array.  It uses the array `A` to store the keys, and the array `valid` to keep track of which elements in array `A` are valid. For example, initially, the constructor should initialize all elements of `valid` to `false` to indicate that the BST is empty (i.e. that `A` does not contain any valid keys.).


The following functions are provided and implemented:

* bool `isValid(int i) const`: returns `true` if index `i` of A currently contains a key.  

* the **ostream operator**, i.e. `<<` is overloaded so that `B` is a BSTA, when you do a `cout << B` the tree will be displayed in the terminal.     

Your assignment is to complete the implementation of the rest of the functions and provide tests (in main.cpp) to validate them.