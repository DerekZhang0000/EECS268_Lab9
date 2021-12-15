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
#include "BST.h"
#include "BinaryNode.h"
#include <stdexcept>
#include <iostream>

BST::BST()
{
    m_root = nullptr;
    found = false;
}
BST::~BST()
{
    delete m_root;
}
void BST::clear()
{
    std::cout << "clear";
}
void BST::remove(int index)
{
    std::cout << "remove";
}
void BST::search(int index, BinaryNode* node) const
{
    if (node != nullptr)
    {
        BinaryNode* tempLeft = node->getLeft();
        search(index, tempLeft);
        if (node->m_pokemon->getIndex() == index)
        {
            std::cout << "Index #: " << node->m_pokemon->getIndex() << " US Name: " << node->m_pokemon->getUSName() << " JP Name: " << node->m_pokemon->getJPName() << "\n";
            found = true;
        }
        BinaryNode* tempRight = node->getRight();
        search(index, tempRight);
    }
}
void BST::addVisit(BinaryNode* node, Pokemon* pokemon)
{
    BinaryNode* tempLeft = node->getLeft();
    BinaryNode* tempRight = node->getRight();
    if (node != nullptr)
    {
        if (node->m_pokemon->getIndex() == pokemon->getIndex())
        {
            throw(std::runtime_error("Can not enter duplicate pokemon"));
        }
        else if (node->m_pokemon->getIndex() > pokemon->getIndex())
        {
            if (node->getLeft() == nullptr)
            {
                node->setLeft(new BinaryNode(pokemon));
                return;
            }
            else
            {
                addVisit(tempLeft, pokemon);
            }
        }
        else if (node->m_pokemon->getIndex() < pokemon->getIndex())
        {
            if (node->getRight() == nullptr)
            {
                node->setRight(new BinaryNode(pokemon));
                return;
            }
            else
            {
                addVisit(tempRight, pokemon);
            }
        }
    }
}
void BST::add(Pokemon* pokemon)
{
    if (m_root == nullptr)
    {
        m_root = new BinaryNode(pokemon);
    }
    else
    {
        addVisit(m_root, pokemon);
    }
}
void BST::visit(BinaryNode* node) const
{
    std::cout << "Index #: " << node->m_pokemon->getIndex() << " US Name: " << node->m_pokemon->getUSName() << " JP Name: " << node->m_pokemon->getJPName() << "\n";
}
void BST::visitPreOrder(BinaryNode* node) const
{
    if (node != nullptr)
    {
        visit(node);
        BinaryNode* tempLeft = node->getLeft();
        visitPreOrder(tempLeft);
        BinaryNode* tempRight = node->getRight();
        visitPreOrder(tempRight);
    }
}
void BST::visitInOrder(BinaryNode* node) const
{
    if (node != nullptr)
    {
        BinaryNode* tempLeft = node->getLeft();
        visitPreOrder(tempLeft);
        visit(node);
        BinaryNode* tempRight = node->getRight();
        visitPreOrder(tempRight);
    }
}
void BST::visitPostOrder(BinaryNode* node) const
{
    if (node != nullptr)
    {
        BinaryNode* tempRight = node->getRight();
        visitPreOrder(tempRight);
        BinaryNode* tempLeft = node->getLeft();
        visitPreOrder(tempLeft);
        visit(node);
    }
}