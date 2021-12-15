/* -----------------------------------------------------------------------------
 *
 * File Name:  CeoOfTree.h
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef CEOOFTREE_H
#define CEOOFTREE_H
#include "BST.h"

class CeoOfTree
{
    public:
    /**
    * @post Class is constructed. 
    * @param file name
    */
    CeoOfTree(std::string filename);
    /**
    * @post Class is destroyed. 
    *       
    */
    ~CeoOfTree();
    /** 
    * @pre None
    * @post Runs program
    * @param None
    * @throw None
    **/
    void run();
   private:
   BST* bst;
};

#endif