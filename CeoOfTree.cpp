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

#include "CeoOfTree.h"
#include <fstream>
#include <iostream>
#include <string>
std::ifstream inFile;

CeoOfTree::CeoOfTree(std::string filename)
{   //initializing variables
    inFile.open(filename);
    bst = new BST();
    std::string tempUS;
    int tempID;
    std::string tempJP;
    while(inFile >> tempUS >> tempID >> tempJP)
    {
        try
        {
            bst->add(new Pokemon(tempID, tempUS, tempJP));
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}
void CeoOfTree::run()
{   //runs main program
    int selection = 0;
    while (true)
    {
        std::cout << "Select an option:\n1) Search\n2) Add\n3) Print\n4) Quit\n";
        std::cin >> selection;
        if (selection == 1)
        {
            int index = 0;
            while (index <= 0)
            {
                std::cout << "Enter index number of pokemon: ";
                std::cin >> index;
            }
            bst->found = false;
            bst->search(index, bst->m_root);
            if (bst->found == false)
            {
                std::cout << "Pokemon not found in pokedex\n";
            }
        }
        else if (selection == 2)
        {
            int index = 0;
            std::string usName = "";
            std::string jpName = "";
            while (index <= 0)
            {
                std::cout << "Enter index number of pokemon: ";
                std::cin >> index;
            }
            std::cout << "Enter US name of pokemon: ";
            std::cin >> usName;
            std::cout << "Enter JP name of pokemon: ";
            std::cin >> jpName;
            try
            {
                bst->add(new Pokemon(index, usName, jpName));
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        else if (selection == 3)
        {
            int order = 0;
            std::cout << "Enter a traversal order:\n1)Pre-Order\n2)In-Order\n3)Post-Order\n";
            std::cin >> order;
            while (order < 1 || order > 3)
            {
                std::cout << "Enter a valid input\n";
                std::cin >> order;
            }
            if (order == 1)
            {
                bst->visitPreOrder(bst->m_root);
            }
            else if (order == 2)
            {
                bst->visitInOrder(bst->m_root);
            }
            else if (order == 3)
            {
                bst->visitPostOrder(bst->m_root);
            }
        }
        else if (selection == 4)
        {
            break;
        }
        else
        {
            std::cout << "Enter a valid input\n";
        }
        selection = 0;
    }
}
CeoOfTree::~CeoOfTree()
{
    inFile.close();
    delete bst;
}