/* -----------------------------------------------------------------------------
 *
 * File Name:  BST.h
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.
#ifndef BST_H
#define BST_H
#include "BSTInterface.h"
#include "Pokemon.h"
#include "BinaryNode.h"
class BST : public BSTInterface<Pokemon*, int>
{
    public:
    /**
    * @post Class is constructed
    */
    BST();
    /**
    * @post Class is destroyed
    */
    ~BST();
    /**
    * @post Adds pokemon to binary search tree
    * @throw if Pokemon is already in the tree
    */
    void add(Pokemon* pokemon);
    /**
    * @post Returns position next node that can be placed
    */
    void addVisit(BinaryNode* node, Pokemon* pokemon);
    /**
    * @post returns pokemon with given index
    * @throw if Pokemon is not in tree
    */
    void search(int index, BinaryNode* node) const;
    /**
    * @post Empties tree
    */
    void clear();
    /**
    * @post Removes pokemon from tree
    * @throw if Pokemon is not in tree
    */
    void remove(int index);
    /**
    * @post traverses tree pre-order
    */
    void visitPreOrder(BinaryNode* node) const;
    /**
    * @post traverses tree in order
    */
    void visitInOrder(BinaryNode* node) const;
    /**
    * @post traverses tree post-order
    */
    void visitPostOrder(BinaryNode* node) const;
    /**
    * @post Prints pokemon of node
    */
    void visit(BinaryNode* node) const;
    BinaryNode* m_root;
    mutable bool found;
};
#endif