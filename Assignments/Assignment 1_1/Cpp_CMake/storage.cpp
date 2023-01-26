#include "storage.h"
#include <iostream>

using namespace std;

/** Create a Node to hold the data, then put it at the head of the list.
 * @param text The data for the new node
*/
void Storage::push(int data)
{
    // Implementera här
}

/** Remove the head Node and return its data.
 * 
 * @param [out] The data (only valid if return true)
 * @return True if there is a node to return
*/
bool Storage::pop(int &data) {
    // Implementera här

    return true;
}

/**
 * Return the data from the head Node, without removing it.
 * 
 * @param [out] The data (only valid if return true)
 * @return True if text has been returned successfully (there is a node)
*/
bool Storage::peek(int &data) {
    // Implementera här
    return true;
}

/**
 * Return True if the list is empty, otherwise False 
 * 
 * @return True if the storage is empty
*/
bool Storage::isEmpty() {
    // Implementera här
    return true;
}

/**
 * Swaps the nodes at position i and j.
 * 
 * @return Returns true if successful, otherwise false (e.g. outside range)
*/
/* Uncomment to implement
bool Storage::swap(int i, int j) {
    return false;
}
*/ 

