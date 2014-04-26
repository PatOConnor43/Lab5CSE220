//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
/*
 * Identifier.h
 *
 *  Created on: Apr 20, 2014
 *      Author: Vishal
 */

#ifndef IDENTIFIER_H_
#define IDENTIFIER_H_

#include "Token.h"

class Identifier : public Token
{
public:
	Identifier();
	~Identifier();

    void setLeftChild(Identifier *tok); // OUT
    Identifier *getLeftChild();
    void setRightChild(Identifier *tok);
    Identifier *getRightChild();
    void addToLineNumberList(LineNumberList *listItem);
    LineNumberList *getLineNumberList();
    void print();

private:
    //What variables and methods am I missing to implement a binary tree.
    Identifier *leftChild;
    Identifier *rightChild;
    LineNumberList *list;
};

#endif /* IDENTIFIER_H_ */
