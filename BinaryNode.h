/* -----------------------------------------------------------------------------
 *
 * File Name:  BinaryNode.h
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef BINARYNODE_H
#define BINARYNODE_H
#include "Pokemon.h"

class BinaryNode
{
    public:
    /**
    * @post Class is constructed. 
    * @param Pokemon pointer
    */
    BinaryNode(Pokemon* pokemon);
    /**
    * @post Class is destroyed. 
    */
    ~BinaryNode();
    /** 
    * @post Returns left pointer
    **/
    BinaryNode* getLeft();
    /** 
    * @post Sets left pointer
    **/
    void setLeft(BinaryNode*);
    /** 
    * @post Returns right pointer
    **/
    BinaryNode* getRight();
    /** 
    * @post Sets right pointer
    **/
    void setRight(BinaryNode*);
    Pokemon* m_pokemon;
    private:
    BinaryNode* m_leftNode;
    BinaryNode* m_rightNode;
};

#endif