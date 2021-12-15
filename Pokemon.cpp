/* -----------------------------------------------------------------------------
 *
 * File Name:  Pokemon.cpp
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#include "Pokemon.h"
Pokemon::Pokemon(int index, std::string usName, std::string jpName)
{
    m_index = index;
    m_usName = usName;
    m_jpName = jpName;
}
Pokemon::~Pokemon()
{

}
int Pokemon::getIndex()
{
    return m_index;
}
std::string Pokemon::getUSName()
{
    return m_usName;
}
std::string Pokemon::getJPName()
{
    return m_jpName;
}
bool Pokemon::operator==(int index)
{
    if(m_index == index)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Pokemon::operator>(int index)
{
    if(m_index > index)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Pokemon::operator==(const Pokemon& ref)
{
    if(m_index == ref.m_index)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Pokemon::operator>(const Pokemon& ref)
{
    if(m_index > ref.m_index)
    {
        return true;
    }
    else
    {
        return false;
    }
}