/* -----------------------------------------------------------------------------
 *
 * File Name:  BSTInterface.h
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef BSTInterface_H
#define BSTInterface_H
#include "BinaryNode.h"
template <typename ItemType, typename KeyType>
class BSTInterface
{
    public:
    virtual ~BSTInterface(){}
    virtual void add(ItemType entry) = 0; //throws std::runtime_error if duplicate added
    virtual void search(KeyType key, BinaryNode* node) const = 0; //throws std::runtime_error if not in tree
    virtual void clear() = 0; //Empties the tree
    virtual void remove(KeyType key) = 0; //throws std::runtime_error if not in tree

    virtual void visitPreOrder(BinaryNode* node) const = 0; //Visits each node in pre order
    virtual void visitInOrder(BinaryNode* node) const = 0; //Visits each node in in order
    virtual void visitPostOrder(BinaryNode* node) const = 0; //Visits each node in post order
};
#endif