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
#include "BinaryNode.h"
#include "Pokemon.h"
BinaryNode::BinaryNode(Pokemon* pokemon)
{
    m_pokemon = pokemon;
    m_leftNode = nullptr;
    m_rightNode = nullptr;
}
BinaryNode::~BinaryNode()
{
    delete m_pokemon;
    delete m_leftNode;
    delete m_rightNode;
}
BinaryNode* BinaryNode::getLeft()
{
    return m_leftNode;
}
void BinaryNode::setLeft(BinaryNode* pokemon)
{
    m_leftNode = pokemon;
}
BinaryNode* BinaryNode::getRight()
{
    return m_rightNode;
}
void BinaryNode::setRight(BinaryNode* pokemon)
{
    m_rightNode = pokemon;
}

