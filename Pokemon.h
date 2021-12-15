/* -----------------------------------------------------------------------------
 *
 * File Name:  Pokemon.h
 * Author: Derek Zhang 
 * Assignment:   EECS-268/269 Lab 9
 * Description:  This program will create a pokedex simulator.
 * Date: 11/22/2021
 *
 ---------------------------------------------------------------------------- */
//Start your program.

#ifndef POKEMON_H
#define POKEMON_H
#include <string>
class Pokemon
{
    public:
    /**
    * @post Class is constructed.
    */
    Pokemon(int index, std::string usName, std::string jpName);
    /**
    * @post Class is destroyed. 
    */
    ~Pokemon();
    /**
    * @post Returns index of pokemon
    */
    int getIndex();
    /**
    * @post Returns US name of pokemon
    */
    std::string getUSName();
    /**
    * @post Returns JP name of pokemon
    */
    std::string getJPName();
    /**
    * @post Returns whether or not two indexes of Pokemon are the same
    */
    bool operator==(int index);
    /**
    * @post Returns whether or not one index of Pokemon is greater than the other
    */
    bool operator>(int index);
    /**
    * @post Returns whether or not two indexes of Pokemon are the same
    */
    bool operator==(const Pokemon& ref);
    /**
    * @post Returns whether or not two indexes of Pokemon are the same
    */
    bool operator>(const Pokemon& ref);
    private:
    int m_index;
    std::string m_usName;
    std::string m_jpName;
};
#endif