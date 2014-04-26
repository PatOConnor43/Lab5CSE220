//Vishal Mehta
//Pat O Connor
//Nash Kleppan
//Group 19
//Lab 5
//CSE 220 Spring 2014
//
//  Token.h
//  Lab4
//
//  Created by Bryce Holton.
//

#ifndef __Lab4__Token__
#define __Lab4__Token__

#include <iostream>
#include "common.h"
#include "LineNumberList.h"

using namespace std;

/**************
 this is a valid Pascal token.  A token must have a literal type,
 a literal value, and a token code.
 ***************/
class Token
{
private:
    TokenCode code;
    string tokenString;




//    LiteralType type; //OUT
//    union //OUT
//    {
//        int integer;
//        float real;
//        char *stringLiteral;
//    }
//    literal;


//    //What variables and methods am I missing to implement a binary tree.
//    Token *leftChild; // OUT
//    Token *rightChild;
//    LineNumberList *list;
    
public:
    Token();
    ~Token();

    void setCode(TokenCode newCode);
    TokenCode getCode();
    void setTokenString(string s);
    string getTokenString();

    virtual void print();




//    void setType(LiteralType newType); // OUT
//    LiteralType getType();
//    void setLiteral(int newInteger);  // OUT
//    int getIntLiteral();
//    void setLiteral(float newReal);
//    float getRealLiteral();
//    void setLiteral(string newString);
//    string getStringLiteral();

//    void setLeftChild(Token *tok); // OUT
//    Token *getLeftChild();
//    void setRightChild(Token *tok);
//    Token *getRightChild();
//    void addToLineNumberList(LineNumberList *listItem);
//    LineNumberList *getLineNumberList();
};

#endif /* defined(__Lab4__Token__) */
